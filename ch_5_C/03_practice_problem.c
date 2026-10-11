/*Write a function to calculate force of attraction on a body of mass 
earth. Consider 
g = 9.8m/s² 
*/
#include<stdio.h>

float force(float m);

float force(float m){
    float f;
    f=m*9.8;
    printf("garvitational force on body of mass %f if %.2f", m , f);
    return f;
}
int main(){
    float mass ; 
    printf("enter mass of body :");
    scanf("%f", &mass);
    force(mass);
    return 0;
}
