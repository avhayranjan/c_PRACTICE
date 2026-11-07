#include<stdio.h>
void pass(int);
void pass(int i){
    i = 6;
    int* j= &i; 
    printf("the value of j = ")
}
int main(){
    int i=6;
    int* j = &i ; 
    printf("adress of variable is %p",j);

}