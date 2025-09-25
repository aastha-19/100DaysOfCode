// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;

    printf("Sides:");
    scanf("%d %d %d", &a,&b,&c);

    if(a==b && b==c){
        printf("Equilateral");
    }else if(a==b || a==c || b==c){
        printf("Isoceles");
    }else{
        printf("Scalane");
    }
    
    return 0;
}

// Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

#include <stdio.h>
int main(){
    int D;

    printf("Day as Number:");
    scanf("%d",&D);

    switch (D){
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thrusday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    
    default:
    printf("Invalid number, Please choose between 1-7.");
        break;
    }
}

