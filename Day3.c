// Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>
int main(){
    float c;

    printf("Celsius:");
    scanf("%f", &c);

    float f=(c*9/5)+32;

    printf("Fahrenheit=%.0f",f);

    return 0;
}


// Q6: Write a program to swap two numbers using a third variable.

#include <stdio.h>
int main(){
    int a,b,temp;

    printf("Numbers:");
    scanf("%d %d",&a, &b);

    temp=a;
    a=b;
    b=temp;

    printf("After Swap: %d %d",a,b);

    return 0;
}
