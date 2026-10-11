#include <stdio.h>

int main(){
    int a;
    printf("enter value :");
    scanf(" %d", &a);
    printf("square of number %d is %d\n", a,a*a);
    printf("cube of number %d is %d " , a,a*a*a);
    return 0 ;
}