#include<stdio.h>
int main(){
    int a,b;
    char operator;
    printf("enter value 1:");
    scanf("%d", &a);
    printf("enter value 2 :");
    scanf("%d", &b);
    printf("enter operator(+,-,*,/)");
    scanf(" %c", &operator);
    switch(operator){
        case '+':
        printf("addition=%d",a+b);
        bresk ;
        case '-' :
        printf("subtraction %d",a-b);
        case '*':
        printf("multiplication = %d",a*b);
        case '/':
        if(b!=0){
            printf("division= %d",a/b);
        }
        else{
            printf("divisible by zero is not authorized");
        }

    }
    return 0;
}