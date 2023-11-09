#include<stdio.h>
main(){
	float html, css, javascipt;
	printf("Nhap vao diem html,css,javascipt: ");
	scanf("%f %f %f",&html, &css, &javascipt);
	float avg = (html + css + javascipt)/3;
	if(avg<5){
		printf("Xep loai sinh vien:Yeu");
	}else if(avg<7){
		printf("Xep loai sinh vien:Trung binh");
	}else if(avg<8){
		printf("Xep loai sinh vien:Kha");
	}else if(avg<9){
		printf("Xep loai sinh vien:Gioi");
	}else{
		printf("Xep loai sinh vien:Xuat sac");
	}	
}
