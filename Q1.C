#include<stdio.h>
int main (){
    int pin, sum=0, digit;
    printf("enter 4-digit PIN: ");
    scanf("%d", &pin);
     while (pin > 0){
    digit=pin%10;
    sum=sum+digit;
    pin=pin/10;
}
printf("sum is %d",sum);
if(sum>10){
    printf("strong PIN");
}
else{
    printf("weak PIN");
}
return 0;
}