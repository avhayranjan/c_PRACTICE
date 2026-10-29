#include<stdio.h>
int main(){
    int A[] = {10, 25, 30, 45, 50, 65};
    int i,comparison=0,found = 0;
    int key = 45;
    for(i = 1 ; i<6 ; i++){
        comparison++;
        if(A[i]==key){
            printf("element is found at position %d \n",i);
            found =1 ;
            break;
        }       
    }
    if(found==0){
        printf("element not found \n");
    }
     printf("total comaprison needed %d \n",comparison+);
    return 0;
}