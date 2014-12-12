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

// Constructor par défaut
String::String(void)
{
	length_ = 4;
	capacity_ = 7;
	str = new char[4];
	str[0] = 't';
	str[1] = 'o';
	str[2] = 't';
	str[3] = 'o';
}

// Constructor a partir d'une c-string
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

	//Capacity
	capacity_ = length_ + 30;
	
	//String
	str = new char[capacity_];
	for (size_t j=0; j<length_; j++)
	{
		str[j] = phrase[j];
	}
}

//copie constructor
String::String(const String& sentence)
{
	length_ = sentence.length();

	str = new char[length_];

	for (size_t i = 0; i < length_; ++i)
	{
		str[i] = sentence.str[i];
	}

}

// ===========================================================================
//                                  Destructor
// ===========================================================================
String::~String(void)
{
	delete str;
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

//Methods
void String::resize(const size_t n)
{
	if (length_ > n) {
		for (size_t i = n; i<length_; i++)
		{
			str[i] = '\0';
		}
		length_ = n;
	}
}

void String::resize(size_t n, char c)
{
	if (length_ < n) {
		for (size_t i = length_; i<n; i++)
		{
			str[i] = c;
		}
		length_ = n;
	}
}

char& String::at (size_t pos)
{
	//Length de l
    size_t l = 0;
    for (size_t i=0; i<MAX_SIZE; i++)
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
	} else
	{
		printf("Not accepted : The %ldth letter doesn't exist\n", pos);
		char* a = new char[1];
		*a = '\0';
		return *a;
	}
	
}


// Methods

void String::clear(void)
{
	if (length_ != 0)
	{
		str[0] = '\0';
		length_ = 0;
		printf("Chain has been deleted : it's now empty\n");
	} else 
	{
		printf("Chain is already empty\n");
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

void String::reserve (size_t n)
{
	if(n>MAX_SIZE)
	{
		printf("The value is bigger than the maximum size allowed for a string, please change your value.\n");
	}
	else if(n>capacity_ && n<=MAX_SIZE)
	{
		//printf("Hey je suis dans reserve :p ! \n");
		char* tmp = new char[length_];
		for(size_t i=0;i<length_;i++)
		{
			tmp[i]=str[i];
		}
		length_ = capacity_ = n;
		str = new char[capacity_];
		for (size_t i=0; i<length_; i++)
		{
			str[i] = tmp[i];
		}
		delete tmp;
	}
	else{
		length_ = n;
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
	} else
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
	for(int k=0; k<66000; k++)
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
		if(s_length>MAX_SIZE){
		printf("The chain is bigger than the maximum size allowed, please change your chain.\n");
	}
	else if(s_length>capacity_ && s_length<=MAX_SIZE)
	{
		this[0].reserve(s_length);
		for(size_t i = 0 ; i<capacity_ ; i++)
		{
			str[i]=s[i];
		}
	}
	else{
		length_ = s_length;
			for(size_t j = 0 ; j<capacity_ ; j++)
		{
			str[j]=s[j];
		}
	}
	return *this;
}

//Operator+ using char*
String String::operator+ (const char* rhs)
{
    //Length de rhs
    size_t rhslength = 0;
    for (size_t i=0; i<MAX_SIZE; i++)
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
    delete tab;

    return final;
}

// Operator+ using String
String String::operator+ (const String& myString)
{
	String new_str;
	if((myString.length() + length_)>MAX_SIZE)
	{
		printf("Your String is bigger than the maximum size allowed, pleased change your String.\n");
	}
	else
	{
		new_str.reserve(myString.length() + length_);
		for(size_t i=0;i<length_;i++)
		{
			new_str.c_str()[i]=this->c_str()[i];
		}
		for(size_t j=0;j<myString.length();j++)
		{
			new_str.c_str()[j+length_]=myString.c_str()[j];
		}
	}
	return new_str;
}

// Operator []
const char& String::operator[] (size_t pos) const
{
	if(pos<length_)
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
	if(pos<length_)
	{
		return str[pos];
	}
	else
	{
		char* a= '\0';
		return a[0];
	}
}
// ===========================================================================
//                                Protected Methods
// ===========================================================================

// ===========================================================================
//                               Non inline accessors
// ===========================================================================
