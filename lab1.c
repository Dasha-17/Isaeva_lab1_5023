#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	float max;
	float min;
	float res;
	float a1;
	int i;
	int e = 0;
	printf("input number "); 
	e = (scanf("%f", &a1));
		if (e != 1)
		{
			return printf("Error, try again");
		}

	min = a1;
	max = a1;

	for (i = 1; i < 10; i++) {
		printf("input number ");
		e = scanf("%f", &a1);
		if (e != 1)
		{
			return printf("Error, try again");
		}
	if (max < a1)
		max = a1;
	if (min > a1)
		min = a1;
	}
	
	res = max - min;	

	printf("max = %f, min = %f\n", max, min);

	printf("res = max - min = %f - %f = %f\n", max, min, res);
	return 0;
}