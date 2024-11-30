#include <stdio.h>
struct address{
  int houseno ;
  int blockno;
  char city;
  char state;
} ;
void printAdd(struct address add);
int main()
{
   struct address add[5];
   //input 
   printf("enter information for student 1\n");
   scanf("%d",&add[0].houseno);
   scanf("%d",&add[0].blockno);
   scanf("%s",&add[0].city);
   scanf("%s",&add[0].state);

    printf("enter information for student 2\n");
   scanf("%d",&add[1].houseno);
   scanf("%d",&add[1].blockno);
   scanf("%s",&add[1].city);
   scanf("%s",&add[1].state);

 printf("enter information for student 3\n");
   scanf("%d",&add[2].houseno);
   scanf("%d",&add[2].blockno);
   scanf("%s",&add[2].city);
   scanf("%s",&add[2].state);

 printf("enter information for student 4\n");
   scanf("%d",&add[3].houseno);
   scanf("%d",&add[3].blockno);
   scanf("%s",&add[3].city);
   scanf("%s",&add[3].state);

printAdd(add[0]);
printAdd(add[1]);
printAdd(add[2]);
printAdd(add[3]);
     return 0;
}

void printAdd(struct address add){
    printf("%d, %d ,%s ,%s,\n",add.houseno,add.blockno,add.city,add.state);
}