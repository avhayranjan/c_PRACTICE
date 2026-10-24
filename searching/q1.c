#include<stdio.h>
int main(){
    int A[] = {10, 25, 30, 45, 50, 65};
    int i,comparison;
    for(i = 1 ; i<=6 ; i++){
        comparison++;
        if(A[i]=45){
            printf("element is found at position %d",i);
            break;
        }       
    }
    if(6<i){
        printf("element not found");
    }
    return 0;
}