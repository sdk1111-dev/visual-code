/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
*/

//제출과제 문제1
/*

int get_perimeter(int a, int b)

{
	int sum = (a + b) * 2;
	return sum;
}

int main(void)

{
	int a, b, sum;

	printf("가로의 값을 입력 하시오.\n");
	scanf("%d", &a);
	printf("세로의 값을 입력 하시오!.\n");
	scanf("%d", &b);
	printf("직사각형의 둘레:%d \n", get_perimeter(a, b));


	return 0;
}
	*/



//제출과제 문제2

/*

double get_area_of_square(double a)

{
	double sum = a * a;

	return sum;
}

double main(void)

{
	double a, sum;

	printf("한변의 길이를 입력하세요:\n");
	scanf("%lf", &a);	
	printf("정사각형의 면적:%lf \n", get_area_of_square(a));


	return 0;

}
*/

//제출과제 문제3

/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double get_distance(double x1, double y1, double x2, double y2);

int main(void)
{
	double x1, y1, x2, y2, a;

	a = 0;

	printf("직사각형의 시작점 좌표?\n");
	scanf("%lf %lf", &x1, &y1);

	printf("직사각형의 끝점 좌표?\n");
	scanf("%lf %lf", &x2, &y2);

	a = get_distance(x1, y1, x2, y2);

	printf("(0,0)~(3,4) 직선의 길이:%lf\n", a);

	return 0;
}

double get_distance(double x1, double y1, double x2, double y2)
{
	double i, j;

	i = x1 - x2;
	j = y1 - y2;

	return sqrt((i * i) + (j * j));
}
*/