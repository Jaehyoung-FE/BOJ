#include<stdio.h>

int main() {
    int a, b;
    int x, y;
    scanf("%d %d", &a, &b);      
    x=b-b%10;
    y=x-x%100;
    printf("%d\n", a*(b%10));
    printf("%d\n", a*(x%100)/10);
    printf("%d\n", a*y/100);
    printf("%d\n", a*b);   
}