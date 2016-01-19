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
       printf("When the going gets tough, the tough stay put!\n");
       printf("The number of accurances for 'going' and 'tou' and 'ayput'\n");
       printf("will be found and displayed\n");
       char *str1="When the going gets tough, the tough stay put!";
       char *str2= "going";
       char *str3="tou";
       char *str4="ayput";
       if (strstr(str1,str2)!= NULL){
        printf ("\ngoing was found in the string\n");
        printf("The phrase was found %d times", strstr(str1,str2));
        }
       else{
        printf("\ngoing was not found in the string\n");
                               }
       if (strstr(str1,str3)!= NULL){
        printf ("\ntou was found in the string\n");
        printf("The phrase was found %d times", strstr(str1,str3));
        }
       else{
        printf("\ntou was not found in the string\n");
        }
       if (strstr(str1,str4)!= NULL){
        printf ("\nayput was found in the string\n");
        printf("The phrase was found %d times", strstr(str1,str4));
        }
       else{
        printf("\nayput was not found in the string\n");
       }
       
       system("pause");
       }
