/******************
Name: Eric Dockery
Date: 08/29/2012
Section: 01
Assignment #3
******************/
#include <stdio.h>
#include <stdlib.h>

main()
{
      //Problem 2 area of a triangle
      //Define Height, area, and half and base variables
      float height = 7.0, area = 0.0 , base = 5.0, half=0.5; 
      //Display variables to the user
      printf("\n Base   = %.2f",base);
      printf("\n Height = %.2f",height);
      //Calculate the Area and display to user
      area= half * base * height;
      printf("\n Area   = %.2f\n",area);
      //The correct answer is 17.50 and yes it does match my output
      //Problem 3 Repaeat Problem 2
      float height_prob3 = 0,  base_prob3 = 0, half_prob3=0.5,area_prob3 = 0.0;
      // Ask user for the Base and Height and define variables
      printf("\n Enter the Base:");
      scanf("%f",&base_prob3);
      printf("\n Enter the Height:");
      scanf("%f",&height_prob3);
      //Calculate the area and display result to user
      area_prob3= half_prob3 * base_prob3 * height_prob3;
      printf("\n Area   = %.2f\n ",area_prob3);
      //Problem 4
      //Set floating variables to zero
      float Rate=0,Sales_Price=0,Cost=0,Salary=0,Income=0;
      //define and save the variables
      printf("\nEnter the Commission Rate: ");
      scanf("%f",&Rate);
      printf("\nEnter the Sales Price: ");
      scanf("%f",&Sales_Price);
      printf("\nEnter the Cost: ");
      scanf("%f",&Cost);
      printf("\nEnter the Salary: ");
      scanf("%f",&Salary);
      // Calculate the total income and display all variables to the user
      Income=(Rate*(Sales_Price-Cost))+Salary;
      printf("\nCommission Rate:   $%.2f\n",Rate);
      printf("Sales Price:       $%.2f\n",Sales_Price);
      printf("Cost:              $%.2f\n",Cost);
      printf("Salary:            $%.2f\n",Salary);
      printf("Income             $%.2f\n", Income);
      // Pause to verify answers
      system("PAUSE");
      
      
      }
