#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    int len , i ,flag=1;
    printf("enter your string :");
    scanf("%s",a);
    printf("your string is :%s\n",a);
    len=strlen(a);
    for(i=0 ; i<len/2 ;i++){
        if(a[i] != a[len-1-i]){
            flag =0;
            break;
        }
    }
    if(flag==1){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
    return 0;

}