#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    printf("enter the your name :\n");
    scanf("%s",a);
    printf("your name is:%s\n",a);
    printf("total letter in your name :%zu",strlen(a));
    return 0;
}