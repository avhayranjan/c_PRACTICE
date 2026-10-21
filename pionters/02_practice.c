#include <stdio.h>
void check_add(int i);

void check_add(int i){
    int* j= &i;
}

int main(){
    int i = 7;
    printf("%p",check_add);

}