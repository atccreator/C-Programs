// check given number is positive, negative or zero;
#include<stdio.h>
int main(){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    if (num >= 1){
        printf("Num is Positive");
    }
    else if (num <= -1){
        printf("Num is negative");
    }
    else{
        printf("Num is 0");
    }
    return 0;
}