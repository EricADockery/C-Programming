/*****************
Name: Eric Dockery
Assignment: 9
Date: 10/12/2012
Section: 01
Problem: Assignment 9 problem 1
****************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main(){
       int i;
       char chName[50]={0};
       printf("This program will run your name and tell you how\n");
       printf("long your name is and show it in uppercase.\n");
       printf("up to a value of 50 characters.");
       printf("What is your name?\n");
       scanf("%s",chName);
       fflush(stdin);
       i=strlen(chName);
       printf("Your name is %d long\n", i);
       for (i=0; i<=strlen(chName);i++){
           
           chName[i]=toupper(chName[i]);
           }
       printf("Your name in uppercase is %s\n",chName);
       system("pause");
       }
