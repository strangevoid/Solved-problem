#include<stdio.h>
int main()
{
    int a=25;
    int s=rec(a);
    printf("%d\n",s);
}
int rec(int x)
{
    int s=1;
    if(x==1){
        return(1);
    }
    else{
        s=x+rec(x-1);
        return(s);
    }
}
