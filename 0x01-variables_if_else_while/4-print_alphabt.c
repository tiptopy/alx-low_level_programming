#include <stdio.h>
/**
  *main - print alphabets
  *@void: no parameter
  *Return : return 0 on success
*/
int main(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
