#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned)time(NULL)); //랜덤으로 정하기 위함이다.
	char a = rand();
	printf("%c\n", a);

	return 0;
}