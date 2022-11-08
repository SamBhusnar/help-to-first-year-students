#include<stdio.h>
void swap(int *one,int *two){
int temp=*one;
*one=*two;
*two=temp;
}
int main(){
    int num,num2;
    printf("Enter any two number\n");
    scanf("%d%d",&num,&num2);
    printf(" Befor : A = %d ,B= %d\n",num,num2);
    swap(&num,&num2);
    printf(" After : A = %d ,B= %d\n",num,num2);


    return 0;
}