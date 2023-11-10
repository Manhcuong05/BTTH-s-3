#include <stdio.h>
int main (){
	int n;
	printf ("kiem tra nam nhuan\n");
	printf ("mhap nam can kiem tra: ");
	scanf ("%d",&n);
	if (n<=0){
		printf ("INVALID\n");
	} else if (n % 400 == 0 || (n% 4 == 0 && n % 100 != 0)){
		printf ("YES\n");
	} else {
		printf ("NO\n");
	}
	return 0;
	
}
