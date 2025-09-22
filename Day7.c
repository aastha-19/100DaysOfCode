// Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include<stdio.h>
int main(){
    int n;
    printf("Year:");
    scanf("%d",&n);

    if((n%4000==0)||(n%4==0&&n%100!=0)){
        printf("Leap year");
    }else{
        printf("Not a leap year");
    }

    return 0;
}

// Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>
#include <ctype.h>
int main(){
    char c;

    printf("Character:");
    scanf("%c",&c);

    c=tolower(c);

    if(c>='a' && c<='z'){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            printf("Vowel");
        }else{
            printf("Consonant");
        }
    }

    return 0;
}
