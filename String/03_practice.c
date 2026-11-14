#include<stdio.h>
int strlen(char a[]){
    int i =0 , count ;
    char c=str[i];
    while(c!='\0'){
        c=str[i];
        i++;
    }
    count=i-1;
    return count;
}
int main(){
    char str[]='abhay';
    int i =0 , count ;
    char c=str[i];
    while(c!='\0'){
        c=str[i];
        i++;
    }
    count=i-1;
    print("%d",count);
    return 0;
}