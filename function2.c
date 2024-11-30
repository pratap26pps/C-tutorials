#include<stdio.h>
#include<math.h>
//declaration/prototype -> passing an argument
float squareArea(float side); 
float circleArea(float rad);


int main()   //function call
{
  float a=3;
  float rad=7;
  //printf("area 0f square : %f\n",squareArea(a));
  printf("area of circle: %f\n",circleArea(rad));
 
    return 0;
}
    //function definition
  float squareArea(float side){
    return side * side;
  }

  float circleArea(float rad)
{
    return 3.14*rad*rad;
}


    