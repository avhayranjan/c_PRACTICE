#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    int* p= arr ;
    int sum=0 ;
    for(int i = 0 ; i<5 ; i++){
        sum = arr[0] + arr[i];
    }
    printf("sum = %d", sum);
    return 0; 
}