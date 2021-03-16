/*
A
BC
CDE
DEFG
*/
#include<stdio.h>>
int main(){
    int n;
    printf("Enter: ");
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++){
        int val = i;
        for(int j=1; j<=i; j++){
            printf("%c", 65+val-1);
            val++;
        }
        printf("\n");
    }
    return 0;
}