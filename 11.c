#include <stdio.h>
int main()
{

    int ctemp, ftemp;
    printf("Enter tempreture in celsius \n");
    scanf("%d", &ctemp);
    ftemp = (ctemp * 9 / 5) + 32;
    printf("Tempreture in fahrenheit  : %d", ftemp);
    return 0;
}