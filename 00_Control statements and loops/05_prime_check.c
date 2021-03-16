// Prpgram to check wither the given number is prime or not.
#include<stdio.h>
int main(){
    int num; 
    int flag = 0;
    printf("Enter Number: ");
    scanf("%d", &num);
    for (int i = 2; i < num; i++ ){
        if (num % i == 0){
        flag = 1;
        break;
        }
    }
    if (flag)
    printf("Not Prime Number");
    else
    printf("Prime Number");
    return 0;
}