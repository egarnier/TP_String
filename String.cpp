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
	capacity_ = 10;
	str = new char[capacity_];
	str[0] = 't';
	str[1] = 'i';
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
	
String::String(const String& sentence)
{
	length_ = sentence.length();
	capacity_ = sentence.capacity();
	str = new char[capacity_];
	str = sentence.c_str();
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

// ===========================================================================
//                                Protected Methods
// ===========================================================================

// ===========================================================================
//                               Non inline accessors
// ===========================================================================
