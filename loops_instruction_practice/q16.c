#include<stdio.h>
int main(){
    /*find the largest digit of a number*/
    int n , x , largest=0 ;
    printf("enter number:");
    scanf("%d", &n);
    while(n!=0){
        x=n%10;
        n=n/10;
        if(x>largest){
        largest=x;
    }
    }
    printf("largest number = %d",largest);
    return 0;
    
}