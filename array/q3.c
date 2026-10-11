#include<stdio.h>
int main(){
    int a[5]={10,20,30,40,50};
    int sum ; 
    for(int i=0; i<1 ; i++){
        sum=a[i]+a[i+1]+a[i+2]+a[i+3]+a[i+4];
        printf("%d\n", sum);
    }
    return 0 ;
}