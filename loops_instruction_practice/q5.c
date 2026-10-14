#include<stdio.h>

int main(){
    /*for print table number given by user*/
    int n;
    int table;
    printf("enter no. for table:");
    scanf("%d", &n);
    for(int i =1 ; i<=10 ; i++){
        table=n*i;
        printf("%d X %d = %d\n ", n , i , table);
    }
    return 0;
}