#include<stdio.h>   //multiplication of two matric
int main()
{
   int a[50][50],b[50][50],result[50][50],m,n,r,c;
  //first matrix
   printf("enter the limits of row and column=");
   scanf("%d%d",&m,&n);
   printf("enter the all element of 1st matrix\n");
   for(r=0;r<m;r++)
   {
     for(c=0;c<n;c++){
        scanf("%d",&a[r][c]);
     }
   }
    for(r=0;r<m;r++)
   {
     for(c=0;c<n;c++){
        printf(" %d ",a[r][c]);
     }
     printf("\n");
   }
    //second matrix
   printf("enter the limits of row and column=");
   scanf("%d%d",&m,&n);
   printf("enter the all element of 2nd matrix\n");
   for(r=0;r<m;r++)
   {
     for(c=0;c<n;c++){
        scanf("%d",&b[r][c]);
     }
   }
    for(r=0;r<m;r++)
   {
     for(c=0;c<n;c++){
        printf(" %d ",b[r][c]);
     }
     printf("\n");
   } 
   //to multiply two matrix
   printf("the resultant matrix is\n");
     for(r=0;r<m;r++)
   {
     for(c=0;c<n;c++){
        result[r][c]=0;
     }
   }
     for(r=0;r<m;r++)
   {
     for(c=0;c<n;c++){
       for(int k=0;k<m;k++){
        result[r][c]=result[r][c]+(a[r][k]*b[k][c]);
       }
     }
   } 
     for(r=0;r<m;r++)
   {
     for(c=0;c<n;c++){
        printf(" %d ",result[r][c]);
     }
     printf("\n");
   }
    return 0;
}