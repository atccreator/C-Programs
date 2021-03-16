// Sum of digit of the numbeer.
#include<stdio.h>
int main(){
    int num;
    int sum = 0;
    printf("Enter: ");
    scanf("%d", &num);
    while(num>0){
        int digit = num%10;
        sum += digit;
        num = num/10;
    }
    printf("Sum is: %d", sum);
    return 0;
}
