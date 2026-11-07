#include<stdio.h>
void pass(int);
void pass(int i){
    i = 6;
    int* j= &i; 
    printf("the asdress of i is %p\n", j);
}
int main(){
    int i=6;
    int* j = &i ; 
    printf("address of variable is %p\n",j);
    pass(i);

}