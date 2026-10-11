#include <stdio.h>

int main(){
    char operator ; 
    printf("choose operator (+,-,/,*) : ");
    scanf("%c", &operator);
    float a , b , ans ; 
    printf("enter first no. " );
    scanf("%f", &a);
    printf("enter second no. ");
    scanf("%f", &b ); 
    if(operator == '+'){
        ans= a+b; 
        printf("here is your answer %2.f", ans);
    }
    else if(operator== '-'){
        ans= a-b;
        printf("here is your answer %2.f", ans);
    }
    else if(operator == '/'){
        ans= a/b;
        printf("here is your answer %2.f", ans);
        
    }
    else if(operator=='*'){
        ans = a*b;
        printf("here is your answer %2.f", ans);
    }
    else{
        printf("invalid input !!!");
    }
    return 0;
}