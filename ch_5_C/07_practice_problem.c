/*Write a program using function to print the following pattern (first 
n
 lines):
 *
 **
 ***
 */
 #include<stdio.h>

 int pattern(int n);

 int pattern(int n){
    for(int i = 1 ; i<= n ; i++){
        for(int j =1 ; j<=i ; j++){
            printf("*");
        }
        printf("\n");
    }
   
 }
 int main(){
    int n ; 
    printf("enter no. of lines");
    scanf("%d", &n);
    pattern(n);
    return 0 ; 
 }