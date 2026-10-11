#include<stdio.h>
int main(){
    int a[7] = {12, 7, 4, 9, 16, 3, 8};
    int count= 0 ;
    for(int i = 0 ; i<7 ; i++){
        if(a[i]%2!=0){
            count+=1;
        }
    }
    printf("%d",count);
    return 0 ;
}
