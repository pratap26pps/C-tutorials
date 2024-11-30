#include<stdio.h>
int countOdd(int arr[],int n);
int main()
{
   int arr[]={3,5,7,9,13,14};
   printf("%d",countOdd(arr,6));

    return 0;
}
int countOdd(int arr[],int n)
{
    int count=0;
    for(int i=0;i<=6;i++)
    {
        if(arr[i]%2 !=0)
        {
            count++;
        }
    }
    return count;
}