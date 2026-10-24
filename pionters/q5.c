#include<stdio.h>
void swap(int* a , int* b);
void swap(int*a , int* b){
    int temp = *a ;
    *a = *b;
    *b = temp;
}
int main(){
    int a= 10 , b= 20;
    printf("before swapping a=%d & b=%d \n", a ,b);
    swap(a,b);
    printf("after swapping a=%d & b=%d \n", a , b)

}