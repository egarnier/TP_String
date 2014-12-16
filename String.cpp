//****************************************************************************
//
//
//
//****************************************************************************

 
// ===========================================================================
//                                   Libraries
// ===========================================================================

// ===========================================================================
//                                 Project Files
// ===========================================================================
#include "String.h"




//############################################################################
//                                                                           #
//                           Class Template_class                            #
//                                                                           #
//############################################################################

// ===========================================================================
//                         Definition of static attributes
// ===========================================================================
size_t String::MAX_SIZE = 65535;

// ===========================================================================
//                                  Constructors
// ===========================================================================

// Constructor by default
String::String(void)
{
	length_ = 0;
	capacity_ = length_;
	str = NULL;
}

// Constructor using a c-string as parameter
String::String(const char* phrase)
{
	//Length
	length_ = 0;
	for (size_t i=0; i<MAX_SIZE; i++)
	{
		if (phrase[i] != '\0')
		{
			length_ = length_ + 1;
		}
		else 
		{
			break;
		}
	}

	// Capacity
	capacity_ = length_ + 30;
	
	// String
	str = new char[capacity_];
	for (size_t j=0; j<length_; j++)
	{
		str[j] = phrase[j];
	}
}

// Constructor by copy
String::String(const String& sentence)
{
	length_ = sentence.length();
	
	capacity_ = length_ + 30;

	str = new char[capacity_];

	for (size_t i = 0; i < length_; ++i)
	{
		str[i] = sentence.c_str()[i];
	}

}

// ===========================================================================
//                                  Destructor
// ===========================================================================
String::~String(void)
{
	delete[] str;
}

// ===========================================================================
//                                 Public Methods
// ===========================================================================
// Getters
size_t String::max_size(void) const
{
	return MAX_SIZE;
}

size_t String::length(void) const
{
	return length_;
}

size_t String::size(void) const
{
	return length_;
}
size_t String::capacity(void) const
{
	return capacity_;
}

char* String::c_str(void) const
{
	return str;
}

// Methods
void String::resize(const size_t n)
{
	if (n>MAX_SIZE)
	{
		printf("Not allowed, please put a value inferior at %ld.\n",MAX_SIZE );
	}
	else if (length_ > n)
	{
		for (size_t i = n; i<length_; i++)
		{
			str[i] = '\0';
		}
		length_ = n;
	}
}

void String::resize(size_t n, char c)
{
	if (n>MAX_SIZE)
	{
		printf("Not allowed, please put a value inferior at %ld.\n",MAX_SIZE );
	}
	else if (length_ < n)
	{
		for (size_t i = length_; i<n; i++)
		{
			str[i] = c;
		}
		length_ = n;
	}
}

char& String::at (size_t pos)
{
    size_t l = 0;
    for (size_t i = 0; i < MAX_SIZE; i++)
    {
        if (str[i] != '\0')
        {
            l += 1;
        }
        else 
        {
            break;
        }
    }
	if (pos > 0 && pos <= l)
	{
		return str[pos-1];
	} 
	else
	{
		printf("Not accepted : The %ldth letter doesn't exist.\n", pos);
		char* a = new char[1];
		*a = '\0';
		return *a;
	}
	
}

bool String::empty(void)
{
	bool is_empty;
	if(length_ == 0){
		is_empty = true;
	}
	else{
		is_empty = false;
	}
	return is_empty;
}

void String::clear(void)
{
	if (length_ != 0)
	{
		str[0] = '\0';
		length_ = 0;
	} 
}


void String::reserve (size_t n)
{
	if(n > MAX_SIZE)
	{
		printf("The value is bigger than the maximum size allowed for a string, please change your value.\n");
	}
	else if(n > capacity_)
	{
		char* tmp = new char[length_];
		for(size_t i = 0; i < length_; i++)
		{
			tmp[i] = str[i];
		}
		capacity_ = n;
		str = new char[capacity_];
		for (size_t i = 0; i < length_; i++)
		{
			str[i] = tmp[i];
		}
		delete tmp;
	}
}

//=================================
// Operators
//=================================


//Operator= using char
String& String::operator=(char c)
{
    if (str == NULL)
    {
    	length_ = 1;
    	str = new char[length_];
    	*str = c;
    	*(str + 1) = '\0';
    	return *this;
	} 
	else
	{
		length_ = 1;
	    *str = c;
    	*(str + 1) = '\0';
    	return *this;
	}
}

// Operator= using char*
String& String::operator= (const char* s)
{
	size_t s_length = 0;
	for(size_t k = 0; k < MAX_SIZE; k++)
	{
		if (s[k] != '\0')
		{
			s_length = s_length + 1;
		}
		else 
		{
			break;
		}
	}
	if(s_length > capacity_)
	{
		this[0].reserve(s_length);
		for(size_t i = 0 ; i<capacity_ ; i++)
		{
			str[i] = s[i];
		}
	}
	else
	{
		length_ = s_length;
		for(size_t j = 0 ; j < capacity_ ; j++)
		{
			str[j] = s[j];
		}
	}
	return *this;
}

// Operator= using String
String& String::operator= (const String& str_)
{
	length_ = str_.length();

	capacity_ = length_ + 30;

	str = new char[capacity_];

	for (size_t i = 0; i < length_; i++)
	{
		str[i] = str_[i];
	}

	return *this;
}

// Operator+ using char
String String::operator+ (const char lhs)
{
	if(length_ + 1 > MAX_SIZE)
	{
		printf("The String is bigger than Max_Size.\n");
		return *this;
	}
	else
	{
		char* new_str = new char[length_+1];

		for (size_t i = 0; i < length_; ++i)
		{
			new_str[i] = str[i];
		}

		new_str[length_] = lhs;

		String final = String(new_str);
		length_ = length_ + 1;

		delete[] new_str;

		return final;
	}
}

// Operator+ using char*
String String::operator+ (const char* rhs)
{
    // Length of rhs
    size_t rhslength = 0;
    for (size_t i = 0; i < MAX_SIZE; i++) 
    {
        if (rhs[i] != '\0')
        {
            rhslength = rhslength + 1;
        }
        else
        {
            break;
        }
    }

    size_t l = length_ + rhslength;
    char* tab = new char[l];  

    for (size_t i = 0; i<length_; i++)
    {
        tab[i] = str[i];
    }   
    for (size_t j = length_; j<l; j++)
    {
        tab[j] = rhs[j-length_];
    }
    String final = String(tab);
    length_ = l;
    delete tab;

    return final;
}

// Operator+ using String
String String::operator+ (const String& myString)
{
	size_t final_length = (length_ + myString.length());
	char* new_str = new char[final_length];

	for(size_t i = 0; i < length_;i++)
	{
		new_str[i] = this->c_str()[i];
	}
	for(size_t j = 0; j < myString.length(); j++)
	{
		new_str[j+length_] = myString.c_str()[j];
	}
	
	String final = String(new_str);
	return final;
}


// Operator []
const char& String::operator[] (size_t pos) const
{
	if(pos < length_)
	{
		return str[pos];
	}
	else
	{
		char* a = '\0';
		return a[0];
	}
}

char& String::operator[] (size_t pos)
{
	if(pos < length_)
	{
		return str[pos];
	}
	else
	{
		char* a = '\0';
		return a[0];
	}
}
// ===========================================================================
//                                Protected Methods
// ===========================================================================

// ===========================================================================
//                               Non inline accessors
// ===========================================================================
