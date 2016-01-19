/*
Name: Eric Dockery
Date: 10/24/2012
Section: 01
Assignment 8 Problem 2
*/
// importing librarys
#include <stdio.h>
#include <stdlib.h>
//entering main and declaring variables and pointers
main(){
       int *ipointer=NULL;
       int Choosen_value= 0;
       int menu_option= 0;
       int end= 5;
       while(menu_option != end)
       {
       printf("\n Options\n");
       printf("Option 1 Enter New Integer Value\n");                  
       printf("Option 2 Print Pointer Address\n");
       printf("Option 3 Print Integer address\n");
       printf("Option 4 Print Integer value\n");
       printf("Option 5 End run\n");
       printf("Enter your option ");
       scanf("%d",&menu_option);
       fflush(stdin);
       
       
       if (menu_option == 1){
          printf("\nEnter new integer value ");
          scanf("%d", &Choosen_value);
          fflush(stdin);
          ipointer=&Choosen_value;
       }
       if (menu_option == 2){
          printf("\nYour pointer address is %p\n",ipointer);
       }
       if (menu_option == 3){
          printf("\nYour Integer Address is %p\n",Choosen_value);
       }
       if (menu_option == 4){
          printf("\nYou Integer Value is %d\n", Choosen_value);
       }
       if (menu_option == 5){
          printf("\nThanks for using the options.\n");
       }
       }
       system("pause");
       }
