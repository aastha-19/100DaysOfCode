// Q17: Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    int dis, r1, r2;

    printf("Coefficients:");
    scanf("%d %d %d",&a,&b,&c);

    dis=(b*b)-(4*a*c);

    if(dis>0){
        r1=(-b+sqrt(dis))/(2*a);
        r2=(-b-sqrt(dis))/(2*a);
        printf("Roots are real and different:%d, %d",r1,r2);
    }else if(dis==0){
        r1=r2=-b/(2*a);
        printf("Roots are real and same:%d",r1);
    }else{
        printf("Roots are complex");
    }

    return 0;
}

// Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
// 90-100: Grade A 
// 80-89: Grade B 
// 70-79: Grade C 
// 60-69: Grade D 
// below 60: Grade F.

#include <stdio.h>
int main(){
    int p;

    printf("Percentage:");
    scanf("%d",&p);

    if (100>p && p>90){
        printf("Grade A");
    }else if(89>p && p>80){
        printf("Grade B");
    }else if(79>p && 70<p){
        printf("Grade C");
    }else if(69>p && p>60){
        printf("Grade D");
    }else{
        printf("Grade F");
    }

    return 0;

}

