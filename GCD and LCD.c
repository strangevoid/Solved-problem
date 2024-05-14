#include<stdio.h>
int main()
{
    int a,b,c,d,e,x,gcd;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a<b<c<d<e){
        x=a;
    }
    else{
        x=b;
        x=c;
        x=d;
        x=e;
    }
    for(;x>=1;x--){
        if(a%x==0&&b%x==0){
        gcd=x;
        break;
        }
    }
    printf("GCD is %d\n",gcd);
    return 0;
}
