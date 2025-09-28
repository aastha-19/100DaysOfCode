// Q23: Write a program to calculate library fine based on late days as follows: 
// First 5 days late: ₹2/day 
// Next 5 days late: ₹4/day 
// Next 20 days days late: ₹6/day 
// More than 30 days: Membership Cancelled.

#include <stdio.h>
int main(){
    int D;
    int F=0;

    printf("Days:");
    scanf("%d", &D);

    if(D<=5){
        F=D*2;
        printf("Fine ₹%d", F);
    }else if(D<=10){
        F=(5*2)+(D-5)*4;
        printf("Fine ₹%d", F);
    }else if(D<=30){
        F=(5*2)+(5*4)+(D-10)*6;
        printf("Fine ₹%d", F);
    }else{
        printf("Membership cancelled");
    }
    return 0;
}

// Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
// First 100 units at ₹5/unit 
// Next 100 units at ₹7/unit 
// Next 100 units at ₹10/unit 
// Above at ₹12/unit

#include<stdio.h>
int main(){
    int unit;
    int rate=0;

    printf("Units:");
    scanf("%d", &unit);

    if(unit<=100){
        rate=unit*5;
        printf("Bill: ₹%d", rate);
    }else if (unit<=200)
    {
        rate=(100*5)+(unit-100)*7;
        printf("Bill: ₹%d", rate);
    }else if (unit<=300)
    {
        rate=(100*5)+(100*7)+(unit-200)*10;
        printf("Bill: ₹%d", rate);
    }else{
        rate=(100*5)+(100*7)+(100*10)+(unit-300)*12;
        printf("Bill: ₹%d", rate);
    }
    return 0;
}
