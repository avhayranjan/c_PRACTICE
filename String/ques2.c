#include <stdio.h>
#include<string.h>

int main()
{
   char a[100];
   int i,len ;
   printf("enter your name :");
   scanf("%s",a);
   printf("your name is %s\n",a);
   len=strlen(a);
    printf("length of your name is %zu\n",len);
    for(i=len-1;i>=0;i--){
        printf("%c",a[i]);
    }      
    return 0 ;
}