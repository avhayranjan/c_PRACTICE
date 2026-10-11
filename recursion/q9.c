#include<stdio.h>
int sum( int n);

int sum(int n){
    if(n == 0 ){
        return 0;
    }
    return n + sum(n-1);
}
int main(){
    printf("%d", sum(10));
}