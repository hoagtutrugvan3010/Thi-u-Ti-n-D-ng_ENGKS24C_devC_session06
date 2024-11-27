#include<stdio.h>
		int main(){
			//tao bien 
			int number;
			//in cac so nguyen tu 1 - 100
			for (number=1;number<=100;number++){
			//doi voi boi so cua 3 in ra fizz,boi so cua 5 in ra buzz,doi voi boi so ca 2 in fizzbuzz
					if (number%3==0 && number%5==0){
						printf("fizzbuzz\n");
						
					}if (number%3==0){
						printf("fizz\n");
						
					}if (number%5==0){
						printf("buzz\n");
						
					}else printf("%d\n",number);
			}
		 return 0;
			
	}
