#include<stdio.h>
int main(){
    int arr[10];
    int i,j;
    for(i=0 ; i<10;i++){
        for(j=0;j<=i;j++){
            arr[j]=(i+1)*5;
        }
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    return 0;
}