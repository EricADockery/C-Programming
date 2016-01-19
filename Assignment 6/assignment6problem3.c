 /*****************
Name: Eric Dockery
Date: 09/05/2012
Section: 01
Assignment #6
*****************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Problem #3 Assignment 6
int showFace( int dice_value);

main()
{          
          srand(time(NULL));
          
          int dice=0 , guess=0 , x=0;
          dice= rand() %6+1;
          printf("What is the dice going to be? ");
          scanf("%d",&guess);
          x=showFace(dice);
          if (guess== dice)
          {
           printf("Congrats you rolled your guess\n");
           }
           else 
           {
           printf(" Sorry you didn't roll your guess\n");
           }
           printf("You rolled a %d\n",dice);
           printf("Your guess was %d\n",guess);
           system("pause");
}
int showFace( int dice_value)
{
          if (dice_value==1)
          {
          printf("\n\t*\n\n");
          }
          else if (dice_value==2)
          {
          printf("*\n\n\t\t*\n");
          }
          else if (dice_value==3)
          {
          printf("*\n\t*\n\t\t*\n");
          }
          else if (dice_value==4)
          {
          printf("*\t\t*\n\n*\t\t*\n");
          }
          else if (dice_value==5)
          {
          printf("*\t\t*\n\t*\n*\t\t*\n");
          }
          else
          {
          printf("*\t*\t*\t*\n\n*\t*\t*\n");
          }         
                    }         
