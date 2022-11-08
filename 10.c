#include <stdio.h>
int main()
{
    int amount, rate, time, si, fp;
    printf("Enter amount rate and time \n");
    scanf("%d%d%d", &amount, &rate, &time);
    fp = amount;

    si = (amount * rate * time) / 100;
    fp += si;
    printf("Simple interast is : %d", fp);
    return 0;
}