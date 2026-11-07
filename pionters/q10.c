#include<stdio.h>
int multiplyvalue(int* i){
    *i = 10*(*i);
}
int main(){
    int* i=5;
    printf("before value = %d",*i);
    multiplyvalue(i);
    printf("after value = %d", *j);
    return 0 ; 
}