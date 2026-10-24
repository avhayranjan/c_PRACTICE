#include<stdio.h>
int main(){
    int A[] = {10, 25, 30, 45, 50, 65};
    int i,comparison=0;
    for(i = 1 ; i<=6 ; i++){
        comparison++;
        if(A[i]=45){
            printf("element is found at position %d",i);
            printf("total comparison needed %d", comparison);
            break;
        }       
    }
    if(6<i){
        printf("element not found");
        printf("total comaprison needed %d",comparison);
    }
    return 0;
}