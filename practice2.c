// 2. Write a program to print multiplication table of 10 in reversed order.
#include<stdio.h>
int main(){
    int i,n;
    printf("Enter number: ");
    scanf("%d",&n);
    for(i=10;i>=1;i--){
        printf("%d\n",n*i);
    }
    return 0;

}