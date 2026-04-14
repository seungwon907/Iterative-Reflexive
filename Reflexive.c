#include <stdio.h>
#include <time.h>

/
long long fib_recursive(int n) {
    if (n <= 2) return 1;
    return fib_recursive(n - 1) + fib_recursive(n - 2);
}


int main() {
    int n = 10;
    printf("F(%d) 계산 결과\n", n);
    printf("재귀적 방법: %lld\n", fib_recursive(n));

    return 0;
}
