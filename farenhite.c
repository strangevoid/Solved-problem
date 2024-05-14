#include<stdio.h>
int main()
{
    double celsius,farenhite;
    printf("Enter the tempreture in celsius : ");
    scanf("%lf",&celsius);
    farenhite=1.8*celsius+32;
    printf("Tempreture in farenheit is : %lf\n",farenhite);
    return 0;
}
