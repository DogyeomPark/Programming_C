#include <stdio.h>
#include <string.h>

int main(void)
{
	//char str1[20] = "1234567890";
	//char str2[20];
	//char str3[5];

	///**** case 1 ****/
	//strcpy_s(str2, strlen(str1)+1, str1);
	//puts(str2);

	///**** case 2 ****/
	//strncpy_s(str3, 20, str1, sizeof(str3));
	//puts(str3);

	char str1[] = "My String";
	char str2[] = "My String";

	if (str1 == str2)
		puts("equal");
	else
		puts("not equal");

	printf("\n\n\n");

	printf("%d", strcmp(str1, str2));

	return 0;
}