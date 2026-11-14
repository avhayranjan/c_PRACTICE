#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    int i,len,vowel=0,consonant=0;
    printf("Enter a poem:");
    fgets(a,sizeof(a),stdin);
    printf("your poem is :");
    puts(a);
    len=strlen(a);
    for(i=0 ; i<len ; i++){
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
            vowel++;
        }
        else if( a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'){
            vowel++;
        }
        else if(a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z'){
            consonant++;
        }
    }
    printf("no. of vowel is %d\n",vowel);
    printf("no. of consonant is %d\n",consonant);
    return 0 ;
}