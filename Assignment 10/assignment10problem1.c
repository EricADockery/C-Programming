/* 
Name: Eric Dockery
Date: 11/25/2012
Section: 01
Assignment: 10
Problem # 1
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 struct car{
        char make[20];
        char model[20];
        int year;
        int miles;
        };
        
main(){
       struct car mycar;
       strcpy(mycar.make, "Honda");
       strcpy( mycar.model, "Accord");
       mycar.year= 2010;
       mycar.miles= 87000;
       
       printf("My car make is %s\n", mycar.make);
       printf("My car model is %s\n",mycar.model);
       printf("My car was made in %d\n", mycar.year);
       printf("My car has %d miles\n",mycar.miles);
       
       
       system("pause");
       }
