#include<stdio.h>

int main(){
    int a=97;
    int b;   
    printf("write a number to check divisibility:");
    scanf(" %d", &b);

    if (b != 0 && a % b == 0){
        printf("%d is divisible by %d\n",a, b);
    } else {
        printf("%d is not divisible by %d\n", a, b );
    }
    return 0;
}
