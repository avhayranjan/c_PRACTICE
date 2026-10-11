#include<stdio.h>
int evenodd(int n);

int evenodd(int n){
    if(n !=0 && n%2== 0){
        printf("given number is even \n");
    }
    else{
        printf("given number is odd \n");
    }
}
int main(){
    evenodd(5);
}