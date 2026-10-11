#include<stdio.h>
void print_even(int n);

void print_even(int n){
    if(n == 0 ){
        return ;
    }
    print_even(n-2);
    printf("%d \n", n);

}
int main(){
    print_even(10);

}