#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("test.txt","r"); 

    // printf("%c",fgetc(fptr));
    //  printf("%c",fgetc(fptr));
    //   printf("%c",fgetc(fptr));
    //    printf("%c",fgetc(fptr));
    //     printf("%c",fgetc(fptr));

  //  fputc('D',fptr);
  //    fputc('u',fptr);
  //      fputc('n',fptr);
  //        fputc('k',fptr);
    //  fclose(fptr);
  char ch;
  ch =fgetc(fptr);
  while (ch != EOF){
    printf("%c",ch);
     ch =fgetc(fptr);
  }
  printf('\n');

       fclose(fptr);
    return 0;
}