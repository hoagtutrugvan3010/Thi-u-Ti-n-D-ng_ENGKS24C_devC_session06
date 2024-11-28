#include <stdio.h>
	int main() {    
		int n, count = 0, current_number = 2, a = 1; 
    		printf("Nhap 1 so nguyen n bat ky: ");
    		scanf("%d", &n);
    	do {
    	if (n < 0) {
         	printf("Khong hop le! Hay nhap lai: ");
          	scanf("%d", &n);
          }
    	} while (n < 0); 
			printf("%d So nguyen to dau tien la: ", n);   
    		while (count < n) { 
        	for (int i = 2; i < current_number; i++) {
            if (current_number % i == 0) {
                a = 0; 
                break;
            }
        }
        	if (a) {
            printf("%d ", current_number);
            count++;
        }
        current_number++;
    }
    return 0;
}
