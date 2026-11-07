#include<stdio.h>
int pass(int*);
int pass(int* j){
    printf("the address is %p\n", j);
    printf("the value of variable %d\n",*j);
   return 5;
}
int main(){
    int i=6;
    int* j = &i ; 
    printf("address of variable is %p\n",j);
    pass(&i);

}