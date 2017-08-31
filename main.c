#include <stdio.h>
main() {
	int result = plus(10000000,800000000);
	printf("%i", result);
	return 0;
}
//cong hai so voi tham so au vao là a, b là hai so nguyen
int plus(int a, int b){
	int c = a + b;
	return c;
}
