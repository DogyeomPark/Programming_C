#include <stdio.h>

int main()
{
	char str1[] = "My String";
	char* str2 = "Your String";
	printf("%s\n%s\n", str1, str2);

	str2 = "Our String";
	printf("%s\n%s\n", str1, str2);

	str1[0] = 'X';
	/*str2[0] = 'X';*/
	printf("%s\n%s\n", str1, str2);

	int num1 = 10;
	int num2 = 20;
	int num3 = 30;

	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* ptr3 = &num3;

	int* arr[3];
	return 0;
}