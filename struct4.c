#include<stdio.h>
//user defined
struct student{
    int roll;
    float cgpa;
    char name[50];
};

void printInfo(struct student s1);
int main()
{
 struct student s1={3241,34.67,"suman"};
 printInfo(s1);

    return 0;
}
void printInfo(struct student s1){
    
      printf("print student.roll %d:\n",s1.roll);
        printf("print student.cgpa %f:\n",s1.cgpa);
          printf("print student.name %s:\n",s1.name);
}