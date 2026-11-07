#include<stdio.h>
int pass(int8);
int pass(int* j){
    printf("the address is %p", j);
    printf("the value of variable %d",*j);
   return 5;
}
int main(){
    int i=6;
    int* j = &i ; 
    printf("address of variable is %p\n",j);
    pass(&i);

}