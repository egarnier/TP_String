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

// Declaration of different Strings
String myString;
char* test = new char[5];
test[0]='m';
test[1]='a';
test[2]='r';
test[3]='i';
test[4]='p';
String* myString1 = new String(test);
String myString2 = String(myString1[0]);

// Constructor by default
printf("La longueur de la string myString vaut : %ld\n",myString.length());
printf("La capacity de la string myString vaut : %ld\n",myString.capacity());
printf("La chaine myString est : %s",myString.c_str());
printf("\n\n");

// Constructor using c-str
printf("La longueur de la string name vaut : %ld\n",myString1->length());
printf("La capacity de la string name vaut : %ld\n",myString1->capacity());
printf("La chaine name est : %s",myString1->c_str());
printf("\n\n");

//Constructor using copy
printf("La longueur de la string vaut : %ld\n",myString2.length());
printf("La capacity de la string vaut : %ld\n",myString2.capacity());
printf("La chaine est : %s", myString2.c_str());
printf("\n\n");

// Resize using one parameter
myString1->resize(2);
printf("La longueur de la string myString1->resize(2) vaut : %ld\n",myString1->length());
printf("La capacity de la string myString1->resize(2) vaut : %ld\n",myString1->capacity());
printf("La chaine myString1->resize(2) est : %s", myString1->c_str());
printf("\n\n");

// Resize using 2 parameters
myString1->resize(3, 'r');
myString1->resize(4, 'i');
myString1->resize(5, 'e');
printf("La longueur de la string myString1->resize(n, 'c') vaut : %ld\n",myString1->length());
printf("La capacity de la string myString1->resize(n, 'c') vaut : %ld\n",myString1->capacity());
printf("La chaine myString1->resize(n, 'c') est : %s",myString1->c_str());
printf("\n\n");

// At
printf("La troisieme lettre de la chaine est %c\n",myString1->at(3));
printf("%c\n\n",myString1->at(8));

// Empty
bool is_empty1 = myString.empty();
bool is_empty2 = myString2.empty();
if(is_empty1 == true){printf("La chaine 1 est vide.\n");}
else{printf("La chaine 1 n'est pas vide.\n");}
if(is_empty2 == true){printf("La chaine 2 est vide.\n");}
else{printf("La chaine 2 n'est pas vide.\n");}
printf("\n\n");

// Clear an empty chain
myString.clear();
printf("La longueur de la string vaut donc : %ld\n",myString.length());
printf("La capacity de la string vaut donc : %ld\n",myString.capacity());
printf("\n\n");

// Clear a full chain
myString2.clear();
printf("La longueur de la string vaut donc : %ld\n",myString2.length());
printf("La capacity de la string vaut donc : %ld\n",myString2.capacity());
printf("\n\n");

// Reserve
myString1->reserve(20);
printf("The new value of the capacity of name is %ld.\n",myString1->capacity());
myString1->reserve(50);
printf("The new value of the capacity of name is %ld.\n",myString1->capacity());
myString1->reserve(10000000);
printf("\n\n");

// Operator= using char
myString = 'c';
printf("La longueur de la string myString vaut : %ld\n",myString.length());
printf("La capacity de la string myString vaut : %ld\n",myString.capacity());
printf("La chaine myString est : %s",myString.c_str());
printf("\n\n");


// Operator= using (char*) 
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
myString2 = tab;
printf("myString2 is now : %s", myString2.c_str());
printf("\n\n");

// Operator = using string
myString = myString2;
printf("La longueur de la string myString vaut : %ld\n",myString.length());
printf("La capacity de la string myString vaut : %ld\n",myString.capacity());
printf("La chaine myString est : %s",myString.c_str());
printf("\n\n");

// Operator + using char
String myString3 = myString + 'c';
printf("La longueur de la string myString vaut : %ld\n",myString3.length());
printf("La capacity de la string myString vaut : %ld\n",myString3.capacity());
printf("La chaine myString est : %s",myString3.c_str());
printf("\n\n");

// Operator + using (char*)
String toto = String("toto");
String myString4 = toto + tab;
printf("La longueur de la string myString vaut : %ld\n",myString4.length());
printf("La capacity de la string myString vaut : %ld\n",myString4.capacity());
printf("La chaine myString est : %s",myString4.c_str());
printf("\n\n");

// Operator+ using String
String info = String("info");
String bim = String("3bim");
String myString5;
myString5 = info + bim;
printf("La longueur de la string + vaut : %ld\n",myString5.length());
printf("La capacity de la string + vaut : %ld\n",myString5.capacity());
printf("La chaine + est : %s",myString5.c_str());
printf("\n\n");

// Operator []
char a = myString3[2];
printf("Le 3ème caractère de la chaine est %c.\n", a);

delete[] tab;
delete[] test;

return 0;
}



// ===========================================================================
//                         Define Miscellaneous Functions
// ===========================================================================

