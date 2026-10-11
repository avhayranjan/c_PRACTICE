#include<stdio.h>
void greet( int n);

void greet(int n){
    if(n == 0){
        return ;
    }
    greet(n - 1);
    printf("hello world \n" , n);
}
int main(){
    greet(5);
}