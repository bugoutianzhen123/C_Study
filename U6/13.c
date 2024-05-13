#include<stdio.h>
#define n1 5
#define n2 5
#define n3 5

void put_(int n){
    int i;
    for(i=0;i<n;i++){
        printf("  ");
    }
}

void putxx(int n){
    int i;
    for(i=0;i<n;i++){
        printf("* ");
    }
}

void shape1(){
    int i;
    printf("shape1:\n");
    for(i=0;i<(n1+1)/2;i++){
        put_(i);
        putxx(n1-2*i);
        put_(i);
        puts("");
    }
    for(i=n1/2-1;i>=0;i--){
        put_(i);
        putxx(n1-2*i);
        put_(i);
        puts("");
    }
    puts("");
}

void shape2(){
    int i;
    printf("shape2:\n");
    for(i=1;i<n2;i++){
        putxx(2*i-1);
        puts("");
    }
    puts("");
}

void shape3(){
    int i;
    printf("shape3:\n");
    for(i=1;i<=n3;i++){
        put_(n3-i);
        putxx(n3);
        puts("");
    }
    puts("");
}

int main(){
    shape1();
    shape2();
    shape3();

    return 0;
}