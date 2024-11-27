#include<stdio.h>
		int main(){
			
			//tao bien va nhap 5 so nguyen
			int a,b,c,d,e,a1,b1,c1,d1,e1;
			int total;
			printf("nhap 1 so nguyen : ");
			scanf("%d",&a);
			printf("nhap 1 so nguyen : ");
			scanf("%d",&b);
			printf("nhap 1 so nguyen : ");
			scanf("%d",&c);
			printf("nhap 1 so nguyen : ");
			scanf("%d",&d);
			printf("nhap 1 so nguyen : ");
			scanf("%d",&e);
			//tinh tong cac so le trong cac so da nhap va in kqua ra man hinh
			if (a%2==0){
				a1=0;
			}else{ a1=a;}
			if (b%2==0){
				b1=0;
			}else{ b1=b;}
			if (c%2==0){
				c1=0;
			}else{ c1=c;}
			if (d%2==0){
				d1=0;
			}else{ d1=d;}
			if (e%2==0){
				e1=0;
			}else{ e1=e;}
				total = a1+b1+c1+d1+e1;
			printf("tong cua cac so le la : %d", total);
			
			return 0;
	}
