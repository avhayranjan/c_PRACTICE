#include<stdio.h>
int value(int* a);
int value(int* a){
    *a= *a * 30 ;
}
int main(){
    int x ;
    printf("enter value of x :");
    scanf("%d",&x);
    printf("the value of x %d",value(&))

}