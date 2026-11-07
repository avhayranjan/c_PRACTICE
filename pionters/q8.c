#include<stdio.h>
int main(){
    int i = 6 ; 
    int* j = &i ;
    printf("the address of variable is %p", &j);
    printf(" the value at adress is %d",*(j));
}