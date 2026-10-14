/*Write a program using function to find average of three numbers.*/
#include<stdio.h>
int average(int a , int b , int c);

int average(int a , int b , int c){
    int avg;
    avg=(a + b+ c)/3;
    printf("average = %d",avg);
    return avg;
}
int main(){
    average(3,4,5);
    average(3,9,7)
}