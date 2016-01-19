/*****************
Name: Eric Dockery
Date: 09/05/2012
Section: 01
Assignment #5
*****************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{

// The City Tour Problem-- A while loop is best because it gives all values
//  until 'q' quit.

   char initial_location= '\0';
   int Bus=0;
   
   while (initial_location != 'q')
  { 
   printf("What is your location 'c','k', or 'u' or 'q' to quit? \n");
   scanf("%c",&initial_location);
   if (initial_location != 'q')
   {      
   printf("Which bus did you take '1','2', or '3'?\n "); 
   scanf("%d",&Bus);
   printf("You are on Bus %d\n",Bus);

   switch(initial_location)
   {      
        case 'q':
             {
               printf("\n");  
                 }                
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
}
}
//Fibonacci series
            int a = 0;
            int b = 1;
            int sum=0;
            int i=0;
            
            for (i=0;i<20;i++)
            {
                printf("%d\n",a);
                sum=a+b;
                a=b;
                b=sum;
                
                }
             
//Problem 3 page 79 
  int dice_one=0, dice_two=0, total=0, first=0, second=0, sumdice=0;
  srand(time(NULL));      
  printf("what value of dice 1 do you want (pick a number between 1-6) \n");
  scanf("%d",&first);
  printf("what value of dice 2 do you want (pick a number between 1-6) \n");
  scanf("%d",&second);
  dice_one= rand() %6+1;
  dice_two= rand() %6+1;
  total=dice_one+dice_two;
  while ((first !=dice_one || second!=dice_two)) 
          {
              printf("%d, ",dice_one);
              printf(" %d,",dice_two);
              printf("%d,",total);
              dice_one= rand() %6+1;
              dice_two= rand() %6+1;
           sumdice++;
              }
              printf("%d",first);
              printf("%d",second);
          printf("\ndice one is %d ",dice_one);
          printf(" and dice two is %d\n",dice_two);   
          printf("Cheer you rolled the same dice as you picked\n");
          printf("It only took %d times\n",sumdice);
          system("PAUSE");
              
}

