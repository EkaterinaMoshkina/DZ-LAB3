#include <stdio.h>
#include <locale.h>
#define D 63241.1

int main()
{
	setlocale(LC_CTYPE, "RUS");
	int g;
	float as;
	puts("������� ����� �������� ���");
	scanf("%d", &g);
	printf("��� � ��������������� �������� %.2f", g * D);
}