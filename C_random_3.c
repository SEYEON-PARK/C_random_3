#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned)time(NULL)); //�������� ���ϱ� �����̴�.
	char a = rand();
	printf("%c\n", a);

	return 0;
}