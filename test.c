#include<stdio.h>

int main(void){
    double a,b,h,result;
    printf("a: ");
    scanf("%lf",&a);
    printf("b: ");
    scanf("%lf",&b);
    printf("h: ");
    scanf("%lf",&h);
    result = (a+b)*h/2;
    printf("Area is %.1lf",result);
    return 0;
}