#include<stdio.h>

int maximum(int a , int b);

int maximum(int a , int b){
    if(a>b){
        printf("a is larger");
        
    }
    else if (b>a){
        printf(" b is larger");
    }
    else if (a == b){
        printf(" b is equal to a");
    }
    else {
        printf(" invalid output");
    }
}
int main(){
    maximum(4,7);
}