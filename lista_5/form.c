#include<stdio.h>
#include<math.h>

int form(int n) {
    int total = 0;
    for(int i = 1; i <= n; i++) {
    total = total + i * i;
    }
    return total;
}

int main() {
    int n;
    printf("Insira um numero:\n ");
    scanf("%i", &n);
    printf("%i", form(n));
    return 0;
}
