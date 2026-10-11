#include <stdio.h>

int main(){
    int i ;
    int fact = 1;
    int a ;
    printf("give a number:");
    scanf("%d", &a);
    for(i=1 ; i<=a ; i++){
        fact *=i;
    }
    printf("factorial of a number is %d \n", fact);
    return 0;
    
}