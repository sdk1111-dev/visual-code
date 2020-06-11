

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
	printf("반지름이 %d일 때 원의 면적: %.2f\n", i, get_area(i));

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
		printf("정수 2개를 입력하세요. (0 0이면 종료):");
		scanf("%d %d", &x, &y);

		if (x == 0 && y == 0)
			break;
		gcd = get_gcd(x, y);
		printf("%d와 %d의 GCD: %d\n", x, y, gcd);

	}
	return 0;

}
*/
//예제 6-7 : get_max 함수의 사용 예 (1/2)
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
		printf("정수 3개를 입력하세요.(0 0 0 입력시 종료):");
		scanf("%d %d %d", &x, &y, &z);

		if (x == 0 && y == 0 && z == 0)
			break;
		printf("최대값: %d\n", get_max(x, y, z));

	}
	return 0;

}
*/

//문제 9-1 3개의 정수를 인자로 입력받아 큰수와 작은수 출력
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
	printf("3개의 정수를 입력한다. :");
	scanf("%d %d %d", &a, &b, &c);
	printf("가장 큰수는 : %d\n", Max(a, b, c));
	printf("가장 작은수는 : %d\n", Min(a, b, c));
	return 0;
}

*/

//문제2 1번과 2번을 선택후 -> 1. 섭씨를 화씨 2. 화씨를 섭씨 -> 온도 입력
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
	printf("1.섭씨를화씨로 2. 화씨를 섭씨로 \n");
	printf("선택>>");
	scanf("%d", &sel);

	if (sel == 1)
	{
		printf("섭씨 입력 :");
		scanf("%lf", &num);
		printf("변환된 화씨:%f\n", CelToFah(num));
	}

	else if (sel == 2)
	{
		printf("화씨 입력 :");
		scanf("%lf", &num);
		printf("변환된 화씨:%f\n", FahToCel(num));

    }
		else
		printf("선택 오류\n");
		return 0;
}
*/

//문제3 피보나치 수열 
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
	printf("출력하고자 하는 피보나치 수열의 갯수 : ");
	scanf("%d", &n);
	if (n < 1)
	{
		printf("1이상의 값을 입력하세요.\n");
		return -1;

	}
	ShowFiboSeries(n);
	return 0;
}
*/

//void get_perimeter(double)











