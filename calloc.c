#include <stdio.h>
#include<stdlib.h>
int main()
{
    float *ptr;
    int n;
    printf("enter the value of n");
    scanf("%d",&n);

    ptr =(float*)calloc(n,sizeof (float));
    for(int i=0;i<n;i++){
        printf("%f\n",ptr[i]);
    }
    
    free(ptr);

     ptr =(float*)calloc(3,sizeof (float));
    for(int i=0;i<3;i++){
        printf("%f\n",ptr[i]);
    }
    return 0;
}