#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    char b[100];
    printf("enter 1 first string:");
    fgets(a,sizeof(a),stdin);
    printf("enter 2 second string :");
    fgets(b,sizeof(b),stdin);
    strcat(b,a);
    printf("combined string: %s",a);
    return 0;

}