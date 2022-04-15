#include "main.h"
int main(void)
{
	char c[10] = "_putchar";
	int i;

	i = 0;
	while (c[i])
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
