//Length finder

#include <stdio.h>

void own_strlen(char *str)
{
	int count = 0;
	for (int i = 0; i < str[i] != '\0'; i++)
	{
		count++;
	}
	count = count - 1;
	printf("The length of an string is: %d\n", count);
}

int main()
{
	char str[100];
	printf("Enter string: ");
	fgets(str, sizeof(str), stdin);
	own_strlen(str);

	return 0;
}