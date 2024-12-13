//
// Created by lenovo on 24-10-12.
//可以使用%02d用于在 printf 函数中输出一个至少两位的十进制整数如果数字不足两位，则前面补零。例如：
// 1
// 会被输出为
// 01
// 12
// 会被输出为
// 12
#include <stdio.h>
int main() {
    int h1,m1;
    scanf("%d:%d",&h1,&m1);
    if (m1<=9) {
        if (10<=h1&&h1<=11) {
            printf("%d:0%d a.m.",h1,m1);
        }
        else if(h1==12) {
            printf("%d:0%d p.m.",h1,m1);
        }
        else if(h1<=9) {
            printf("0%d:0%d a.m.",h1,m1);
        }
        else if(13<=h1&&h1<=21){
            printf("0%d:0%d p.m.",h1-12,m1);
        }
        else{
            printf("%d:0%d p.m.",h1-12,m1);
        }
    }
    else {
        if (10<=h1&&h1<=11) {
            printf("%d:%d a.m.",h1,m1);
        }
        else if(h1==12) {
            printf("%d:%d p.m.",h1,m1);
        }
        else if(h1<=9) {
            printf("0%d:%d a.m.",h1,m1);
        }
        else if(13<=h1&&h1<=21){
            printf("0%d:%d p.m.",h1-12,m1);
        }
        else{
            printf("%d:%d p.m.",h1-12,m1);
        }
    }


    return 0;
}