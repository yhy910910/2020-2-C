#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	double x, y;
	double *px = &x;
	double *py = &y;

	printf("�� �Ǽ� �Է�: ");
	scanf("%lf %lf", px, py);

	printf("%.2f + %.2f = %.2f\n", *px, *py, *px + *py);

	return 0;
}