#include <stdio.h>
main() {
	printf("%i \n", plus(132,145));
	printf("%i", minus(185,465));
	return 0;
}
//cong hai so voi tham so au vao l� a, b l� hai so nguyen
int plus(int a, int b){
	return a+b;
}
int minus(int a,int b){
	return a-b;
}
