#include<stdio.h>
int main(){
    int i;
    printf("enter value :");
    scanf("%d",&i)
    do{
        i--;
        printf("%d",i);
    }
    while(i>1);
}