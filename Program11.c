/*Perimeter of Rectangle*/
#include<stdio.h>
int main()
{
    float a,b,Perimeter;
    printf("Enter length:");
    scanf("%f",&a);
    printf("Enter breadth:");
    scanf("%f",&b);

    Perimeter=2*(a+b);

    printf("Perimeter of rectangle is:%f",Perimeter);

    return 0;

}