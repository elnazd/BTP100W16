#include <stdio.h>

int main()
{
	int a = 7;
	int b = 7;

	printf("%d\n\n%d\n%d\n%d\n%d\n%d\n", a==b, a!=b, a<b, a<=b, a>b, a>=b);

return 0;
}

/*
output:
	1
	
	0
	0
	1
	0
	1
*/