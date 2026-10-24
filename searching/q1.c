#include<stdio.h>
int main(){
    int A[] = {10, 25, 30, 45, 50, 65};
    for(int i = 1 ; i<=6 ; i++){
        if(A[i]=45){
            printf("element is found at position ",i);
            break;
        }       
    }
}