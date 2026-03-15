#include<stdio.h>
int main(){
    int a;

    printf("Enter number");
    scanf("%d",&a);

    do
    {
        printf("%d\n",a);
        a++;
    } while (a<=4);

    return 0;
    
}