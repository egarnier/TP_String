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
	length = 4;
	capacity = 10;
	str = new char[capacity];
	str[0] = 't';
	str[1] = 'i';
	str[2] = 't';
	str[3] = 'o';
}

// Constructor a partir d'une c-string
String::String(const char* phrase)
{
	//Length
	length = 0;
	for (int i=0; i<MAX_SIZE; i++)
	{
		if (phrase[i] != '\0')
		{
			length = length + 1;
		}
		else 
		{
			break;
		}
	}

	//Capacity
	capacity = length + 30;
	
	//String
	str = new char[capacity];
	for (int j=0; j<length; j++)
	{
		str[j] = phrase[j];
	}
	
}

// ===========================================================================
//                                  Destructor
// ===========================================================================
String::~String(void)
{
	delete(str);
}

// ===========================================================================
//                                 Public Methods
// ===========================================================================
// Getters
/*int String::GetMAX_SIZE(void) const
{
	return MAX_SIZE;
}*/

int String::GetLength(void) const
{
	return length;
}

int String::GetSize(void) const
{
	return length;
}
int String::GetCapacity(void) const
{
	return capacity;
}

char* String::GetStr(void) const
{
	return str;
}

// Methods

// ===========================================================================
//                                Protected Methods
// ===========================================================================

// ===========================================================================
//                               Non inline accessors
// ===========================================================================
