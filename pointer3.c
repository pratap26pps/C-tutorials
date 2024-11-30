#include<stdio.h>

void squareArea(float side);
void _squareArea(float  *side);
int main()
{
  float side=4.0;
  squareArea(side);
 printf("side is:%f\n",side);

  _squareArea(&side);
printf("side is:%f\n",side);

    return 0;
}
 //call by value
void squareArea(float side){
    side=side*side;
    printf("area is:%f\n",side);
}
//call by refrence
void _squareArea(float *side){
    *side=(*side)*(*side);
    printf("area is:%f\n",*side);
}
    