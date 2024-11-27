#include<stdio.h>
		int main(){
			//tao bien de nhap tien,lai suat,thang gui
			int tien,thang_gui,tong_tien;
			double lai_suat,tien_lai;
			printf("moi ban nhap so tien: ");
			scanf("%d",&tien);
			printf("moi ban nhap so lai suat: ");
			scanf("%lf",&lai_suat);
			printf("moi ban nhap so thang gui: ");
			scanf("%d",&thang_gui);
			//tien lai = tien * lai suat,tien lai = tien lai - tien,tong = tien * lai suat * thang gui
			lai_suat=lai_suat/100;
			tien_lai=tien*lai_suat;
			
			tong_tien=(tien+tien_lai)*thang_gui;
			printf("tien lai sau %d thang la : %.2lf\ntong tien co dc sau %d thang la : %d",thang_gui,tien_lai,thang_gui,tong_tien);
			
			
			return 0;
	}
	
	
	
	
