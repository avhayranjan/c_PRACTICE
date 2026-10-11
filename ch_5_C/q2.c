#include <stdio.h>

 int add(int a , int b);

  int add(int a , int b){
    int sum = a + b;
    printf("Sum = %d", sum);
    return sum ;
  }
  int main(){
    
    add(7 , 9);
  }