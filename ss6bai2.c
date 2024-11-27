#include<stdio.h>
		int main(){
			
			//tao bien va nhap 5 so nguyen
			int a,b,c,d,e;
			int chan=0, le=0;
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
			//dem so luong  so chan va so le trong cac  so da nhap va in ket qua
			if (a%2==0){
				chan=chan+1;
			}else{ le=le+1;}
			if (b%2==0){
				chan=chan+1;
			}else{ le=le+1;}
			if (c%2==0){
				chan=chan+1;
			}else{ le=le+1;}
			if (d%2==0){
				chan=chan+1;
			}else{ le=le+1;}
			if (e%2==0){
				chan=chan+1;
			}else{ le=le+1;}
			
			printf("so luong so chan la %d\n so luong so le la %d\n",chan,le);
			
			
			return 0;
			
		}
		
