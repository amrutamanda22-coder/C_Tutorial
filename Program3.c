#include<stdio.h>
#define PI 3.14
int main()
{
    float option,base,height,length,breadth,radius,area;
    printf("1.Area of Triangle \n2.Area of Rectangle \n3.Area of Circle \n4.Area of Sphere \n");
    printf("Enter any option:");
    scanf("%f",&option);

    if(option==1)
    {
        printf("Enter base and height of triangle:");
        scanf("%f %f",&base,&height);
        area=0.5*base*height;
        printf("Area of Triangle=%f",area);
    }
    else if(option==2)
    {
        printf("Enter lenght and breadth:");
        scanf("%f %f",&length,&breadth);
        area=length*breadth;
        printf("Area of Rectangle=%f",area);
    }
    else if(option==3)
    {
        printf("Enter radius:");
        scanf("%f",&radius);
        area=2*PI*radius*radius;
        printf("Area of Circle:%f",area);
    }
    else if(option==4)
    {
        printf("Enter radius:");
        scanf("%f",&radius);
        area=4*PI*radius*radius;
        printf("Area of Sphere:%f",area);
    }
    else
    printf("Wrong Option");
    
    return 0;
}