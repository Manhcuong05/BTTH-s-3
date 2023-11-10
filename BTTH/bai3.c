#include <stdio.h>
int main (){
	int t,n;
	printf ("in ra so ngay cua thang\n");
	printf ("nhap vao thang: ");
	scanf ("%d", &t);
	printf ("nhap vao nam: ");
	scanf ("%d", &n);
	
    if (t <= 0 || t > 12 || n <= 0) {
		printf (" INVALID\n");
    }else {
    	int SoNgay;
    	switch (t) {
    		case 2 :
    			if (n % 400 == 0 || (n% 4 == 0 && n % 100 != 0)) {
			      SoNgay= 29;
			    } else {
			    	SoNgay= 28;
				}
				break;
			case 4:
				SoNgay= 30;
			case 6:
				SoNgay= 30;
			case 9:
				SoNgay= 30;	
			case 11:	
				SoNgay= 30;	
			break;
		default:
		        SoNgay= 31;
		    break;
		    }
		
        printf ("so ngay trong thang %d", SoNgay);
}
		
	return 0;		
    		
		
    	
	
		
	}
