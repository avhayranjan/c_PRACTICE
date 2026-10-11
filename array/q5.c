#include<stdio.h>
int main(){
    int a[5] = {25, 10, 45, 8, 30};
    int greatest = a[0];
    for(int i=0 ; i<5 ; i++){
        if(a[i]> greatest){
            greatest = a[i];
        }
    }
    printf("%d",greatest);
    return 0;
}