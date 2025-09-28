// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
#include<math.h>
int main(){
    int a, b, r;
    char op;

    printf("Numbers and operator:");
    scanf("%d %d %c", &a ,&b ,&op);

    switch (op)
    {
    case '+':
        r=a+b;
        printf("%d",r);
        break;
    case '-':
        r=a-b;
        printf("%d",r);
        break;
    case '*':
        r=a*b;
        printf("%d",r);
        break;
    case '/':
        r=a/b;
        printf("%d",r);
        break;
    case '%':
        r=a%b;
        printf("%d",r);
        break;
    default:
        printf("Invalid operation");
        break;
    }
    return 0;
}


// Q26: Write a program to print numbers from 1 to n.

#include<stdio.h>
int main(){
    int n;
    printf("Number:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d ",i);
    }
    return 0;
    
}
