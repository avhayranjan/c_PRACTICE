#include<stdio.h>
int main(){
    int arr[10];
    for(int i=1 ; i<=10;i++){
        arr[i]=(i+1)*5;
        printf("arr%d\n",arr[i]);
    }
}