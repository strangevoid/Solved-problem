#include<stdio.h>
int main()
{
    int a,sum;
    printf("Enter a 5 digit number : ");
    scanf("%d",&a);
    sum=rec(a);
    printf("the sum of the digits is :%d\n",sum);
}
int rec(int x)
{
    int a,b;
    if(x!=0){
        a=x%10;
        b=a+rec(x/10);
        return(b);
    }
        else
            return(0);
}
