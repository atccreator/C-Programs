//print prime number till given value.
#include<stdio.h>
int main(){
    int num;
    printf("Enter: ");
    scanf("%d", &num);
    for(int k = 2; k<=num; k++){
        int flag = 0;
        for(int i = 2; i<k; i++){
            if (k%i == 0){
                flag = 1;
                break;
            }
        }
        if(!flag)
        printf("%d \t,", k);
    }
    return 0;
}