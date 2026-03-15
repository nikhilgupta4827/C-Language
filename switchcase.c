//switch-case is used when we have to make a choice between number of alternatives for a given variable.
#include<stdio.h>
int main(){
    int a;
    printf("Enter no: ");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("you entered 1");
        break;
    case 2:
        printf("You entered 2");
        break;
    default:
        printf("Nothing matched");
        break;
    }
    return 0;
}