#include <stdio.h>
#include <stdlib.h>
int main(){
	int number1,number2;
	printf("Nhap 2 so bat ki:");
	scanf("%d %d",&number1, &number2);
	do{
		int step,result,theGreatestCommon;
		int sum = number1 + number2;
		int difference=number1-number2;
		int product=number1*number2;
		float quotient=number1/number2;
		int surplus = number1 % number2;
		printf("1.Tinh tong\n");
		printf("2.Tinh hieu\n");
		printf("3.Tinh tich\n");
		printf("4.Tinh thuong\n");
		printf("5.Tinh so du trong phep chia\n");
		printf("6.Tinh uoc chung lon nhat\n");
		printf("7.Tinh boi chung nho nhat\n");
		printf("8.Thoat\n");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Tong 2 so:%d\n",sum);
				break;
			case 2:
				printf("Hieu 2 so:%d\n",difference);
				break;
			case 3:
				printf("Tich 2 so:%d\n",product);
				break;
			case 4:
				printf("Thuong 2 so:%.2f\n",quotient);
				break;
			case 5:
				printf("So du:%d\n",surplus);
				break;
			case 6:
				while(number2!=0){
					theGreatestCommon = number1 % number2;
					number1 = number2;
					number2 = theGreatestCommon;
					printf("UCLN:%d\n",theGreatestCommon);
					break;
				printf("Nhap 2 so bat ki");
				scanf("%d %d",&number1,number2);;
				}
				break;
			case 7:
				if(number1>number2){
					step=number1;
				}else{
					step=number2;
				}
				for(int theLeastCommon=step;theLeastCommon<=number1*number2 ;theLeastCommon+= step){
					if(theLeastCommon%number1==0 && theLeastCommon%number2==0);
					result=theLeastCommon;
					printf("BCNN:%d\n",result);
					break;
				}
				break;
			case 8:
				printf("Nhap 2 so bat ki");
				scanf("%d %d",&number1,number2);
				exit(8);
			default:
				printf("Nhap so tu 1-8");
}
}while ("Nhap so tu 1-7");
}
		                        