#include<stdio.h>

void calc(){
    int num1,num2;
    printf("Enter the number: \n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    printf("Addition: %d",num1+num2);
}

int main(){
    calc();
    return 0;
}