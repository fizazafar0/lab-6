#include<stdio.h>
int main(){
    int num, reversed=0, digit;
    printf("enter num: ");
    scanf("%d", &num);
    while(num>0){
        digit=num%10;
        reversed=reversed*10+digit;
        num=num/10;
    }
    printf("reversed ticket number is=%d", reversed);
    return 0;
}