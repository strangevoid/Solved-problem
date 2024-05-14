#include<stdio.h>
int main()
{
    int a ;
    printf("Enter the value of a :");
    scanf("%d",&a);
    if(a%2==0){//%2==0 mane holo vagsesh zero so amra obossoi vagsesh customize korte pai
        printf("The number is even\n");
    }
    else{
        printf("The number is odd\n");
    }
    return 0;
}
