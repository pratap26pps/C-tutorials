#include<stdio.h>
int main()
{
   float prices[3]={100.0,200.0,300.0};
   //printf("enter 3 prices\n");
   //scanf("%f",&prices[0]);
    // scanf("%f",&prices[1]);
      // scanf("%f",&prices[2]);

       printf("the total price:%f\n",prices[0]+(0.18*prices[0]));
     printf("the total price:%f\n",prices[1]+(0.18*prices[1]));
     printf("the total price:%f\n",prices[2]+(0.18*prices[2]));
   
    return 0;
}