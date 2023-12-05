#include <stdio.h>

int main()
{
	int num1 = 100, num2 = 100;
	int* pnum;

	pnum = &num1; //num1의 주솟값을 때려박는것
	(*pnum) += 30; //num1 +=30; 과 동일

	pnum = &num2;
	(*pnum) -= 30;

	printf("num1:%d\nnum2:%d", num1, num2);
	return 0;
}