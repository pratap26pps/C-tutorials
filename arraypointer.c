#include<stdio.h>
int main()
{
    int adhaar[4];

    //input
    int *ptr=&adhaar[0];
    for(int i=0;i<4;i++){
        printf("%d index: ",i);
       scanf("%d",(ptr+i));
       // scanf("%d",adhaar[1]);
    }
    //output
     for(int i=0;i<4;i++){
        printf("%d index= %d\n ",i,*(ptr+1));
       // printf("%d index= %d\n ",i,adhaar[i]);
     }
    
    return 0;
}