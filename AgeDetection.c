#include<stdio.h>

int main(){
    int a;
    printf("Enter the age:\n");
    scanf("%d",&a);
    if (a >= 18 && a < 101)
    {
        printf("can drive \n");
    }
    else if(a <= 18){
        printf("cannot drive yet\n");
    }
    else{
        printf("Bro how are you even alive???\n");
    }
    
}