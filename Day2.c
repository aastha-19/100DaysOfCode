// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>

int main(){
    int a, b;

    printf("Length and Width:");
    scanf("%d %d",&a, &b);

    int area=a*b;
    int peri=2*(a+b);

    printf("Area=%d, Perimeter=%d", area, peri);
    return 0;
}


// Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>

int main(){
    int r;
    float pi=3.14159265359;

    printf("Radius:");
    scanf("%d",&r);

    float area=pi*r*r;
    float cir=2*pi*r;

    printf("Area=%.2f, Circumference=%.2f",area,cir);
    return 0;
}
