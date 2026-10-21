#include <stdio.h>
void check_add(int i);

void check_add(int i){
    i = 22;
    int* j= &i;
    printf("%p",(void*)j);
}

int main(){
    int i = 7;
    check_add(i);
    return 0 ;
}