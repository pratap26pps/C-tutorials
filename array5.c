#include<stdio.h>
void reverse( int arr[],int n);
void printArr(int arr[],int n);
int main()
{
   int arr[]={2,4,6,8,9};
   reverse(arr,5);
   printArr(arr,5);

    return 0;
}
void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}
void reverse( int arr[],int n)
{
    for (int i=0;i<n/2;i++){
        int firstval =arr[i];
        int secondval=arr[n-i-1];
        arr[i]=secondval;
        arr[n-i-1]=firstval;
    }
}