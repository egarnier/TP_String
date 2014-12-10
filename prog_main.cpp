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
  // Constructor void
  String myString;
  printf("La longueur de la string vaut : %d\n",myString.GetLength());
  printf("La capacity de la string vaut : %d\n",myString.GetCapacity());
  printf("La chaine est : ");
  for (int i=0; i<myString.GetLength(); i++)
  {
  	printf("%c",myString.GetStr()[i]);
  }
  printf("\n");


  //Constructor by c-str
  char* test = new char[5];
  test[0]='m';
  test[1]='a';
  test[2]='r';
  test[3]='i';
  test[4]='p';

  //String name = test;
  String* name = new String(test);

  printf("La longueur de la string vaut : %d\n",name->GetLength());
  printf("La capacity de la string vaut : %d\n",name->GetCapacity());
  printf("La chaine est : ");
  for (int j=0; j<name->GetLength(); j++)
  {
    printf("%c",name->GetStr()[j]);
  }
  printf("\n");

  delete(name);


  return 0;
}



// ===========================================================================
//                         Define Miscellaneous Functions
// ===========================================================================

