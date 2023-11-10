#include <stdio.h>
int main() {
    int n;
    int sum = 0;
	printf("Nhap vao gia tri cua n: ");
    scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
    sum = sum + i * i;
    }
	printf("Tong cua day S la: %d\n", sum);

    return 0;
}
