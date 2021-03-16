// Count Number of digits in given Number.
// To count bigger number digit convert int to long long int.
#include<stdio.h>
int main(){
    int num;
    int count = 0;
    printf("Enter: ");
    scanf("%d", &num);
    while(num>0){
        num = num/10;
        count++;
    }
    printf("No of digit is: %d",count);
    return 0;
}