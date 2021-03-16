/*
1
12
123
1234
*/

//Using for loop;
#include<stdio.h>
int main(){
    int n;
    printf("Enetr: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}