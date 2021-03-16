// Sum of even Number 
#include<stdio.h>
int main(){
    int num;
    int sum = 0;
    printf("Enter: ");
    scanf("%d", &num);
    for (int i = 1; i<=num; i++){
        if (i%2 == 0)
        sum += i;
    }
    printf("%d", sum);
}