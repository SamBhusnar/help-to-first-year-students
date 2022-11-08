#include <stdio.h>
int main()
{
    int a, b, c, d, avg, sum;
    printf("Enter any four number\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    sum = a + b + c + d;
    avg = sum / 4;
    printf("Average of four number is : %d", avg);
    return 0;
}