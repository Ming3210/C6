#include <stdio.h> 
int main() {
  int sum ;
  printf("Nhap vao cac so nguyen:");
  int number;
  while(number != 0) {
    scanf("%d", &number);
    if (number % 2 != 0) {
      sum += number;
    }
  }
  printf("\nTong cac so le vua nhap la: %d\n",sum);
}