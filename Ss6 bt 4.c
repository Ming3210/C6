#include <stdio.h>
#include <stdlib.h>
int main(){
	int choice,n,sum;
	int count = 0;
	printf("So nguyen n:");
	scanf("%d",&n);
	do{
		printf("PRACTICE\n");
		printf("1.In day so chia het cho 2 va giam dan\n");
		printf("2.In cac so nho hon n va tinh tong\n");
		printf("3.In ra cac uoc chan cua n\n");
		printf("4.In ra cac uoc so le va so luong cac buoc le cua n\n");
		printf("5.In ra uoc so le lon nhat cua n\n");
		printf("6.Thoat\n");
		printf("Lua chon cua ban:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				for(int i = n;i>=1;i--){
				if(i%2==0){
					printf("%d\n",i);
				}
			}
			break;
			case 2:
				for(int i = 0;i<n;i++){
					printf("%d\n",i);
				sum +=i;}
				printf("%d\n",sum);
			break;
			case 3:
				for(int i=1;i<=n;i++){
					if(n%i==0 && i%2==0){
						printf("%d\n",i);
					}
				}
			break;
			case 4:
				for(int i=1;i<=n;i++){
					if(n%i==0 && i%2!=0){
						count = count+1;
						printf("%d\n",i);
					}
				}
				printf("So luong uoc le:%d\n",count);
			break;
			case 5:
				for(int i=n;i>=1;i--){
					if(n%i==0 && i%2!=0){
						printf("%d\n",i);
						break;
					}
				}
			break;
			case 6:
				exit(0);
			default:
				printf("Nhap so tu 1 den 6");
		}
	}while("Nhap so tu 1-6\n");
}