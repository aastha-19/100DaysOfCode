// Q27: Write a program to print the sum of the first n odd numbers.

#include<stdio.h>
int main(){
    int n;
    int sum=0, odd=1;
    printf("Number:");
    scanf("%d",&n);

    for (int i = 1; i <=n; i++)
    {
        sum=sum+odd;
        odd=odd+2;
        
    }
    printf("%d",sum);
    return 0;
}

// Q28: Write a program to print the product of even numbers from 1 to n.
#include<stdio.h>
int main (){
    int n;
    long long p=1;

    printf("Number:");
    scanf("%d",&n);

    for (int i = 2; i <= n; i=i+2)
    {
        p=p*i;
    }
    printf("%lld",p);

    return 0;
}
