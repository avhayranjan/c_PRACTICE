#include<stdio.h>
void pass(int);
void pass(int i){
   
}
int main(){
    int i=6;
    int* j = &i ; 
    printf("address of variable is %p\n",j);
    pass(i);

}