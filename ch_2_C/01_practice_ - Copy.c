#include<stdio.h>

int main(){
    /* Which of the following is invalid in C?
a. int a = 1; int b = a;
b. int v = 3*3;
c. char dt = '21 dec 2020';*/
    int a=2;int b = 4;
    printf("%d %d\n",a,b);
    int v=3*3;
    printf("%d",v);
    char dt='21 jun 2021';
    printf("%c",dt);
    return 0; 
    /*hence char gives error*/
}