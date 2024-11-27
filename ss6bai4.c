#include<stdio.h>
		int main(){
			int a,b,c,x,delta,x1,x2;
		printf("nhap 1 so nguyen");
		scanf("%d", &a);
		printf("nhap 1 so nguyen");
		scanf("%d", &b);
		printf("nhap 1 so nguyen");
		scanf("%d", &c);
		
		printf("%dx^2 + %dx + %d = 0\n",a,b,c);
			delta= b*b -4*a*c;
			if (delta>0){
				x1 = (-b + sqrt(delta)) / 2*a;
				x2 = (-b - sqrt(delta)) / 2*a;
				printf("phuong trinh co x1 x2 lan luot la: %d; %d",x1,x2);
			}if (delta==0){
				x = -b / 2*a;
				printf("phuong trinh co x = %d",x);
			}if (delta<0){
				printf("phuong trinh vo nghiem");
			}
				
			
			return 0;
	}
