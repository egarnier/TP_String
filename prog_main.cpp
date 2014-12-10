//****************************************************************************
//
//
//
//****************************************************************************
 
 
 
 
// ===========================================================================
//                               Include Libraries
// ===========================================================================
#include <stdlib.h>
#include <stdio.h>
#include "String.h"



// ===========================================================================
//                             Include Project Files
// ===========================================================================



// ===========================================================================
//                         Declare Miscellaneous Functions
// ===========================================================================








// ===========================================================================
//                                   The Main
// ===========================================================================
int main(int argc, char* argv[])
{
  String myString;
  printf("La longueur de la string vaut : %d\n",myString.length());
  printf("La capacity de la string vaut : %d\n",myString.capacity());
  printf("La chaine est : ");
  for (int i=0; i<myString.length(); i++)
  {
  	printf("%c",myString.c_str()[i]);
  }

  printf("\n");

  myString.clear();
  printf("La longueur de la string vaut : %d\n",myString.length());
  printf("La capacity de la string vaut : %d\n",myString.capacity());
  printf("La chaine est : ");
  for (int i=0; i<myString.length(); i++)
  {
  	printf("%c",myString.c_str()[i]);
  }

  /*String myString1 = String(myString);
  printf("La longueur de la string vaut : %d\n",myString1.GetLength());
  printf("La capacity de la string vaut : %d\n",myString1.GetCapacity());
  printf("La chaine est : ");
  for (int i=0; i<myString1.GetLength(); i++)
  {
  	printf("%c",myString1.GetStr()[i]);
  }
  printf("\n");*/


  return 0;
}



// ===========================================================================
//                         Define Miscellaneous Functions
// ===========================================================================

