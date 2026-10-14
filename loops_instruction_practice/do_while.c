#include<stdio.h>
int main(){
    int i;
    do{
        i--;
        printf("%d",i);
        printf("enter value :");
        scanf("%d",&i);
    }
    while(i>1);
}