#include <stdio.h>

int main(){
    int num;
    int prime=0;
    printf("enter value :");
    scanf("%d", &num);
    int i ;
    for(i = 2; i <num ; i++){
        if(num%i==0){
            prime =1;
            }
    }
    if(prime){
        printf("%d is not prime", num);
       
    }
    else{
        printf("%d is prime", num);
    }
    return 0;
}