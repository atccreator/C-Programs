//swap value of two variable without using thired variable;
#include<stdio.h>
int main(){
    int a, b;
    a = 3;
    b = 7; 
    // perform swaping 
    a = a + b;
    b = a - b; 
    a = a - b;
    printf("value of a is %d and value of b is %d", a,b);
    return 0;
}