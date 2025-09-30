// Q29: Write a program to calculate the factorial of a number.
#include<stdio.h>
int main(){
    int n;
    int f=1;

    printf("Number:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        f=f*i;
    }
    printf("%d",f);
    return 0;
    
}

// Q30: Write a program to reverse a given number.

#include <stdio.h>
int main(){
    int n;
    int r=0, d;

    printf("Number:");
    scanf("%d",&n);

    while (n>0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    printf("%d",r);
    return 0;
}

