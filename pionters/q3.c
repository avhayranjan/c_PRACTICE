#include<stdio.h>
void change(int* x);
void change(int* x){
    *x=50;

}
int main(){
    int a = 10;
    printf("")
    change(&a);
    printf("the new value is %d",a);
    return 0 ; 
}