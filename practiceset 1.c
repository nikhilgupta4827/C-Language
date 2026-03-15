// 1. Write a program to print multiplication table of a given number n.
#include<stdio.h>
int main(){
    int i;
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        printf("%d \n",n*i);
    }
    return 0;


}

#include<stdio.h>
int main(){
    int i=1;
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    do{
        printf("%d\n",n*i);
        i++;
    }while(i<=10);
    return 0;

    
}