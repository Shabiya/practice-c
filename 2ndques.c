//Calculate the area of a circle.
#include<stdio.h>
int main()
{
    float radius,area;
    printf("Enter radius of a circle \n");
    scanf("%f \n",&radius);
    area=3.14*radius*radius;
    printf("Area of a circle is= %f",&area);
    return 0;

}