#include<stdio.h>

int main(){
    int i;
    int sum=0;
    for(i=1; i<=10 ; i++){
        sum +=(8*i);    
    }
    printf("sum of table of 8 is %d \n", sum );
    return 0;
}