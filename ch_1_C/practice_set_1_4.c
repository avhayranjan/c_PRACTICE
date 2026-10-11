#include <stdio.h>

int main(){
    /*Write a program to calculate simple interest for a set of values representing principal,
number of years, and rate of interest.*/
    float p = 4;
    float r = 9;
    float t = 3;
    printf("p is %f\n r is %f\n t is %f\n then si is %.2f ", p , r , t ,p*r*t/100);
    return 0 ;
}
