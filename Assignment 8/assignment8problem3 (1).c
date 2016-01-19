/*
Name: Eric Dockery
Date: 10/24/2012
Section: 01
Assignment 8 Problem 1
*/
// importing librarys
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// declaring TossDie() function
int TossDie(int entered_value, int arr[]);
//entering main and declaring variables, pointers, arrays, and char
main(){
 int dice_to_roll=0, i =0;
 int dice_arry[6]={0,0,0,0,0,0};
 char contin_playing= 'y';
// Introduction to the game
 printf("\nWELCOME TO DICE ROLLER!!!!\n");
 // Asking if user if he wants to run program
 printf("Would you like to play?");
 scanf("%c",&contin_playing);
 fflush(stdin);
 // Starting while loop for dice roller game
 while (contin_playing=='y'){
// Ask user for how many dice they wish to roll
 printf("How many dice do you want to roll(up to six dice)\n");
 scanf("%d",&dice_to_roll);
 fflush(stdin);
// call the function Toss die to reform the dice_arry
TossDie(dice_to_roll, dice_arry );

 for (i=0; i<dice_to_roll;i++){
// display the dice value to the user
     printf("Your die %d is %d\n ",(i+1),dice_arry[i]);
     }
// ask the user if they would like to continue playing
 printf("Would you like to continue (y or n)?\n");
 scanf("%c", &contin_playing);
 fflush(stdin);
}

// thank the user for runing the program
 printf("\nThanks for playing.\n");
// fin
 system("pause");      
}
TossDie( int entered_value, int arr[]){
         srand(time(NULL));
         int i;
         for (i=0; i<entered_value; i++){
          
          arr[i]=rand() %6+1;
          
          }
          
}         
