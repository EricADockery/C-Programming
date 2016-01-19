/*****************
Name: Eric Dockery
Date: 09/05/2012
Section: 01
Assignment #4
*****************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{

//Problem 3 page 79
          srand(time(NULL));
          int dice_one=0, dice_two=0, total=0;
          dice_one= rand() %6+1;
          dice_two= rand() %6+1;
          total=dice_one+dice_two;
          if (total==7 || total==11)
          {
              printf("total is %d\n",total);
              printf("player wins\n");                    
                                  }
          else
          {
              printf("dice one is %d",dice_one);
              printf(" and dice two is %d\n",dice_two);
              printf("Sorry, Thank you for playing\n");
              }
          
// The City Tour Problem
   char initial_location= '\0';
   int Bus=0;
   printf("What is your location 'c','k', or 'u'? ");
   scanf("%c",&initial_location);
   printf("Which bus did you take '1','2', or '3'? "); 
   scanf("%d",&Bus);
   printf("You are on Bus %d\n",Bus);

   switch(initial_location)
   {
        case 'k':
//bus1: from C to K
 //Bus2: from U to C
 //Bus3: from K to U
        {
             printf("You are leaving KFC Yum Center\n");
             if (Bus== 1)
                {
                printf("Your destination is Cherokee Park\n");
                }
             else if (Bus==3)
             {
                printf("Your destination is UofL\n");        
             }
             else
             {
                printf("Incorrect responce\n") ;
                 }
             break;
             }     
        case 'c':
 //Bus1: from C to K
 //Bus2: from U to C
 //Bus3: from K to U
        {
             printf("You are leaving Cherokee Park\n");
             if (Bus == 2)
             {
              printf("Your Destination is UofL\n");
              }
             else if (Bus== 1)
             {
                 printf("Your Destination is KFC Yum Center\n");
                 }
             else
             {
                printf("Incorrect Responce\n"); 
                 }
             break;
             }     
        case 'u':
 //Bus1: from C to K
 //Bus2: from U to C
 //Bus3: from K to U             
        {
             printf("You are leaving UofL\n");
             if (Bus== 3)
             {
               printf("Your Destination is KFC Yum Center\n");
               }
             else if (Bus==2)
             {
               printf("Your Destination is Cherokee Park\n");   
                  }
             else
             {
                 printf("Incorrect Responce\n");
                 }
             break;
             }        
}
        system("PAUSE");
}

