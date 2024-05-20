#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *fp = NULL;
    char str[255],*PATH,*Path;
    fp = fopen("path.txt","r");
    fgets(str,100,fp);
    printf("%s\n",str);
    fclose(fp);

    PATH = getenv("PATH");
    Path = getenv("Path");

    printf("PATH:%s\n",PATH);
    printf("Path:%s\n",Path);

    strcat(PATH,str);
    strcat(Path,str);

    printf("PATH:%s\n",PATH);
    printf("Path:%s\n",Path);

    return 0;
}