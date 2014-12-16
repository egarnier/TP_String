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
String myString1 = String(test);
String myString2 = String(myString1);

// Constructor by default : myString (empty)
printf("This String was created using a constructor by default :\n");
printf("The String lentgth is : %ld\n",myString.length());
printf("The String capacity is : %ld\n",myString.capacity());
printf("The String is : %s",myString.c_str());
printf("\n\n");

// Constructor using c-str : myString1 (marip)
printf("This String was created using a constructor that takes a c_str as parameter :\n");
printf("The String lentgth is : %ld\n",myString1.length());
printf("The String capacity is : %ld\n",myString1.capacity());
printf("The String is : %s",myString1.c_str());
printf("\n\n");

//Constructor using copy : myString2 (marip)
printf("This String was created using a constructor by copy : (coping the previous String)\n");
printf("The String lentgth is : %ld\n",myString2.length());
printf("The String capacity is : %ld\n",myString2.capacity());
printf("The String is : %s",myString2.c_str());
printf("\n\n");

// Resize using 1 parameter : myString1 (ma)
myString1.resize(2);
printf("The String marip is resized into ma :\n");
printf("The String lentgth is : %ld\n",myString1.length());
printf("The String capacity is : %ld\n",myString1.capacity());
printf("The String is : %s",myString1.c_str());
printf("\n\n");

// Resize using 2 parameters : myString1 (marie)
myString1.resize(3, 'r');
myString1.resize(4, 'i');
myString1.resize(5, 'e');
printf("The String ma is resized into marie :\n");
printf("The String lentgth is : %ld\n",myString1.length());
printf("The String capacity is : %ld\n",myString1.capacity());
printf("The String is : %s",myString1.c_str());
printf("\n\n");

// At : myString1 (3rd letter : r ; 8th letter doesn't exist) 
printf("The 3rd letter of the String marie is : %c\n",myString1.at(3));
printf("%c\n",myString1.at(8));

// Empty : myString (empty=true) ; myString2 (empty=false)
bool is_empty1 = myString.empty();
bool is_empty2 = myString2.empty();
printf("This String should be empty :\n");
if(is_empty1 == true)
{
    printf("The String is empty.\n");
    
}
else{
    printf("The String is not empty.\n");
    
}
printf("This String should not be empty :\n");
if(is_empty2 == true)
{
    printf("The String is empty.\n");
    
}
else
{
    printf("The String is not empty.\n");
    
}
printf("\n");

// Clear an empty chain : myString (empty)
myString.clear();
printf("This String was empty and has been cleared :\n");
printf("The String length is : %ld\n",myString.length());
printf("The String capacity is : %ld\n",myString.capacity());
printf("The String is : %s", myString.c_str());
printf("\n\n");

// Clear a full chain : myString2 (marip-->NULL)
myString2.clear();
printf("This String was marip and has been cleared :\n");
printf("The String length is : %ld\n",myString2.length());
printf("The String capacity is : %ld\n",myString2.capacity());
printf("The String is : %s", myString2.c_str());
printf("\n\n");

// Reserve : myString1 (capacity : 35 --> 35 --> 50 --> ERROR)
myString1.reserve(20);
printf("The string marip had a capacity of 35 and we applied reserve(20) :\n");
printf("The new value of the capacity of marip is %ld.\n",myString1.capacity());
myString1.reserve(50);
printf("The string marip had a capacity of 35 and we applied reserve(50) :\n");
printf("The new value of the capacity of marip is %ld.\n",myString1.capacity());
printf("The string marip had a capacity of 50 and we applied reserve(100000000) :\n");
myString1.reserve(10000000);
printf("\n");

// Operator= using char : myString (NULL --> 'c')
myString = 'c';
printf("The String was empty and we applied operator = using a char ('c')\n");
printf("The String length is : %ld\n",myString.length());
printf("The String capacity is : %ld\n",myString.capacity());
printf("The String is : %s", myString.c_str());
printf("\n\n");


// Operator= using (char*) : myString2 (marip --> Hello World)
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
printf("The String was marip and we applied operator = using a char* (Hello World)\n");
printf("The String length is : %ld\n",myString2.length());
printf("The String capacity is : %ld\n",myString2.capacity());
printf("The String is : %s", myString2.c_str());
printf("\n\n");

// Operator = using string : myString ( c --> Hello World)
myString = myString2;
printf("The String was c and we applied operator = using a String (Hello World)\n");
printf("The String length is : %ld\n",myString.length());
printf("The String capacity is : %ld\n",myString.capacity());
printf("The String is : %s", myString.c_str());
printf("\n\n");

// Operator + using char : myString3 (Hello Worldc)
String myString3 = myString + 'c';
printf("The String was created with operator + using a char (Hello World + c)\n");
printf("The String length is : %ld\n",myString3.length());
printf("The String capacity is : %ld\n",myString3.capacity());
printf("The String is : %s", myString3.c_str());
printf("\n\n");

// Operator + using (char*) : myString4 (totoHello World)
String toto = String("toto");
String myString4 = toto + tab;
printf("The String was created with operator + using a char* (toto + Hello World)\n");
printf("The String length is : %ld\n",myString4.length());
printf("The String capacity is : %ld\n",myString4.capacity());
printf("The String is : %s", myString4.c_str());
printf("\n\n");

// Operator+ using String : myString5 (info3bim)
String info = String("info");
String bim = String("3bim");
String myString5 = info + bim;
printf("The String was created with operator + using a String (info + 3bim)\n");
printf("The String length is : %ld\n",myString5.length());
printf("The String capacity is : %ld\n",myString5.capacity());
printf("The String is : %s", myString5.c_str());
printf("\n\n");

// Operator [] : info (f)
char a = info[2];
printf("The 3rd letter of info is %c (using operator [])\n",a);

delete tab;
delete test;

return 0;
}



// ===========================================================================
//                         Define Miscellaneous Functions
// ===========================================================================

