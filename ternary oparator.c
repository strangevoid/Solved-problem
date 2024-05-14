#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d\n",&a,&b);
    c=a>b?3:4;//this operator can  be nested
    printf("%d\n",c);
}
