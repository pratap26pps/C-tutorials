#include<stdio.h>
int main()
{
    int m,n,r,c;
    int arr[500][500]; 
    printf("enter the limits of row and column=");
    scanf("%d %d",&m,&n);
    printf("enter the elements\n");
    for(int r=0;r<m;r++){
        for(int c=0;c<n;c++){
            scanf("%d",&arr[r][c]);  
    } 
    
    }
        for(int r=0;r<m;r++){
        for(int c=0;c<n;c++){
            printf(" %d ",arr[r][c]);  
    }  
    printf("\n");
    } 
   if(m==n){
    printf("square martix\n");
     printf("digonal element are\n"); 
          for(int r=0;r<m;r++){
        for(int c=0;c<n;c++){ 
            if(r==c){
            printf(" %d ",arr[r][c]);  
    }  
        }
    printf("\n");
    } 
   }
   else{
    printf("not a square matrix");
   }
    return 0;
}