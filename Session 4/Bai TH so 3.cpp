#include <stdio.h>
main(){
	int number1, number2;
	char clculation;
	printf("Nhap 2 so nguyen: ");
	scanf("%d%d",&number1,&number2);
	fflush(stdin);
	printf("Nhap phep tinh: ");
	scanf("%c",clculation);
	switch(clculation){
		case'+':
			printf("Tong cua %d v� %d l�:%d",number1,number2,number1+number2);
			break;
		case'-':
			printf("Hieu cua %d v� %d l�:%d",number1,number2,number1-number2);
			break;
		case'*':
			printf("Tich cua %d v� %d l�:%d",number1,number2,number1*number2);
			break;
		case'%':
			printf("Du cua %d v� %d l�:%d",number1,number2,number1%number2);
			break;   
	}
}
