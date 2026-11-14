#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    char b[100];
    printf("enter value :");
    fgets(a,sizeof(a),stdin);
    printf("your string is:");
    puts(a);
    strcpy(b,a);
    printf("b is equal to :");
    puts(b);
    return 0;

}