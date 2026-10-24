#include<stdio.h>
void change(int* x);
void change(int* x){
    int* x =50;

}
int main(){
    int a = 10;
    change(&a);
    printf("the new value is %d", change(&))
}