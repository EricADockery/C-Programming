/*****************
Name: Eric Dockery
Assignment: 7
Date: 10/12/2012
Section: 01
Problem: 2 page 151
****************/
#include <stdio.h>
#include <stdlib.h> 
int main(){
    
    //Problem 2 page 151
    float total=0, average=0, x=0; 
    int i=0, s=0;
    char cont_responce='n';
    float gpa_arr[30];
    
    printf("Welcome to the gpa average calculator!\n");
    printf("You may calculate up to 30 gpa's average\n");
    printf("After each gpa entered you will be prompted if you would like to");
    printf(" get the average\n");
    while (cont_responce=='n')
    {
          printf("Please enter the gpa ");
          scanf("%f",&gpa_arr[s]);
          s++;
          
          fflush(stdin);
          printf("Would you like to calculate the gpa(Enter y or n)?  \n");
          scanf("%c",&cont_responce);
          fflush(stdin);
}
    for (i=0;i<s;i++){
        total += gpa_arr[i];
        
        }
    average=total/((float)s);
    printf("The average for the set of gpa is %f \n",average);
    system("pause");
        }
