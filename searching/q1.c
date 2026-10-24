#include<stdio.h>
int main(){
    int A[] = {10, 25, 30, 45, 50, 65};
    int i,comparison=0,found = 0;
    for(i = 1 ; i<6 ; i++){
        comparison++;
        if(A[i]=45){
            printf("element is found at position %d \n",i+1);
            printf("total comparison needed %d \n", comparison);
            found =1;
            break;
        }       
    }
    if(6<i){
        printf("element not found \n");
        printf("total comaprison needed %d \n",comparison);
    }
    return 0;
}