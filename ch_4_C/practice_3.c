#include <stdio.h>

int main(){
    int i=1 ;
    int sum;
    while(i<=10){
        sum =i*(i+1)/2;
        i++ ;
    }
    printf("sum of first 10 natural number is : %d\n ",sum);
    return 0;
}