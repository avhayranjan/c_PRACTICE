#include <stdio.h>
int square(int n );

int square(int n ){
    int sqr = n*n ; 
    printf("square of the number is %d", sqr );
    return sqr ;
}
int main(){
    square(4);
}