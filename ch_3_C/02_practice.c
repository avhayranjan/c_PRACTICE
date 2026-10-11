#include <stdio.h>

int main(){
    float a;
    printf("enter your income");
    scanf("%f", &a);
    if(a<250000){
        printf("no payable tax");
    }
    else if(a<500000 && a>250000){

        printf("%2.f", a*5/100,"total payale tax");
    }
    else if(a>5 && a<10){
        printf("%2.f",a*20/100,"total payale tax");
    }
    else{
        printf("%2.f",a*30/100,"total payale tax");
    }

    return 0;
}