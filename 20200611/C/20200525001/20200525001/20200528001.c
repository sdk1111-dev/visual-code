

/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
*/

//int add(int, int);
//void hi(void);
//void draw_line(char, int);
//void print_sum(int);


//double get_area(double);
//int get_gcd(int);





/*


int main(void)

{
	int i;
	int fact;
	for (i = 1; i <= 5; i++)


	{
		fact = get_factrial(i);
		printf("%2d! =%3d\n,i, fact");

	}
	get_factrial(5);

	return 0;

}
*/

/*

double get_area(double radius)

{
	const double PI = 3.1415965359;
	return PI * radius * radius;

}
*/
/*
int main(void)

{

	int i;
	for (i = 1; i <= 5; i++)
	{
	printf("�������� %d�� �� ���� ����: %.2f\n", i, get_area(i));

}

return 0;
}

*/
/*

int get_gcd(int x, int y)
{
	int r;
	while (y !=0)
	{
		r = x % y;
		x = y;
		y = r;

	}
	return x;

}

int main(void)
{
	int x, y;
	int gcd;

	while (1)
	{
		printf("���� 2���� �Է��ϼ���. (0 0�̸� ����):");
		scanf("%d %d", &x, &y);

		if (x == 0 && y == 0)
			break;
		gcd = get_gcd(x, y);
		printf("%d�� %d�� GCD: %d\n", x, y, gcd);

	}
	return 0;

}
*/
//���� 6-7 : get_max �Լ��� ��� �� (1/2)
/*

int get_max(int a, int b, int c)
{
	int max = a > b ? a : b;
	max = c > max ? c : max;
	return max;

 }
int main(void)
{
	int x, y, z;
	while (1)

	{
		printf("���� 3���� �Է��ϼ���.(0 0 0 �Է½� ����):");
		scanf("%d %d %d", &x, &y, &z);

		if (x == 0 && y == 0 && z == 0)
			break;
		printf("�ִ밪: %d\n", get_max(x, y, z));

	}
	return 0;

}
*/

//���� 9-1 3���� ������ ���ڷ� �Է¹޾� ū���� ������ ���
/*

int Max(int a1, int a2, int a3)
{
	if (a1 > a2)
		return (a1 > a3) ? a1 : a3;
	else
		return (a2 > a3) ? a2 : a3;
}
int Min(int a1, int a2, int a3)

{	if (a1 < a2)
		return (a1 < a3) ? a1 : a3;
	else
		return (a2 < a3) ? a2 : a3;

}

int main(void)
{
	int a, b, c;
	printf("3���� ������ �Է��Ѵ�. :");
	scanf("%d %d %d", &a, &b, &c);
	printf("���� ū���� : %d\n", Max(a, b, c));
	printf("���� �������� : %d\n", Min(a, b, c));
	return 0;
}

*/

//����2 1���� 2���� ������ -> 1. ������ ȭ�� 2. ȭ���� ���� -> �µ� �Է�
/*

double CelToFah(double c)
{
	return 1.8 * c + 32;
}
double FahToCel(double f)
{
	return (f - 32) / 1.8;
}

int main(void)
{
	int	sel;
	double num;
	printf("1.������ȭ���� 2. ȭ���� ������ \n");
	printf("����>>");
	scanf("%d", &sel);

	if (sel == 1)
	{
		printf("���� �Է� :");
		scanf("%lf", &num);
		printf("��ȯ�� ȭ��:%f\n", CelToFah(num));
	}

	else if (sel == 2)
	{
		printf("ȭ�� �Է� :");
		scanf("%lf", &num);
		printf("��ȯ�� ȭ��:%f\n", FahToCel(num));

    }
		else
		printf("���� ����\n");
		return 0;
}
*/

//����3 �Ǻ���ġ ���� 
/*


void ShowFiboSeries(int num)

{

	int f1 = 0, f2 = 1, f3, i;
	if (num == 1)
		printf("%d", f1);
	else
		printf("%d%d", f1, f2);
	for (i = 0; i < num - 2; i++)
	{
		f3 = f1 + f2;
		printf("%d", f3);
		f1 = f2;
		f2 = f3;

	}

}

int	main(void)
{
	int n;
	printf("����ϰ��� �ϴ� �Ǻ���ġ ������ ���� : ");
	scanf("%d", &n);
	if (n < 1)
	{
		printf("1�̻��� ���� �Է��ϼ���.\n");
		return -1;

	}
	ShowFiboSeries(n);
	return 0;
}
*/

//void get_perimeter(double)











