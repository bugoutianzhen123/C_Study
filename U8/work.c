#include<stdio.h>
#include<conio.h>
#include<string.h>

#define N 20    //�޶��ַ�����
//#define RAD 16  //����

void beep();
void GetStr(char s[],int rad);//���ݽ��ƻ�ȡ����
void GetNumberStr(char s[],int rad);
void GetStrNumAl(char s[],int rad);
void SubNumberStr(char a[],char b[],char c[]);
char SubChar(char ch1,char ch2);
void LeftTrim(char str[]);

int tag = 0; //�Ƿ��λ
int RAD;
int main()
{
    char a[N+1]={0},b[N+1]={0},c[N+2];
    int i,n;

    
    printf("����Ľ�����(����1,С��37):");
    scanf("%d",&RAD);

    if(RAD > 1 && RAD <37){//���Ƴ���ʱ��ֹ����
    }else{
        printf("���Ƴ���");
        return 0;
    }
    printf("�����벻����%dλ��%d������\n",N,RAD);
    printf("a=");
    while(strlen(a)==0) GetStr(a,RAD);
    printf("\nb=");
    while(strlen(b)==0) GetStr(b,RAD);

if (strlen(a) == strlen(b)) {
    if (strcmp(a,b) >0){
        n=1;
    }else if(strcmp(a,b) < 0){
        n=-1;
    }else{
        n=0;
    }
    }else if(strlen(a) > strlen(b)){
        n=1;
    }else{
        n=-1;
    }

if (n > 0){
   SubNumberStr(a,b,c);
   printf("\na - b= %s \n",c);
    return 0;
}else if(n < 0 ){
    SubNumberStr(b,a,c);
    printf("\na - b= -%s \n",c);
    return 0;
}else if(n == 0 ) {
     printf("\na - b= %c \n",'0');
     return 0;
}
    return 0;
}

void beep(){
    printf("\07");
}

void GetStr(char s[],int rad){
        int r;
    if (rad>2 && rad <=10){
        r = 1;
    }else if(rad < 10 && rad < 36){
        r = 2;
    }

    if (r == 1){
        GetNumberStr(s,rad);//
    }else{
        GetStrNumAl(s,rad);//11���Ƽ�����
    }
}

//����С�ڵ���10
void GetNumberStr(char s[],int rad){
    int i = 0;


    char ch;
    while(1){
        ch = getch();//������
        if (ch == '\r') break;

        if (ch == '\b'){
            if (i>0){
                printf("%c %c",ch,ch);
                i--;
            } else beep();

            continue;
        }

        if(ch < '0'|| ch > ('0'+rad-1)){
            beep();
            continue;
        }

        if (i<N){
            printf("%c",ch);
            s[i++]=ch;
        }else beep();
    }
    s[i]='\0';
}

//���Ƴ���10
void GetStrNumAl(char s[],int rad){
    int i = 0;
    char ch;
    while(1){
        ch = getch();//������
        if (ch == '\r') break;

        if (ch == '\b'){
            if (i>0){
                printf("%c %c",ch,ch);
                i--;
            } else beep();

            continue;
        }

        if(ch < '0'|| (ch >'9'&& ch <'A') || (ch > 'A'+rad-11 && ch <'a') || ch > 'a'+rad-11){
            beep();
            continue;
        }

        if (i<N){
            printf("%c",ch);
                if (ch >= 'a' && ch <= 'z'){
            ch = ch - ('a'- '9');
            }
            if (ch >= 'A' && ch <= 'Z'){
            ch = ch - ('A'- '9');
             }
            s[i++]=ch;
        }else beep();
    }
    s[i]='\0';
}

void SubNumberStr(char a[],char b[],char c[]){
    int i,j,k;

    memset(c,' ',N+2);

    i = strlen(a)-1;
    j = strlen(b)-1;
    k = N;
    while(i>=0 && j>=0) c[k--] = SubChar(a[i--],b[j--]);

    while(i>=0) c[k--] = SubChar(a[i--],'0');

    c[N+1]='\0';
    LeftTrim(c);
}

char SubChar(char ch1,char ch2){
    char ch;

    ch = (ch1-'0'-tag)-(ch2-'0');
    if (ch < 0){
        tag = 1;
        return (ch+'0'+RAD);
    }else{
        tag = 0;
        return (ch + '0');
    }
}

//����ո��0
void LeftTrim(char str[]){
    int i;

    for(i=0;str[i]==' ' || str[i]=='0';i++);

    strcpy(str,str+i);
    for (i=0;i< strlen(str);i++){
        if (str[i]>'9'){
            str[i]= str[i]+'A'-'9'+1;
        }
    }
}