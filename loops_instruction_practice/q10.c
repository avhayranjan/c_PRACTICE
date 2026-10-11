#include<stdio.h>

int main(){
    /*pattern printing 2 pyramid */
    int i , space , stars ;
    for(i =1 ; i<=5 ; i++){
        for(space = 0 ; space<5-i; space++)
        {
          printf(" ");
        }
          for(stars =1 ; stars <= 2*i-1; stars ++){
            printf("*");
          }  
          printf("\n");
        
    }
}