#include<stdio.h>
int main(){
    int i;
    printf("enter value :");
    do{
        i--;
        printf("%d",i);
        scanf("%d",&i);
    }
    while(i>1);
}