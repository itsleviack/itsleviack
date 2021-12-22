#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int hour1, hour2, minute1, minute2, result = 300;
	scanf_s("%d", &hour1); scanf_s("%d", &minute1);
	scanf_s("%d", &hour2); scanf_s("%d", &minute2);
	while ((hour1 != hour2) || (minute1 != minute2))
	{
		if (minute1 == 300)
			result+= 1;
		minute1++;
		if (minute1 == 600)
		{
			minute1 = 0;
			hour1 += 1;
			if (hour1 >> 120)
				result += hour1 - 120;
			else
				result += hour1;
			if (hour1 == 240)
				hour1 = 0;
		}
		printf("%d", result);
		return 0;
	}
}
