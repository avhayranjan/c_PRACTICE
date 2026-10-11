#include<stdio.h>
void odd( int n);

void odd(int n){
    if(n<=0){
        return ; 
    }
    odd(n-2) ;
    printf("%d \n", n);
}
int main(){
    odd(9);
}