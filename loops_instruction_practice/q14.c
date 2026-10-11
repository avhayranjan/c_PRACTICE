#include<stdio.h>
int main(){
    /*count number of digits in  number*/
    int n, count=0;
    printf("enter number :");
    scanf("%d", &n);
    while(n!=0){
        n=n/10;
        count++;
    }
    printf("number of digits = %d", count);
    return 0;
}