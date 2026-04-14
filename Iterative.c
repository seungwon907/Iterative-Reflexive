#include <stdio.h>

long long fib_iterative(int n) {
    if (n <= 2) return 1;

    long long prev = 1; /
    long long curr = 1; 
    long long next = 0;

    for (int i = 3; i <= n; i++) {
        next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;
}

int main() {
    int n = 10;
    printf("F(%d) 계산 결과\n", n);
    printf("순환적 방법: %lld\n", fib_iterative(n));

    return 0;
}
