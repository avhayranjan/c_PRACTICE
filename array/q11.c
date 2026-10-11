#include<stdio.h>
int main(){
    int a[6] = {12, 45, 23, 67, 34, 56};
    int gratest=a[0];
    int second=a[0];
    for(int i =0; i<6 ; i++){
        if(a[i]>gratest){
            second=gratest;
            gratest=a[i];
        }
        else if(a[i]>second && a[i]<gratest){
            second=a[i];
        }
    }
    printf("%d", second);
    return 0;
}