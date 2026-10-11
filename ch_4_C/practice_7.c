#include <stdio.h>

int main (){
    int i=1 ;
    int fact =1 ;
    int n;
    printf("enter value for factorial:");
    scanf("%d", &n);
    while(i<=n){
        fact *= i;
        i++;
    }
    printf("here is factorial : %d", fact);
    return 0;
    
}