#include<stdio.h>

int main(){
    /*check number is prime or not */
    int n ;
    int prime = 0;
    printf("enter value to verify:");
    scanf("%d", &n);
    for(int i=2 ; i<n ; i++){

        if(n%i==0){
            prime =1 ;
        }   
    }
    if(not_prime){
        printf("%d is not prime",n);
    }
    else{
        printf("%d is prime", n);
    }


}