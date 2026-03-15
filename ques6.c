// 6. Write a program to calculate the factorial of a given number using a for loop
#include<stdio.h>
int main(){
    int i,n;
    long fact=1;
    printf("Enter Number: ");
    scanf("%d",&n);
    for (i = 1; i <=n; i++)
    {
        fact = fact*i;
    }
    printf("Factorial of %d = %ld", n, fact);

    return 0;
    
}