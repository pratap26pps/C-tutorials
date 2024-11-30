#include <stdio.h> 
#include <string.h>
struct student
{
    int roll;
    char name[100];
    float cgpa;
};

int main()
{
    struct student s1={3254,9.67,"pankaj"};
    printf("student roll:%d\n",s1.roll);

    //pointer to structure
    struct student *ptr=&s1;
    printf("student roll:%d\n",(*ptr).roll);
    //arrow operator
     printf("student-> roll:%d\n",ptr->roll);
    
    return 0;
}