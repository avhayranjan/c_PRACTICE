#include<stdio.h>
int call_reference(int*);
int call_reference(int* i){
    *i=10;
}
int main(){
    int i ; 
    call_reference(i);
    printf("value of i = %d", )
}