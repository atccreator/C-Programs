//Sum of N natural number 
// Write efficent algo n*(n+1)/2
#include<stdio.h>
int main(){
    int num;
    int sum = 0;
    printf("Enter: ");
    scanf("%d", &num);
    for(int i = 1; i<=num; i++){
       sum += i; 
    }
    printf("%d", sum);
    return 0;
}