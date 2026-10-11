#include<stdio.h>

int isPrime(int n);

int isPrime(int n){
    int prime = 1;
    if (n < 2)
    return 0 ;
    for(int i = 2 ; i < n ; i++){
        if(n%i==0){
            prime = 0 ;
            break ; 
        }
    }
    return prime ;
    
}
int main(){
    int n;
    printf("enter number :");
    scanf("%d", &n);
    if(isPrime(n)==1){
        printf("number is prime");

    }
    else
        printf("number is not prime");
    return 0;
}
