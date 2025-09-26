// Q21: Write a program to display the month name and number of days using switch-case for a given month number.

#include<stdio.h>
int main(){
    int m;

    printf("Month number:");
    scanf("%d", &m);

    switch (m)
    {
    case 1:
        printf("January, 31 days");
        break;
    case 2:
        printf("February, 28 days");
        break;
    case 3:
        printf("March, 31 days");
        break;
    case 4:
        printf("April, 30 days");
        break;
    case 5:
        printf("May, 31 days");
        break;
    case 6:
        printf("June, 30 days");
        break;
    case 7:
        printf("July, 31 days");
        break;
    case 8:
        printf("August, 31 days");
        break;
    case 9:
        printf("September, 30 days");
        break;
    case 10:
        printf("October, 31 days");
        break;
    case 11:
        printf("November, 30 days");
        break;
    case 12:
        printf("December, 31 days");
        break;
    default:
        printf("Invalid number, please choose between 1-12.");
        break;
    }
    return 0;
}

// Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include<stdio.h>
int main(){
    float CP, SP;

    printf("Enter CP and SP:");
    scanf("%f %f", &CP ,&SP);

    if(SP>CP){
        float d=SP-CP;
        float p=(d/CP)*100;
        printf("Profit %0.f%%", p);
    }else if(SP<CP){
        float d=CP-SP;
        float p=(d/CP)*100;
        printf("Loss %0.f%%",p);
    }else{
        printf("No profit No loss");
    }
    return 0;
}

