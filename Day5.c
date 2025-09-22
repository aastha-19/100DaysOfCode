// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>
int main(){
    float p,r,t;
    printf("Enter Principal, Rate, Time:");
    scanf("%f %f %f",&p ,&r ,&t);

    float SI=(p*r*t)/100;
    float CI=p*pow((1+r/100),t)-p;

    printf("Simple Interest=%.2f, Compound Interest=%.2f", SI, CI);

    return 0;  
}

// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.


#include<stdio.h>
#include<math.h>
int main(){
    int h,m,s;
    int n;

    printf("Enter time in seconds:");
    scanf("%d",&n);

    h=n/3600;
    m=(n%3600)/60;
    s=(n%3600)%60;

    printf("%d:%d:%d",h,m,s);
    return 0;
}
