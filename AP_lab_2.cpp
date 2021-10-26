#include <stdio.h>
#include <math.h>
void first() 
{
	for (double x = 3; x <= 6; x += 0.2f)
	{
		if (x < 4)
			printf("%f\n", log(x) - cos(x));
		else if (x >= 4 && x < 5)
			printf("%f\n", cos(exp(x) + 3) / sin(exp(x) + 3));
		else
			printf("%f\n", pow(5 * x, x));
	}
}
void second() 
{
	double sum, e ;
	int k;
	for (double x = -1; x <= 1; x += 0.2)
	{
		sum = 0.0f;
		e = 0.0f ;
		k = 2;
		do 
		{
			e = ((pow(-1, k) * k) * sin(k * x)) / (pow(k, 2) - 1);
			sum += e;
			k++;
		} while (e >= 0.001);
		printf("x = %.2f ; y = %f\n", x, sum);
	}
}
int main()
{
	first();
	second();
	return 0;
}