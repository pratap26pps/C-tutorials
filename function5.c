//to generate a random number,like using for otp purpose
#include<stdio.h>
#include<time.h>
int main()
{
    int n;
    system("cls");
    srand(time(NULL));
    n=rand();
    printf("%d",n);
    return 0;
}