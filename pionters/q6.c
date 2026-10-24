#include<stdio.h>
int main(){
    int a=25 , b=40;
    int *p = &a ;
    int *q = &b ;
    if(*p > *q){
        printf("p is largest = %d", *p);
    }
    else{
        printf("q is largest = ");
    }

}