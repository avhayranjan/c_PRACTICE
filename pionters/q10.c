#include<stdio.h>
int multiplyvalue(int* i){
    *i = 10*(*i);
}
int main(){
    int i=5;
    int* j = &i ;
    printf("before value = %d",*j);
    multiplyvalue(j);
    printf("after value = %d", *j);
    return 0 ; 
}