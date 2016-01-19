/*
Name: Eric Dockery
Date: 10/24/2012
Section: 01
Assignment 8 Problem 1
*/
// importing librarys
#include <stdio.h>
#include <stdlib.h>
// Declaring three pointers in main function
main(){
       int *iPtr=0;
       char *cPtr=NULL;
       float *fFloat=0;
       
// Declaring three new variables 
       int iNumber=12;
       float fNumber=0.045;
       char cCharacter='a';
       
//Asigning the address of each non-pointer variable to the matching pointer
// value
       iPtr=&iNumber;
       fFloat=&fNumber;
       cPtr=&cCharacter;
       
//Printing the value of each non-pointer variable
       printf("%d is the value of the integer.\n",iNumber);
       printf("%c is the value of the character.\n",cCharacter);
       printf("%f is the value of the float.\n",fNumber);
       printf("\n");
//Printing the value of each pointer variable
       printf("%d is the value of the integer Pointer.\n",*iPtr);
       printf("%c is the value of the character Pointer.\n",*cPtr);
       printf("%f is the value of the float Pointer.\n",*fFloat);
       printf("\n");
//Printing the address of each non-pointer variable
      printf("%p is the value of the integer address\n",iNumber);
      printf("%p is the value of the character address\n",cCharacter);
      printf("%p is the value of the float address\n",fNumber);
      printf("\n");
//Printing the address of each pointer variable
      printf("%p is the value of the integer pointer address\n",iPtr);
      printf("%p is the value of the character pointer address\n",cPtr);
      printf("%p is the value of the float pointer address\n",fFloat);
      printf("\n");
 // Pausing the display window
      system("pause");
       }
