#include<stdio.h>
void value(int* a);
void value(int* a){
    *a= *a * 30 ;
}
int main(){
    int x ;
    printf("enter value of x :");
    scanf("%d",&x);
    printf("the value of x %d",value(&x));
    return 0 ; 

}