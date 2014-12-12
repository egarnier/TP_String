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
	length_ = 0;
	capacity_ = 0;
	str = NULL;
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
	return str[pos-1];
}

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

//Method
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

// Methods
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

void String::reserve (size_t n = 0)
{
	if(n>MAX_SIZE)
	{
		printf("The value is bigger than the maximum size allowed for a string, please change your value.\n");
	}
	else if(n>capacity_)
	{
		// code à rajouter : ajouter de la capacité
	}
	else{
		// code à rajouter
	}
}

// ===========================================================================
//                                Protected Methods
// ===========================================================================

// ===========================================================================
//                               Non inline accessors
// ===========================================================================
