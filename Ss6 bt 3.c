#include<stdio.h>
#include<stdlib.h>
int main(){
	int num1,num2,num3,sum,avg,choice,max,min;
	printf("Nhap ba so nguyen bat ki:");
	scanf("%d%d%d",&num1,&num2,&num3);
	do{
		printf("CACULATOR\n");
		printf("1.Tinh tong 3 so:\n");
		printf("2.Trung binh cong 3 so:\n");
		printf("3.Tim max,tim min\n");
		printf("4.Thoat\n");
		printf("Lua chon cua ban:");
		scanf("%d",&choice);
		switch (choice){
			case 1:
				sum = num1 + num2 + num3;
				printf("Tong 3 so:%d\n",sum);
				break;
			case 2:
				avg=sum/3;
				printf("Trung binh cong 3 so:%d\n",avg);
				break;
			case 3:
				if(num1>num2 && num1>num3){
					max=num1;
				}else if(num2>num3 && num2>num1){
					max=num2;
				}else{
					max=num3;
				}
				if(num1<num2 && num1<num3){
					min=num1;
				}else if(num2<num1 && num2<num3){
					min=num2;
				}else{
					min=num3;
				}
				printf("Max:%d\n",max);
				printf("Min:%d\n",min);
				break;
				case 4:
					exit(4);
				break;
			default:
				printf("Nhap so tu 1-4");
		}
	}while("Nhap so tu 1-4\n");
}
