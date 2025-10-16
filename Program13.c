#include<stdio.h>
int main()
{
    int option,AGE;
    printf("Enter gender:\n 1.FeMAle\n 2.Male\n");
    printf("Enter any gender:");
    scanf("%d",&option);

    printf("Enter age:");
    scanf("%d",&AGE);

    if(option==1)
    {
        if(AGE>=18)
        printf("You can MARRY");
        else 
        printf("You can MARRY after %d years",18-AGE);

    }
    else if(option==2)
    {
        if(AGE>=21)
        printf("You can MARRY");
        else
        printf("You can MARRY after %d years",21-AGE);
    }
    else 
    printf("INVALID AGE");

    return 0;
}