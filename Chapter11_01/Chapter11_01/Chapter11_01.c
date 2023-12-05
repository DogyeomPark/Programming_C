#include <stdio.h>

int main()
{
	char str[50];
	int idx = 0;

	printf("문자열을 입력해주세요");
	scanf_s("%s", str, 50);
	printf("입력 받은 문자열: %s \n", str);

	printf("문자 단위 출력:");
	while (str[idx] != '\0')
	{
		printf("%c\t", str[idx]);
		idx++;
	}
	printf("\n");
	return 0;
}