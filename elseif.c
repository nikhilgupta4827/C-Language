#include<stdio.h>
int main(){
    int percentage=80;
    if(percentage>=95){
        printf("You will be gifted a mobile phone");
    }
    else if(percentage>=85){
        printf("You will be gifted a cricket kit");
    }
    else if(percentage>=75){
        printf("You will be gifted a cricket kit ");
    }
    else{
        printf("Keep trying");
    }
    return 0;
}