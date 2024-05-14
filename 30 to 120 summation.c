#include<stdio.h>
int main()
{
    int a,sum=0;
    for(a=30;a<120;a++){
        if(a%3==0&&a%5==0){
            sum=sum+a;
        }
    }
    printf("%d\n",sum);
    return 0;
}
