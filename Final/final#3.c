/*
Name : Eric Dockery
Assignment: Final Exam problem # 3
Date: 12/06/2012
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student_records{
       char First_Name[25];
       char Last_Name[25];
       char Grade[15];
       char pass_fail[15];
       }s_r;
       
void fun1(s_r *);
void fun2(s_r stud[]);
void fun3(s_r *);

int main (void) {
 int i;
 char First_Name[25], Last_Name[25],Grade[15],pass_fail[15];
 
 s_r S_Rlist[5];
 printf("\n\tWelcome to the student archives!\n");
 printf("\n\tFirst lets add the students information\n");
 
 fun1(S_Rlist);
 printf("\n******OH NO there seems to be a problem with student 3's info*****");
 printf("\n\t Lets Fix it!!\n");
 fun2(S_Rlist);
 printf("Student 3 now has this information\n");
 printf("First name :%s\n",S_Rlist[2].First_Name); 
 printf("Last Name: %s\n",S_Rlist[2].Last_Name);
 printf("Grade: %s \n", S_Rlist[2].Grade);
 printf("Is going to %s\n", S_Rlist[2].pass_fail);
 s_r *ptrSR=S_Rlist;

 printf("\n\n ***Wait***\n");
 printf("Student 2 isn't correct either\n");
 printf(" Lets change his information\n");

 fun3(ptrSR);
 printf("Student 2 now has this information\n");
 printf("First name: %s\n",S_Rlist[1].First_Name); 
 printf("Last Name: %s\n",S_Rlist[1].Last_Name);
 printf("Grade: %s \n", S_Rlist[1].Grade); 
 printf("Is going to %s\n", S_Rlist[1].pass_fail);

FILE *pWrite;
pWrite= fopen("student_records.txt" , "w");
     if(pWrite == NULL){
     printf("\n File Can't Be Opened \n");
     }
     else{
     for (i=0;i<3;i++){
     fprintf( pWrite, "%s %s ",S_Rlist[i].First_Name,S_Rlist[i].Last_Name);
     fprintf( pWrite, "%s %s ", S_Rlist[i].Grade,S_Rlist[i].pass_fail);     
}}
     fclose(pWrite);
 
     FILE *pRead;
     pRead= fopen("student_records.txt", "r");
     if (pRead== NULL){
                 printf("\nFile Can't Be Opened \n");
                 }
     else{
          printf("\n First Name\t Last Name\t Grade\t Pass/Fail");
 
          fscanf(pRead,"%s\t%s\t",First_Name, Last_Name);
          fscanf(pRead,"%s\t %s\n ",Grade, pass_fail);
          while (!feof(pRead)){
                printf("\n%s\t%s\t",First_Name,Last_Name);
                printf("%s\t%s\n ",Grade,pass_fail);
                fscanf(pRead,"%s%s%s%s",First_Name,Last_Name,Grade,pass_fail);
           
                }
 
                }
     fclose(pRead);
     
pWrite= fopen("student_records.txt" , "a");
     if(pWrite == NULL){
     printf("\n File Can't Be Opened \n");
     }
     else{
     for (i=2;i<5;i++){
     fprintf( pWrite, "%s %s ",S_Rlist[i].First_Name,S_Rlist[i].Last_Name);
     fprintf( pWrite, "%s %s ", S_Rlist[i].Grade,S_Rlist[i].pass_fail);     
}}
     fclose(pWrite);
 

     pRead= fopen("student_records.txt", "r");
     if (pRead== NULL){
                 printf("\nFile Can't Be Opened \n");
                 }
     else{
          printf("\n First Name\t Last Name\t Grade\t Pass/Fail");
 
          fscanf(pRead,"%s\t%s\t",First_Name, Last_Name);
          fscanf(pRead,"%s\t %s\n ",Grade, pass_fail);
          while (!feof(pRead)){
                printf("\n%s\t%s\t",First_Name,Last_Name);
                printf("%s\t%s\n ",Grade,pass_fail);
                fscanf(pRead,"%s%s%s%s",First_Name,Last_Name,Grade,pass_fail);
           
                }
 
                }
     fclose(pRead);


 system("pause"); 
 return 0;   
}
void fun1(s_r S[] ) 


{
     int counter=0;
     while (counter != 5){
     printf("Enter Student %d's First Name: ",counter+1);
     scanf("%s", S[counter].First_Name);
     fflush(stdin);
     printf("Enter Student %d's  Last Name: ",counter+1);
     scanf("%s", S[counter].Last_Name);
     fflush(stdin);
     printf("Student %d's Grade ",counter+1);
     scanf("%s", S[counter].Grade);
     fflush(stdin);
     printf("Did Student %d Pass or Fail? ",counter+1);
     scanf("%s", S[counter].pass_fail);
     fflush(stdin);
     printf("\n");
     counter++;}
     }
void fun2(s_r stud[]){
     int num=2;
     printf("Enter Student %d's First Name: ",num+1);
     scanf("%s", stud[num].First_Name);
     fflush(stdin);
     printf("Enter Student %d's  Last Name: ",num+1);
     scanf("%s", stud[num].Last_Name);
     fflush(stdin);
     printf("Student %d's Grade ",num+1);
     scanf("%s", stud[num].Grade);
     fflush(stdin);
     printf("Did Student %d Pass or Fail? ",num+1);
     scanf("%s", stud[num].pass_fail);
     fflush(stdin);
     printf("\n");
     } 
void fun3 (s_r *ptr_student)
{      
     int num =1;  
     printf("Enter Student %d's First Name: ",num+1);
     scanf("%s", ptr_student[num].First_Name);
     fflush(stdin);
     printf("Enter Student %d's  Last Name: ",num+1);
     scanf("%s", ptr_student[num].Last_Name);
     fflush(stdin);
     printf("Student %d's Grade ",num+1);
     scanf("%s", ptr_student[num].Grade);
     fflush(stdin);
     printf("Did Student %d Pass or Fail? ",num+1);
     scanf("%s", ptr_student[num].pass_fail);
     fflush(stdin);
     printf("\n");
      
      }


