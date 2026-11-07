#include<stdio.h>
int multiplyvalue(int* i){
    int* j = 10*();
}
int main(){
    int i=5;
    int* j = &i ;
    printf("before value = %d",*j);
    multiplyvalue(i);
    printf("after value = %d", *j);
    return 0 ; 
}