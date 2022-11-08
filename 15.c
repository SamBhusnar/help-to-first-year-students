#include<math.h>
#include<stdio.h>
int main(){
    double base,exp,res;
    printf("Enter any base number\n");
    scanf("%lf",&base);
    printf("Enter any exponent number : ");
    scanf("%lf",&exp);


    res=pow(base, exp);
    printf(" %.1lf ^ %.1lf = %.2lf",base,exp,res);
    return 0;
}