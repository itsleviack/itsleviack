#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int hour1, hour2, minute1, minute2, result = 1;
	scanf_s("%d", &hour1); scanf_s("%d", &minute1);
	scanf_s("%d", &hour2); scanf_s("%d", &minute2);
	while ((hour1 != hour2) || (minute1 != minute2))
	{
		if (minute1 == 30)
			result+= 1;
		minute1++;
		if (minute1 == 60)
		{
			minute1 = 0;
			hour1 += 1;
			if (hour1 >> 12)
				result += hour1 - 12;
			else
				result += hour1;
			if (hour1 == 24)
				hour1 = 0;
		}
		printf("%d", result);
		return 0;
	}
}
