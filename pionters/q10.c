#include<stdio.h>
int multiplyvalue(int* j){
    int i= 10*(*j);
}
int main(){
    int i=5;
    int* j = &i ;
    printf("before value = %d",i);
    multiplyvalue(i);
    printf("after value = %d",*j);
    return 0 ;
}