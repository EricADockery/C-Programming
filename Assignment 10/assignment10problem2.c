/* 
Name: Eric Dockery
Date: 11/25/2012
Section: 01
Assignment: 10
Problem # 2
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct car{
        char make[25];
        char model[20];
        int year;
        int miles;
        }mycars;
        
main(){
       int i;
       mycars mc[2];
       strcpy( mc[0].make, "Honda");
       strcpy(mc[0].model, "Civic");
       mc[0].year = 2012;
       mc[0].miles =0;
       
       strcpy( mc[1].make, "Ford");
       strcpy(mc[1].model, "Fiesta");
       mc[1].year = 2012;
       mc[1].miles =01;
       
       strcpy( mc[2].make, "Mercedes");
       strcpy(mc[2].model, "E-Class Hybrid");
       mc[2].year = 2020;
       mc[2].miles =100000;
       
       for (i=0; i<=2; i++){
       printf("My future cars make is %s\n", mc[i].make);
       printf("My future cars model is %s\n",mc[i].model);
       printf("My future car was made in %d\n", mc[i].year);
       printf("It can have %d miles\n",mc[i].miles);
       printf("\n");    
                        }
       
              
       system("pause");
       
       }
