#include<stdio.h>
int main(){
    int a;
    printf("Enter number: ");
    scanf("%d", &a);
    if(a % 97==0){
        printf("Number is divisible");
    }else{
        printf("Number is not divisible");
    }
    return 0;
}