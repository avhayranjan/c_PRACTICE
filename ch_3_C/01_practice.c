#include <stdio.h>

int main(){
    float a;
    float b;
    float c;
    printf("enter marks 1:\n");
    scanf(" %f", &a);
    printf("enter marks 2:\n");
    scanf(" %f", &b);
    printf("enter marks 3:\n");
    scanf(" %f", &c);
    if(a+b+c/3>40 && a>33 && b>33 && c>33){
        printf("you are passed");
    }
    else {
        printf("you are failed");
    }
    return 0;
}