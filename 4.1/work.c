#include<STDIO.H>
#include<string.h>

int main(){
	char c,ch[128]={0};
    int a[128]={0},i=0,j=0;
	memset(ch,0,128*sizeof(char));
	memset(a,0,128*sizeof(int));

	while ((c = getchar()) != EOF){
		ch[i]=c;
		i++;
	    a[c]++;
	}

	for (i=0;i<128;i++){
		if (ch[i] >= 'a' && ch[i] <= 'z'){
			ch[i] = ch[i] + ('A' - 'a');
		}
		printf("%c",ch[i]);
		if (ch[i]==0){
			break;
		}
	}
    
	printf("\n");
	for (i=0;i<128;i++){
        
        printf("%cµÄÊýÁ¿%-3d ",i,a[i]);
		j++;
		if (j == 6){
		   printf("\n");
		   j=0;
		}
	}

    return 0;
}