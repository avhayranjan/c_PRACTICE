#include<stdio.h>
int main(){
    /*find the sum of digits of a numbers*/
    int n,x, summ=0;
    printf("enter number :");
    scanf("%d",&n);
    while(n!=0){
        x=n%10;
        summ+=x;
        n=n/10;
    }
    printf("sum of number = %d", summ);
    return 0;
    
}