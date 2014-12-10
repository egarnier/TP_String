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
  printf("La longueur de la string vaut : %d\n",myString.length());
  printf("La capacity de la string vaut : %d\n",myString.capacity());
  printf("La chaine est : ");
  for (int i=0; i<myString.length(); i++)
  {
  	printf("%c",myString.c_str()[i]);
  }
  printf("\n");


  //Constructor using c-str
  char* test = new char[5];
  test[0]='m';
  test[1]='a';
  test[2]='r';
  test[3]='i';
  test[4]='p';

  String* name = new String(test);

  printf("La longueur de la string vaut : %d\n",name->length());
  printf("La capacity de la string vaut : %d\n",name->capacity());
  printf("La chaine est : ");
  for (int j=0; j<name->length(); j++)
  {
    printf("%c",name->c_str()[j]);
  }
  printf("\n");

  //try to clear
  myString.clear();
  printf("La longueur de la string vaut : %d\n",myString.length());
  printf("La capacity de la string vaut : %d\n",myString.capacity());
  printf("La chaine est : ");
  for (int i=0; i<myString.length(); i++)
  {
  	printf("%c",myString.c_str()[i]);
  }

  /*String myString1 = String(name);
  printf("La longueur de la string vaut : %d\n",myString1.GetLength());
  printf("La capacity de la string vaut : %d\n",myString1.GetCapacity());
  delete(name);


  //Constructor using copy
  String myString1 = String(myString);
  printf("La longueur de la string vaut : %d\n",myString1.length());
  printf("La capacity de la string vaut : %d\n",myString1.capacity());

  printf("La chaine est : ");
  for (int i=0; i<myString1.length(); i++)
  {
  	printf("%c",myString1.c_str()[i]);
  }
  printf("\n");*/


  return 0;
}



// ===========================================================================
//                         Define Miscellaneous Functions
// ===========================================================================

