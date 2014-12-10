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
  printf("La longueur de la string vaut : %ld\n",myString.length());
  printf("La capacity de la string vaut : %ld\n",myString.capacity());
  printf("La chaine est : ");
  for (size_t i=0; i<myString.length(); i++)
  {
  	printf("%c",myString.c_str()[i]);
  }
  printf("\n");


  // Constructor using c-str
  char* test = new char[5];
  test[0]='m';
  test[1]='a';
  test[2]='r';
  test[3]='i';
  test[4]='p';
  String* name = new String(test);
  printf("La longueur de la string vaut : %ld\n",name->length());
  printf("La capacity de la string vaut : %ld\n",name->capacity());
  printf("La chaine est : ");
  for (size_t j=0; j<name->length(); j++)

  {
    printf("%c",name->c_str()[j]);
  }
  printf("\n");


  //Resize à un parametre
  name->resize(2);
  printf("La longueur de la string vaut : %ld\n",name->length());
  printf("La capacity de la string vaut : %ld\n",name->capacity());
  printf("La chaine est : ");
  for (size_t j=0; j<name->length(); j++)
  {
    printf("%c",name->c_str()[j]);
  }
  printf("\n");

  //Resize à 2 parametres
  name->resize(3, 'r');
  name->resize(4, 'i');
  name->resize(5, 'e');
  printf("La longueur de la string vaut : %ld\n",name->length());
  printf("La capacity de la string vaut : %ld\n",name->capacity());

  //try to clear
  myString.clear();
  printf("La longueur de la string vaut : %ld\n",myString.length());
  printf("La capacity de la string vaut : %ld\n",myString.capacity());
  printf("La chaine est : ");
  for (size_t i=0; i<myString.length(); i++)
  {
  	printf("%c",myString.c_str()[i]);
  }

   //Constructor using copy
  String myString1 = String(myString);
  printf("La longueur de la string vaut : %ld\n",myString1.length());
  printf("La capacity de la string vaut : %ld\n",myString1.capacity());
  printf("La chaine est : ");
  for (size_t j=0; j<name->length(); j++)
  {
    printf("%c",name->c_str()[j]);
  }
  printf("\n");


  // Test method empty
  bool is_empty1 = myString.empty();
  bool is_empty2 = name->empty();
  if(is_empty1 == true){printf("La chaine 1 est vide\n");}
  else{printf("La chaine 1 n'est pas vide.\n");}
  if(is_empty2 == true){printf("La chaine 2 est vide\n");}
  else{printf("La chaine 2 n'est pas vide.\n");}


  delete name;
  delete test;

  return 0;
}



// ===========================================================================
//                         Define Miscellaneous Functions
// ===========================================================================

