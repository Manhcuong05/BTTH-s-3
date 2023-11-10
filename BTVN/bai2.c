#include <stdio.h>
 int main (){
 	int n;
 	printf ("nhap so thuc (0 <= diem <= 10): ");
 	scanf ("%d", &n);
 	if (n >= 9 && n <= 10) {
 		printf ("hoc sinh xuat sac");
	} else if ( n >= 8 && n < 9){
		printf (" hoc sinh gioi");
	} else if ( n >= 6.5 && n < 8) {
		printf ("hoc sinh kha");
	} else if ( n >= 5 && n< 6.5){
		printf ("hoc sinh trung binh");
	} else if ( n >= 0 && n < 5){
		printf ("hoc sinh yeu");
	} else {
		printf ("khong hop le");
	}
	return 0;
}
 
