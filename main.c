#include <stdio.h>
main() {
	printf("%i \n", plus(132,145));
	printf("%i \n", minus(32,465));
	printf("%i \n", multiply(142,365));
	printf("%i \n", devide(465,125));
	return 0;
}
//cong hai so voi tham so au vao l� a, b l� hai so nguyen
int plus(int a, int b){
	return a+b;
}
int minus(int a,int b){
	return a-b;
}
int multiply(int a,int b){
	return a*b;
}
int devide(int a,int b){
	return a/b;
}

