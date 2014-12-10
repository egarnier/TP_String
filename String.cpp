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
int String::MAX_SIZE = 65535;
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
	for (int i=0; i<MAX_SIZE; i++)
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
	for (int j=0; j<length_; j++)
	{
		str[j] = phrase[j];
	}
}
	
String::String(const String& sentence)
{
	length_ = sentence.length();

	str = new char[length_];

	for (int i = 0; i < length_; ++i)
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
int String::GetMAX_SIZE(void) const
{
	return MAX_SIZE;
}

int String::length(void) const
{
	return length_;
}

int String::size(void) const
{
	return length_;
}
int String::capacity(void) const
{
	return capacity_;
}

char* String::c_str(void) const
{
	return str;
}

//Methode
/*void String::clear(void)
{
	for (int i = 0; i < str.length(); ++i)
	{
		str.c_str()[i] = "";
	}

	str.length() = 0;
}*/

// ===========================================================================
//                                Protected Methods
// ===========================================================================

// ===========================================================================
//                               Non inline accessors
// ===========================================================================
