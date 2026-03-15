// 4. Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.
#include<stdio.h>
int main(){
    int i;
    int sum=0;
    for(i=1;i<=10;i++){
       sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}

#include<stdio.h>
int main(){
    int i=1;
    int sum=0;
    do{
      sum=sum+i;
      i++;
    }while (i<=10);

    printf("%d",sum);
    
    return 0;
}