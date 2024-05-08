//摄氏温度转华氏温度
#include<stdio.h>

int main(){
    double s,h;
    scanf("%f",&s);
    h = (s+32)*9/5;
    printf("%.2f",h);
    return 0;
}