#include <stdio.h>

void printv1(){
	int lower, upper, step;
	float fahr, celsius;
	lower = 0; /* lower limit of temperature table */
	upper = 300; /* upper limit */
	step = 20; /* step size */
	fahr = lower;

	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%4.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}

void printv2(){
	int fahr;

	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
		printf("%4d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}

#define LOWER 0 /* lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP 20 /* step size */

void printv3(){
	int fahr;

	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%4d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}

int main()
{
	printv1();
	printf("%s", "-----------\n");
	printv2();
	printf("%s", "-----------\n");
	printv3();
}
