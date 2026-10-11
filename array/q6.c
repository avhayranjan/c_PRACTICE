#include<stdio.h>
int main(){
    int a[5] = {25, 10, 45, 8, 30};
    int smallest=a[0];
    for(int i = 0 ; i<5 ; i++){
        if(a[i]<smallest){
            smallest=a[i];
        }
    }
    printf("%d",smallest);
    return 0;
}