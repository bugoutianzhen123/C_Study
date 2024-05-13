#include<stdio.h>
#include<string.h>

int main(){
    char s1[127]={0},s2[127],s;
    int i,j;
    //scanf("%s",s1);
    //getchar();
    scanf("%s",s2);

    for (i=0;i<strlen(s2);i++){
        s = s2[i];
        if ( (s>='0' && s <='9') || (s>='A' && s<='Z') || (s>='a' && s<='z')){
            s1[i]=s;
        }else if(s2[i]=='\\' && s2[i+1]=='0'){
            s1[i]='\0';
            j=i;
            break;
        }
    }
    s1[strlen(s2)] = '\0';

    for (i=0;i<j;i++){
        //if (s1[i]=='\0'){ break;}
       printf("%c",s1[i]);
    }
    //printf("%s",s1);
    
    return 0;
}