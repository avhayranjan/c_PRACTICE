#include<stdio.h>
void pass(int);
void pass(int* j){
    printf("")
   return 5;
}
int main(){
    int i=6;
    int* j = &i ; 
    printf("address of variable is %p\n",j);
    pass(i);

}