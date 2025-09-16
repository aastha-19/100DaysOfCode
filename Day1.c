// Q1: Write a program to input two numbers and display their sum.
#include <stdio.h>
int main(){
    int a, b, sum;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);

    sum=a+b;

    printf("Sum=%d\n", sum);

    return 0;
}

// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
int main(){
    int a,b;

    printf("Numbers:");
    scanf("%d %d", &a, &b);

    int s=a+b;
    int d=a-b;
    int p=a*b;

    printf("Sum=%d, Diff=%d, Product=%d, ", s,d,p);

    int q;
    if(b!=0){
        q=a/b;
        printf("Quotient:%d", q);
    }else{
        printf("Quotient: Cannot be divided by zero.\n");
    }

    return 0;
}
