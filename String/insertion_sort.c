#include<stdio.h>
int main(){
    int a[5]={23,15,43,20,44};
    int i , j ,key;
    for(i=0 ; i<5 ; i++){
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[];
            j--;
        }
        a[j+1]=key;
    }
    printf("sorted array : ");
    for(i=0 ; i<5 ;i++){
        printf("%d",a[i]);
    }
    return 0;
}
