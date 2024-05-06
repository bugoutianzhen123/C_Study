#include<stdio.h>

//   x
//C 
//   y
int erxiang(int x, int y){
    int result = 1;
    result = jiecheng(y)/jiecheng(y-x);
    return result;
}

int jiecheng(int x){
    int result = 1;
    if (x <= 0) return 1;
    while (x == 1){
        result*=x;
        x--;
    }
    return result;
}