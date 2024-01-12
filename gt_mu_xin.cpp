#include <stdio.h>
#define max 500000

//void gt(int a[], long n, long *m){
//	*m = 1; 
//	a[0] = 1;
//	long i, j;
//	unsigned long long tich, r = 0, k;
//	for(i = 1; i <= n; i++){
//		for(j = 0; j < *m; j++){
//			tich = a[j] * i + r;
//			a[j] = tich % 10;
//			r = tich / 10;			
//		}
//		while(r > 0){
//				a[*m] = r % 10;
//				*m = *m + 1;
//				r = r / 10;
//		}
//		for(long i = 0; i < *m; i++){
//			printf("\na[%ld] = %d", i, a[i]);
//		}
//		printf("\n");
//	}
//}
// này dùng cho đề hỏi giai thừa


void tinh_2_mu_n(int a[], long n, long *m){
	*m = 1; 
	a[0] = 1;
	long i, j;
	unsigned long long tich, r = 0, k;
	if(n > 0){
		for(i = 1; i <= n; i++){
		    for(j = 0; j < *m; j++){
	    		tich = a[j] * 2 + r;
    			a[j] = tich % 10;
    			r = tich / 10;			
    		}
    		while(r > 0){
				a[*m] = r % 10;
				*m = *m + 1;
				r = r / 10;
	    	}
    	}
	}
	if(n < 0){
		for(i = 1; i <= -n; i++){
		    for(j = 0; j < *m; j++){
	    		tich = a[j] * 5 + r;
    			a[j] = tich % 10;
    			r = tich / 10;			
    		}
    		while(r > 0){
				a[*m] = r % 10;
				*m = *m + 1;
				r = r / 10;
	    	}
    	}
	}
}

void in_ra(int a[], long n, long m){
	if(n >= 0){
		for(long i = 0; i < m; i++){
	    	printf("%d", a[m - 1 - i]);
	    }
	}
	else {
		printf("0.");
		for(long i = 0; i < m; i++){
	    	printf("%d", a[m - 1 - i]);
	    }
	}
}

int main(){
	long n, m;
	int a[max];
	printf("nhap n = "); 
	scanf("%ld", &n);
	printf("\n2^%d = ", n); 
	tinh_2_mu_n(a, n, &m);
	in_ra(a, n, m);
}





