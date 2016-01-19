
/*****************
Name: Eric Dockery
Assignment: 7
Date: 10/12/2012
Section: 01
Problem: Bubble sort array
****************/
    // Bubble sort array of element shown
#include <stdio.h>
#include <stdlib.h>

main(){
    
    printf("We are taking the given array and using bubble sort to get");
    printf(" the ordered set\n");
    
    int j=0,temp=0, i=0;
    int arr[10]={94,36,19,8,62,49,21,53,1,88};
    for (i=0;i<=9;i++){
        for (j=0;j<=8;j++){
            if(arr[j] > arr[i]){
               temp=arr[j];
               arr[j]=arr[i];
               arr[i]=temp;       
                      } 
            }
            }
    printf("This is the new array\n");
    for (i=0;i<=9;i++){
    printf("%d\n",arr[i]);
}
    system("pause");
        }
