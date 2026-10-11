#include<stdio.h>
int main(){
    int a[5]={10,20,30,40,50};
    int b[5]={1,2,3,4,5};
    int sum ; 
    for(int i=0 ; i<5 ; i++){
        sum = a[i]+b[i];
        printf("%d\n",sum);
    }
    return 0;
}