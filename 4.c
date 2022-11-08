#include <stdio.h>
#include <math.h>
#define pi  3.14159
float sqre(float radius){
    return radius*radius;
}
int main()
{


    float ar, radius;
    printf("Enter radius of circle \n ");
    scanf("%f", &radius);
    ar = pi * sqre(radius);
    printf("Area of cirle is : %.2f\n", ar);
    return 0;
}