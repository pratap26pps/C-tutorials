//find the largest and smallest element from an array?
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,max,p;
   printf("enter limit of an array\n");
   label1: scanf("%d",&n); 
    if(n>50){
        printf("please enter limit less then 50\n");
        goto label1;
    }  
    printf("enter the element of an array\n");
     int arr[500];
    for(int i=1;i<n;i++)
    {
        scanf("%d",&arr[i]);
    } 
    for(int i=1;i<n;i++){
        printf(" %d ",arr[i]);
    }
    max=arr[0];
    p=0;
  for(int i=1;i<n;i++)
  {
    if(arr[i]>max){
        max=arr[i];
        p=i;
    }
  }
     printf("\n%d %d",max,p+1);
    
    return 0;
} 