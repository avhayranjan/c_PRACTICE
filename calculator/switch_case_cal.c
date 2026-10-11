#include<stdio.h>
#include<math.h>
int main(){
    char choice_operrator;
    float a , b ;
    printf("choose operator(+,-,*,/,%%) :");
    scanf("%c", &choice_operrator);

    switch(choice_operrator){
        case '+':
        printf("enter number 1 :");
        scanf("%f", &a);
        printf("enter number 2 :");
        scanf("%f", &b);
        printf("sum = %.2f" , a + b);
        break;

        case '-':
        printf("enter number 1 :");
        scanf("%f", &a);
        printf("enter number 2 :");
        scanf("%f", &b);
        printf("difference= %.2f" , a - b);
        break;

        case '*':
        printf("enter number 1 :");
        scanf("%f", &a);
        printf("enter number 2 :");
        scanf("%f", &b);
        printf("product = %.2f" , a * b);
        break;

        case '/':
        printf("enter number 1 :");
        scanf("%f", &a);
        printf("enter number 2 :");
        scanf("%f", &b);
        if(b!=0){
            
            printf("divide = %.2f" , a / b);
        }
        else{
            printf("cannot divide by zero");
        }
        break;

        case '%':
        int a , b ;
        printf("enter number 1 :");
        scanf("%d", &a);
        printf("enter number 2 :");
        scanf("%d", &b);
        if(b!=0){
            printf("remainder = %d" , a % b);
        }
        else if(a == (float)a || b==(float)b){
            printf("only for integers");
        }
        else{
            printf("value cannot dettermine");
        }
        break;
    }
}