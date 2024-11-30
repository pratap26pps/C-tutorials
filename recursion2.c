#include <stdio.h>

int sum( int n);
int main()
{
    printf("the sum of n natural no is:%d",sum(6));
    return 0;
}
int sum(n){
    if (n==1){     //base case where resursion stop
        return 1;
    }
    int sumNM1= sum(n-1);
    int sumN= sumNM1 +n;
    return sumN;
}