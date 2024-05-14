#include<stdio.h>
void d1(int);
void d2(int*);
int main()
{
    int i;
    int mark[]={1,2,3,4,5,6,7};
    for(i=0;i<=6;i++)
    d1(mark[i]);
    for(i=0;i<=6;i++)
    d2(&mark[i]);
    return 0;
}
void d1(int m)
{
    printf("d1.%d\n",m);
}
void d2(int *n)
{
    printf("%d\n",*n);
}
