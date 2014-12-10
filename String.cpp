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



//Method
void String::clear(void)
{
	str[0] = '\0';
	length_ = 0;
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
