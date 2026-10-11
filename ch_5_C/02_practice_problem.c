/*Write a function to convert Celsius temperature into Fahrenheit.*/
#include<stdio.h>
float Fahrenheit(float a);

float Fahrenheit(float a){
    float f;
    f=(a * 1.8)+32;
    printf("fahrenheit = %.2f",f);
    return f;
}
int main(){
    float a;
    printf("enter temprature in celsius:");
    scanf("%f", &a); 
    Fahrenheit(a);
    return 0;
}