/*Write a program containing a function which reverses the array passed to it*/
#include<stdio.h>
void count(int arr[],int n){
    int no_positive=0;
    for(int i=0 ; i < 0 ; i++){
        if(arr[i]>0){
            no_positive++;
        }
    }
}
int main(){
    int a[]={10,20,30,40,50,-9 ,41,12,-13,-90};
    printf("no of positive no in an array is %d",count(a))
}