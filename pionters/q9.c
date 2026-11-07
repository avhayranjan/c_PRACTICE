#include<stdio.h>
void pass(int);
void pass(int i){
    i = 6;
    int* j= i; 
    
}
int main(){
    int i=6;
    int* j = &i ; 
    printf("adress of variable is %p",j);

}