#include <stdio.h>
main(){
	int number;
	printf("Nhap so: ");
	scanf("%d",&number);
	if(number%3==0&&number%5==0){
		printf("%d chia het ca 3 va 5",number);
	}else{
		printf("%d khong chia het ca 3 va 5",number);
	}
}
