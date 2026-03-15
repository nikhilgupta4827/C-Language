/* QUES1: (Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.)*/

/*#include<stdio.h>
int main(){
    int phy,chem,maths;
    printf("Enter phy marks: ");
    scanf("%d",&phy);
    printf("Enter chem marks: ");
    scanf("%d",&chem);
    printf("Enter maths marks: ");
    scanf("%d",&maths);
    if(phy>=33 && chem>=33 && maths>=33 && phy+chem+maths/300*100>=40){
        printf("You are passed");
    }else{
        printf("You are failed");
    }
    return 0;
}*/

/* QUES 2 (Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
 Income Slab Tax
 2.5 – 5.0L 5%
 5.0L - 10.0L 20%
 Above 10.0L 30%
Note that there is no tax below 2.5L. Take income amount as an input from the user.) */

#include<stdio.h>
int main(){
    float income;
    printf("Enter income: ");
    scanf("%f", &income);
    if(income>=2.5L && income<=5.0L){
        printf("Tax is 5%");
    }else if(income>=5.0L && income<=10.0L){
        printf("Tax is 20%");
    }else if(income>=10.0L){
        printf("Tax is 30%");
    }else{
        printf("No tax payed");
    }
    return 0;

}