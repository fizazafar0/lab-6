#include<stdio.h>
int main(){
    int present=0, absent=0, status, total_std=15;
    for(int i = 1; i<= total_std; i++){
        printf("student %d: ", i);
        scanf("%d", &status);
        if(status == 1){
            present++;
        }
        else{
            absent++;
        }
    }
    printf("\ntotal present students = %d\n", present);
    printf("total absent students = %d", absent);
    return 0;
}