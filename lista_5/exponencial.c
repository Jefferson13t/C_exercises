#include<stdio.h>
#include<math.h>

int expo(int k, int n) {
    int total = k;
    for(int i = 1; i < n; i++){
    total = total * k;
    }
    return total;
}
int main() {
    int k, n;
    printf("Insira a base e o expoente:\n ");
    scanf("%i%i", &k, &n);
    printf("%i", expo(k,n));
    return 0;
}