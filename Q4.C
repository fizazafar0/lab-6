#include<stdio.h>
int main(){
    int num, digit, reversed = 0, original;
    printf("enter library book code: ");
    scanf("%d", &num);
    original = num;
    while(num >0){
        digit= num%10;
        reversed=reversed*10+digit;
        num=num/10;
    }
    if(original== reversed){
        printf("%d is palindrome", original);
    }
    else {
        printf("%d id not palindrome\n", original);
    }
    return 0;
}