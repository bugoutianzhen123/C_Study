#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main(){
    char *str,i,j;
    scanf("%s",str);
    j=strlen(str);
    for (i=0;i<strlen(str)/2;i++){
        if(str[i] != str[j-1-i]) {
            printf("no");
            exit(0);}
    }
    printf("yse");

    return 0;
}