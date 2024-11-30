#include<stdio.h>
#include<stdio.h>
   struct student
   {
    char name[100];   //array in structure
    int rollno;
    int cgpa;
   };
        struct student s[5];   //array of structure
   int main()
   {
     for(int i=0;i<5;i++){
     printf("enter name\n");
     scanf("%s",&(s[i].name));

    printf("enter roll no \n");
    scanf("%d",&(s[i].rollno));

       printf("enter  cgpa \n");
    scanf("%d",&(s[i].cgpa));
     }
     printf("-------student information---------\n");
       printf("---3rd semester result.2024----\n\n");
     printf("NAME\t ROLL NO.\tCGPA\n");
    for(int i=0;i<5;i++){
   printf(" %s\t",s[i].name);
   printf(" %d\t",s[i].rollno);
   printf(" %d\t",s[i].cgpa);
    printf("\n");
     }
    return 0;
   }