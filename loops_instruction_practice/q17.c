#include<stdio.h>
int main(){
    int n , prime=1 , i =0; 
    printf("enter number:");
    scanf("%d", &n);
    while(i<=n){
        i++;
        if(i%n==0){
           prime=0;
        }
        
        
     }
    if(prime=1){
            printf("%d id prime", i);
        }   
}