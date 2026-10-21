#include<stdio.h>
int main(){
    int a= 4; 
    int *j= &a;
    printf("adress of the variable is : %p \n",j);
    printf(" value on the address %u is %d",j , *j);
    return 0 ; 
}