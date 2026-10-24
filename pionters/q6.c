#include<stdio.h>
int main(){
    int a=25 , b=40;
    int *p = &a ;
    int *q = &b ;
    if(*p > *q){
        printf(" largest = %d", *p);
    }
    else{
        printf("largest = %d", *q);
    }
    return 0 ;

}