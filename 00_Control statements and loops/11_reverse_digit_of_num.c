// reverse digit in number 1234 --> 4321 
#include<stdio.h>
int main(){
    int num;
    int digit;
    int rev = 0; 
    printf("Enter: ");
    scanf("%d", &num);
    while(num>0){
        digit = num%10;
        rev = rev * 10 + digit;
        num = num / 10; 
    }
    printf("reverse number: %d", rev);
    return 0;
}