#include <stdio.h>

int main() {
    int number,uoc;

    //tao bien va cho ng dung nhap vao 1 so nguyen bat ki
    		printf("nhap 1 so nguyen: ");
   			scanf("%d", &number);
	//in ra tat ca uoc  cua so da nhap
   			
   		for (uoc = 1; uoc <= number; uoc++) {
        if (number % uoc == 0) {
            printf("%d ", uoc);
        }
    }

    			
    			return 0;
}
