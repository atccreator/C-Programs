/*
Take n as input form user and write a program which works as follows:
a.	If n is odd: evaluates and prints factorial value of n.
b.	If n is even: evaluates and prints sum of all the whole number.
*/ 
#include<stdio.h>
int main(){
    int num;
    int sum = 0;
    int fact = 1;
    printf("Enter: ");
    scanf("%d", &num);
    
    if(num%2 == 0){
        for(int i = 1; i <= num; i++)
            fact *= i;
        printf("factorial is: %d", fact);
    }
    else{
        for (int i = 0; i <= num; i++)
            sum += i;
        printf("Sum is: %d", sum);
    }
    return 0;
}