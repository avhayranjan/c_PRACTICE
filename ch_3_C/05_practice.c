#include <stdio.h>

int main(){
    float a,b,c,d;
    printf("enter the your value 1\n");
    scanf(" %f", &a );
    printf("enter the your value 2\n");
    scanf(" %f", &b );
    printf("enter the your value 3\n");
    scanf(" %f", &c );
    printf("enter the your value 4\n");
    scanf(" %f", &d );
    if(a>b && a>c && a>d){
        printf("first value is greatest");
    }
    else if(b>a && b>c && b>d){
        printf("second is greatest");
    }
    else if(c>a && c>b && c>d){
        printf("third value is greatest ");
    }
    else if(d>a && d>b && d>c){
        printf("fourth value is greatest");
    }
    

    return 0;

}