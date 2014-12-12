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
size_t String::GetMAX_SIZE(void) const
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
void String::clear(void)
{
	str[0] = '\0';
	length_ = 0;
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


// ===========================================================================
//                                Protected Methods
// ===========================================================================

// ===========================================================================
//                               Non inline accessors
// ===========================================================================
