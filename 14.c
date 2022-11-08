#include <stdio.h>
#include <math.h>
int main()
{
    double res, num;
    printf("Enter any number\n");
    scanf("%lf", &num);
    res = log(num);
    printf("Log of %.0lf number is : %.13lf", num, res);
    return 0;
}