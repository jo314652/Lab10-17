#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int height, lower, upper, step;
	double weight;

	printf("�q�h��cm?�G");
	scanf_s("%d", &lower);
	printf("��h��cm?�G");
	scanf_s("%d", &upper);
	printf("�C�j�h��cm?�G");
	scanf_s("%d", &step);

	for (height = lower; height <= upper; height += step)
	{
		weight = (height - 100)*0.9;
		printf("%dcm %.2fkg\n", height, weight);
	}

	system("pause");
	return 0;
}