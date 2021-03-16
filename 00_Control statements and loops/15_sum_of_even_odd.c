#include<stdio.h>
int main(){
    int num;
    int even_sum = 0;
    int odd_sum = 0;
    printf("Enter Number: ");
    scanf("%d", &num);
    while(num>0){
        int digit = num%10;
        if(digit%2==0){
            even_sum += digit;
        }
        else{
            odd_sum += digit;
        }
        num = num/10;
    }
    printf("Even digit Sum is: %d and Odd digit sum is: %d",even_sum, odd_sum);
    return 0;
}