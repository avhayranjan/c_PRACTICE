/* Write a program to create an array of 10 integers and store multiplication table of 5 in
it.*/
#include<stdio.h>
int main(){
    int main() {
    int arr[10];
    for(int i=0 ; i<10;i++){
            arr[i]=(i+1)*5;
        }
    for(inbti=0;i<10;i++){
        printf("5X%d=%d\n",i+1,arr[i]);
    }
    printf("%d",arr[6]);
    return 0;
}