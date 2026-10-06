#include<stdio.h>
int main(){
    int num, digit;
    int evencount=0, oddcount=0;
    printf("enter meter reading: ");
    scanf("%d", &num);
    if(num==0){
        evencount = 1;
    }
    while(num > 0){
        digit=num%10;
        if(digit%2==0){
            evencount++;
        }else{
            oddcount++;
        }
        num=num/10;
    }
    printf("even digits = %d\n", evencount);
    printf("odd digits = %d\n", oddcount);
    return 0;
}