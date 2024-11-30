#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("test.txt","w");
    char name[50]="pankaj";
   //char ch;
 //    int s;
     
//    fscanf(fptr,"%c",&ch);
// printf("character=%c\n",ch);

//  fscanf(fptr,"%d\n",&s);
//     printf("number=%d\n",s);
   
//  fprintf(fptr,"%c",'M');
//   fprintf(fptr,"%c",'a');
//    fprintf(fptr,"%c",'n');
//     fprintf(fptr,"%c",'g');
//      fprintf(fptr,"%c",'o');

     fprintf(fptr,"%s",name);
     fclose(fptr);
    return 0;
}