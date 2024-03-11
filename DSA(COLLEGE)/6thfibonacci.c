//fibonacci using recursion

#include<stdio.h>
int fib(int);
int main() {
    int n ;
    printf("Enter n:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        printf("%d\n", fib(i));
    }
    return 0;
}
int fib(int n) {
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
