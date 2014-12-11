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
  printf("La longueur de la string myString vaut : %ld\n",myString.length());
  printf("La capacity de la string myString vaut : %ld\n",myString.capacity());
  printf("La chaine myString est : ");
  for (size_t i=0; i<myString.length(); i++)
  {
  	printf("%c",myString.c_str()[i]);
  }
  printf("\n\n");


  // Constructor using c-str
  char* test = new char[5];
  test[0]='m';
  test[1]='a';
  test[2]='r';
  test[3]='i';
  test[4]='p';
  String* name = new String(test);
  printf("La longueur de la string name vaut : %ld\n",name->length());
  printf("La capacity de la string name vaut : %ld\n",name->capacity());
  printf("La chaine name est : ");
  for (size_t j=0; j<name->length(); j++)
  {
    printf("%c",name->c_str()[j]);
  }
  printf("\n\n");


  //Resize à un parametre
  name->resize(2);
  printf("La longueur de la string name->resize(2) vaut : %ld\n",name->length());
  printf("La capacity de la string name->resize(2) vaut : %ld\n",name->capacity());
  printf("La chaine name->resize(2) est : ");
  for (size_t j=0; j<name->length(); j++)
  {
    printf("%c",name->c_str()[j]);
  }
  printf("\n\n");

  //Resize à 2 parametres
  name->resize(3, 'r');
  name->resize(4, 'i');
  name->resize(5, 'e');
  printf("La longueur de la string name->resize(n, 'c') vaut : %ld\n",name->length());
  printf("La capacity de la string name->resize(n, 'c') vaut : %ld\n",name->capacity());
  printf("La chaine name->resize(n, 'c') est : ");
  for (size_t j=0; j<name->length(); j++)
  {
    printf("%c",name->c_str()[j]);
  }
  printf("\n\n");

  //try to clear
  myString.clear();
  printf("La longueur de la string vaut donc : %ld\n",myString.length());
  printf("La capacity de la string vaut donc : %ld\n",myString.capacity());
  printf("\n\n");

  name->clear();
  printf("La longueur de la string vaut donc : %ld\n",name->length());
  printf("La capacity de la string vaut donc : %ld\n",name->capacity());
  printf("\n\n");

  /* //Constructor using copy
  String myString1 = String(myString);
  printf("La longueur de la string vaut : %ld\n",myString1.length());
  printf("La capacity de la string vaut : %ld\n",myString1.capacity());
  printf("La chaine est : ");
  for (size_t j=0; j<name->length(); j++)
  {
    printf("%c",name->c_str()[j]);
  }
  printf("\n");*/


  // Test method empty
  bool is_empty1 = myString.empty();
  bool is_empty2 = name->empty();
  if(is_empty1 == true){printf("La chaine 1 est vide.\n");}
  else{printf("La chaine 1 n'est pas vide.\n");}
  if(is_empty2 == true){printf("La chaine 2 est vide.\n");}
  else{printf("La chaine 2 n'est pas vide.\n");}
  printf("\n\n");
  

  // Test method reserve
  name->reserve(20);
   printf("The new value of the capacity of name is %ld.\n",name->capacity());
  name->reserve(50);
  printf("The new value of the capacity of name is %ld.\n",name->capacity());
  name->reserve(10000000);
  printf("\n\n");

// Test operator =(char*) and test operator []
  char* tab = new char[11];
  tab[0]='H';
  tab[1]='e';
  tab[2]='l';
  tab[3]='l';
  tab[4]='o';
  tab[5]=' ';
  tab[6]='W';
  tab[7]='o';
  tab[8]='r';
  tab[9]='l';
  tab[10]='d';
  myString = tab;
  printf("myString is now : ");
  for (size_t j=0; j<(myString.length() + 1 ); j++)
  {
    printf("%c",myString[j]);
  }
  printf("\n\n");
  
  delete name;
  delete test;
  delete tab;

  return 0;
}



// ===========================================================================
//                         Define Miscellaneous Functions
// ===========================================================================

