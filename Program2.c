/*Calculator Program*/
#include<stdio.h>
int main()
{
    int option,a,b,SUM,DIFF,PROD,DIV,MOD;
    printf("1. Addition \n2.Subtration \n3.Multiplication \n4.Division \n5.Modulus \n");
    printf("Enter any option:");
    scanf("%d",&option);

    printf("Enter two operands:");
    scanf("%d %d",&a,&b);

    if(option==1)
    {
        SUM=a+b;
        printf("The answer is:%d",SUM);
    }
    else if(option==2)
    {
        DIFF=a-b;
        printf("The answer is:%d",DIFF);
    }
     else if(option==3)
    {
        PROD=a-b;
        printf("The answer is:%d",PROD);
    }
     else if(option==4)
    {
        DIV=a/b;
        printf("The answer is:%d",DIV);
    }
     else if(option==5)
    {
        MOD=a%b;
        printf("The answer is:%d",MOD);
    }

    else 
    printf("Wrong option");

    return 0;

}