#include<stdio.h>

int main(){
    /*pattern printing 1 */
    int i , j ;
    for(i = 1 ; i<=10 ; i++){
        for(j =1; j<=i; j++){
        printf("%d",j);
        }
        printf("\n");
    }
    return  0;
}