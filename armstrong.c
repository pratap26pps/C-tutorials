//armstrong no.= A no. whose sum of cube of individual digit is equal to original number
#include<stdio.h>                            //example=153,1,
#include<math.h>
int main()
{
    int n,r,s=0,m;
    printf("ent any number=");
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
    r=n%10;
    s=s+(r*r*r);
    n=n/10;
    
    }
    if(m==s){
    printf("the no. is armstrong");
    }
    else {
        printf("not a armstrong");
    }
    return 0;
}