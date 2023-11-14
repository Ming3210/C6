#include <stdio.h>
int main(){
	int number;
	int count=0;
	printf("Nhap so:");
	scanf("%d",&number);
	for(int i=1;i<= number*10;i++){
		if(i%number==0){
			count +=1;
		printf("%d x %d=%d\n",number,count,i);
	}
}
}