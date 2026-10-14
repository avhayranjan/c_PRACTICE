#include<stdio.h>

int main(){
    /*number pattern*/
    int i , j ,n ;
    printf("enter value of n");
    scanf("%d",&n);
    for(i =1 ; i<=n ; i++){
        for(j = 1 ; j<=i ; j++){
            printf("%d" , j);
        }
        printf("\n");
    }
    return 0;
}