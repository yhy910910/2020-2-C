#include<stdio.h>

//int add2(int a, int b);	//ÀÌ À§Ä¡µµ °¡´É

int main(void)
{
	int a = 3, b = 5;
	int add2(int a, int b);		//int add2(int, int)µµ °¡´É

	//À§ ÇÔ¼ö¿øÇüÀÌ ¾øÀ¸¸é ÇÔ¼öÈ£Ãâ¿¡¼­ ¿À·ù¹ß»ı
	int sum = add2(a, b);
	printf("ÇÕ: %d\n", sum);

	return 0;
}

//ÇÔ¼ö add2ÀÇ ÇÔ¼ö±¸Çö ¶Ç´Â ÇÔ¼öÁ¤ÀÇ ºÎºĞ
int add2(int a, int b)
{
	int sum = a + b;

	return (sum); // °ıÈ£´Â »ı·« °¡´É
}

//À§ main() ÇÔ¼ö¿¡¼­ È£­ŒÀÌ ¾øÀ¸¹Ç·Î ÀÌ ÇÔ¼ö±¸ÇöÀº ½ÇÇàµÇÁö ¾ÊÀ½
int findMin2(int x, int y)
{
	int min = x < y ? x : y;

	return (min);
}
