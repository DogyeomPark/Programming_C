//#include <stdio.h>
//
//void SimpleAdder(int n1, int n2)
//{
//	printf("%d + %d = %d \n", n1, n2, n1 + n2);
//}
//
//void ShowString(char * str)
//{
//	printf("%s \n", str);
//}
//int main()
//{
//	char * str = "Function Pointer";
//	int num1 = 10, num2 = 20;
//
//	void (*fptr1)(int, int) = SimpleAdder;
//	void (*fptr2)(char *) = ShowString;
//
//	//함수 포인터 변수에 의한 호출
//	fptr1(num1, num2);
//	fptr2(str);
//	return 0;
//}

#include <stdio.h>

int WhoIsFirst(int age1, int age2, int (*cmp)(int n1, int n2))
{
	return cmp(age1, age2);
}

int OlderFirst(int age1, int age2)
{
	if (age1 > age2)
		return age1;
	else if (age1 < age2)
		return age2;
	else
		return 0;
}

int YoungerFirst(int age1, int age2)
{
	if (age1 < age2)
		return age1;
	else if (age1 > age2)
		return age2;
	else
		return 0;
}
int main()
{
	int age1 = 20;
	int age2 = 30;
	int first;

	printf("입장순서 1 \n");
	first = WhoIsFirst(age1, age2, OlderFirst);
	printf("%d세와 %d세 중 %d세가 먼저 입장! \n\n", age1, age2, first);

	printf("입장순서 2 \n");
	first = WhoIsFirst(age1, age2, YoungerFirst);
	printf("%d세와 %d세 중 %d세가 먼저 입장! \n\n", age1, age2, first);
	return 0;
}