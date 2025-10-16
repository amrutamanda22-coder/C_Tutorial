#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);

    if((ch>='A')&&(ch<='Z'))
    printf("Entered character is uppercase ");

    else if((ch>='a')&&(ch<='z'))
    printf("Entered character is lowercase");

    else
    printf("Entered charcter is special character");

    return 0;
}