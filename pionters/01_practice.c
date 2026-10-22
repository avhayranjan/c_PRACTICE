#include<stdio.h>
/*Write a program to print the address of a variable. Use this address to get the value of
the variable*/
int main(){
    int a= 4; 
    int *j= &a;
    printf("adress of the variable is : %p \n",j);
    printf(" value on the address %u is %d",j , *j);
    return 0 ; 
    muskan 
}