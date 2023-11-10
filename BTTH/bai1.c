#include <stdio.h>
int main (){

	int n;
	printf ("nhap vao so nguyen n. (-1018 <= n <= 1018): ");
	scanf ("%d", &n);
	if (n%3==0 && n%5==0){
		printf ("1\n");
	}	else {
		printf ("0\n");
	}
	return 0;
	
}
