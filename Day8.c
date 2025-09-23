// Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>
int main(){
    char ch;

    printf("Character:");
    scanf("%c",&ch);

    if(ch>='a'&&ch<='z'){
        printf("Lowercase alphabet");
    }else if(ch>='A'&&ch<='Z'){
        printf("Uppercase alphabet");
    }else if(ch>='0'&&ch<='9'){
        printf("Digit");
    }else{
        printf("Special Character");
    }
    return 0;
}

// Q16: Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>

int main(){
    int num1,num2,num3;

    printf("Enter three numbers:");
    scanf("%d %d %d",&num1, &num2, &num3);

    if(num1>num2&&num1>num3){
        printf("Largest is %d",num1);
    }else if(num2>num1&&num2>num3){
        printf("Largest is %d",num2);
    }else{
        printf("Largest is %d",num3);
    }

    return 0;
}
