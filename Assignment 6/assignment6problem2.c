 /*****************
Name: Eric Dockery
Date: 09/05/2012
Section: 01
Assignment #6
*****************/

#include <stdio.h>
#include <stdlib.h>
//Problem 2
//You define the function below 
//your main function but protype before main.
int area(int a, int b);
main()
{
     int height,width,total;
     printf("What is the height of the rectangle? ");
     scanf("%d",&height);
     printf("\nWhat is the widith of the rectangle? ");
     scanf("%d",&width);
     total=area(height,width);
     printf("\nThe area is %d\n",total); 
     system("pause");
      }
int area(int a,int b)
{
     int total;
     total=  a*b;
     return total;  
        }
 

        
