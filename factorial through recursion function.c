#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    int fact=rec(a);
    printf("Fac is %d\n",fact);
}
int rec(int x)
{
    int f;
    if(x==1){
        return(1);
    }
    else{
         f=x*rec(x-1);
    return(f);
    }
}
