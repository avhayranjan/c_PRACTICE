#include <stdio.h>
int factorial(int n);

int factorial(int n){
    int fact = 1 ;
    for (int i = 1  ; i <= n ; i++){
        fact*=i ;
    }
    printf("factorial of number is %d", fact);
}
int main(){
    factorial(5);
}
