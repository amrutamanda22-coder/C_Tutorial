/*Cube of given number*/
#include<stdio.h>
int main()
{
    float n,cube;
    printf("Enter any number:");
    scanf("%f",&n);

    cube=n*n*n;

    printf("Cube of given number is:%f",cube);

    return 0;

}