// 1. RELATIONAL OPERATOR (To check whether the condition is if is true or false {==,>=,<=,!=})
#include<stdio.h>
int main(){
    int a=5;
    if(a>=2){
        printf("The no is greater");
    }else{
        printf("Less");
    }
    return 0;
}

// 2. LOGICAL OPERATOR (Help to provide logic to our c programme {&&,||,!})
#include<stdio.h>
int main(){
    int a=2,b=2;
    if(a%2==0&&b%2==0){
        printf("%d,%d are even numbers",a,b);
    }else{
        printf("Odd numbers");
    }
    return 0;

}

// 3. TERNARY OPERATOR (A shorthand “if – else” {condition ? expression-if-true : expression-if-false})
#include<stdio.h>
int main(){
    int a=3,b=5;
    a<b? printf("3 is smaller") : printf("5 is smaller");
}

// 4. INCREMENT OPERATOR AND DECREMENT OPERATOR(i++,i--,--i,+i)