#include<stdio.h>
#include<math.h>

int main(){
    int d,h,m,s,t;

    printf("请输入经过的时间");
    scanf("%d",&t);
    d = t/(24*3600);
    t = t%(24*3600);
    h = t/3600;
    t = t%3600;
    m = t/60;
    s = t%60;

    printf("经过了%d天，现在的时间是 %d:%02d:%02d",d,h,m,s);
    return 0;
}