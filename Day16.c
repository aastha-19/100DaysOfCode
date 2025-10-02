// Q31: Write a program to take a number as input and print its equivalent binary representation.

#include<stdio.h>
int main(){
    int n;
    long  binary=0;
    int p=1;

    printf("Number:");
    scanf("%d", &n);

    while (n>0)
    {
        int d=n%2;
        binary=binary*d+p;
        p=p*10;
        n=n/2;
    }
    printf("%ld",binary);
    return 0;
    
}


// Q32: Write a program to check if a number is a palindrome.

#include <stdio.h>
int main(){
    int n;
    int rev=0, d;

    printf("Number:");
    scanf("%d",&n);
    int ori=n;

    while(n>0){
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }

    if(rev==ori){
        printf("Palindrome");
    }else{
        printf("Not Palindrom");
    }

    return 0;
}
