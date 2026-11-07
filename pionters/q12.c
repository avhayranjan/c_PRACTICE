#include<stdio.h>
void sum_average(int*, int*);
void sum_average(int* a, int* b){
    int sum= *a + *b;
    printf("sum =%d",sum);
    int average = (*a + *b) /2;
    printf("average = %d",average);
}
int main(){
    int a= 2; 
    int b= 6;
    sum_average(&a , & b);
    rt
}