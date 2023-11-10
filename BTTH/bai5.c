#include <stdio.h>

void tinh_tong_chan_le(long long n) {
    int tong_chan = 0;
    int tong_le = 0;

    while (n > 0) {
        int chu_so = n % 10;  
        if (chu_so % 2 == 0) {
            tong_chan += chu_so;
        } else {
            tong_le += chu_so;
        }
        n /= 10; 
    }

    printf("T?ng ch? s? ch?n: %d\n", tong_chan);
    printf("T?ng ch? s? l?: %d\n", tong_le);
}

int main() {
    long long n;

    printf("nhap gia tri cua n n: ");
    scanf("%lld", &n);

    tinh_tong_chan_le(n);

    return 0;
}
