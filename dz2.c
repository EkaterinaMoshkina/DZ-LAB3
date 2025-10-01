#include <stdio.h>
#include <locale.h>
#define D 63241.1

int main()
{
	setlocale(LC_CTYPE, "RUS");
	int g;
	float as;
	puts("введите число световых лет");
	scanf("%d", &g);
	printf("это в астрономических единицах %.2f", g * D);
}