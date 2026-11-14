#include<stdio.h>
int strlent(char str[]){
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
    char str[]="abhay";
    printf("%d",strlent(str));
    return 0;
}