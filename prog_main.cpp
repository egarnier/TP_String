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
  printf("La longueur de la string vaut : %d\n",myString.GetLength());
  printf("La capacity de la string vaut : %d\n",myString.GetCapacity());
  printf("La chaine est : ");
  for (int i=0; i<myString.GetLength(); i++)
  {
  	printf("%c",myString.GetStr()[i]);
  }
  printf("\n");

  String myString1 = String(myString);
  printf("La longueur de la string vaut : %d\n",myString1.GetLength());
  printf("La capacity de la string vaut : %d\n",myString1.GetCapacity());
  printf("La chaine est : ");
  for (int i=0; i<myString1.GetLength(); i++)
  {
  	printf("%c",myString1.GetStr()[i]);
  }
  printf("\n");

  return 0;
}



// ===========================================================================
//                         Define Miscellaneous Functions
// ===========================================================================

