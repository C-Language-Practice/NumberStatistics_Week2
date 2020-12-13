#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numbers[10];
	for (int i = 0; i < 10; i++)
	{
		printf_s("Please enter a whole number between 1 and 10:\n");
		scanf_s("%d", &numbers[i]);
		printf_s("\n");
	}
	
	for (int i = 0; i < 10; i++)
	{
		int counter = 0;
		for (int j = 0; j < 10; j++)
		{
			if (i == numbers[j])
			{
				counter++;
			}
		}
		printf_s("%d: %d db\n", i, counter);
	}
	return 0;
}