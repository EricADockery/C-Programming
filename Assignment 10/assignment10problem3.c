/* 
Name: Eric Dockery
Date: 11/25/2012
Section: 01
Assignment: 10
Problem # 3
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct phonebook{
        char firstname[25];
        char lastname[25];
        char streetnum[25];
        char street[25];
        char town[25];
        char state[25];
        char area[25];
        char number[20];
        }phone;
void New(phone * );
void Print(phone * );
int counter =0;
phone phonebook[4];

main(){
       int ichoice=0;
       while (ichoice !=3){
             printf("\n**Phonebook Options**\n");
             printf("(1) New Entry\n");
             printf("(2) Display phonebook\n");
             printf("(3) End Menu\n\n");
             printf("\t You are have used %d of 5 New entrys\n", counter);
             printf("What would you like to do?");
             scanf("%d", &ichoice);
             fflush(stdin);
       if (ichoice ==1){
                   New(phonebook);
                   }
       if (ichoice ==2){
                   Print(phonebook);
                   }
       if (ichoice ==3){
           printf("The Phonebook will now close");
           system("pause");
           }
             }
             }
void New( phone * phonebook){
     counter++;
     printf("Contact First Name:");
     scanf("%s", phonebook[counter-1].firstname);
     fflush(stdin);
     printf("Contact Last Name:");
     scanf("%s", phonebook[counter-1].lastname);
     fflush(stdin);
     printf("Contact Street #: ");
     scanf("%s", phonebook[counter-1].streetnum);
     fflush(stdin);
     printf("Contact Street: (Only the first name of the street will be displayed) ");
     scanf("%s", phonebook[counter-1].street);
     fflush(stdin);
     printf("Contact Town: ");
     scanf("%s", phonebook[counter-1].town);
     fflush(stdin);
     printf("Contact State: ");
     scanf("%s", phonebook[counter-1].state);
     fflush(stdin);
     printf("Contact Area Code: ");
     scanf("%s", phonebook[counter-1].area);
     fflush(stdin);
     printf("Contact Phone Number:");
     scanf("%s", phonebook[counter-1].number);
     fflush(stdin);
     }
void Print(phone * phonebook){
     int i;
     for (i=0; i <counter; i++){
         printf("(%d)", i+1);
         printf("%s\t", phonebook[i].firstname);
         printf("%s\n", phonebook[i].lastname);
         printf("%s\t", phonebook[i].streetnum);
         printf("%s,\t", phonebook[i].street);
         printf("%s\t", phonebook[i].town);
         printf("%s\t", phonebook[i].state);
         printf("%s\n", phonebook[i].area);
         printf("%s\n", phonebook[i].number);
         }
         }
