#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

/*

int main(void)

{

	int a = 10;

	int b = 20;
	int* p = NULL;
	scanf("%d %d", &a, &b);

	if (a > b)
	{
		p = &a;   //a=a*100;
	}

	else
	{
		p = &b;   //b=b*100;
		do_something(*p);
		*p = *p * 100;
	}

}

책 13-1 연습문제
int main(void)
{
	int arr[3] = { 0, 1, 2 };
	printf("배열의 이름:%p \n", arr);
	printf("첫번째 요소:%p \n", arr[0]);
	printf("두번째 요소:%p \n", arr[1]);
	printf("세번째 요소:%P \n", arr[2]);

		return 0;

}
*/

/*
int main(void)

{
	int arr1[3] = { 1,2,3 };
	double arr2[3] = { 1.1, 2.2, 3.3};

	printf("%d %g \n", *arr1, *arr2);

	*arr1 += 100;
	*arr2 += 120.5;

	printf("%d %g \n", arr1[0], arr2[0]);

	return 0;

}
*/

/*

int main(void)

{
	int arr[3] = { 15, 25, 35 };
	int *ptr = &arr[0];

	printf("%d %d \n", ptr[0], arr[0]);
	printf("%d %d \n", ptr[1], arr[1]);
	printf("%d %d \n", ptr[2], arr[2]);
	printf("%d %d \n", *ptr, *arr);
	return 0;
}
*/

//문제 1
/*

int main(void)

{
	//double arr[3];

	double arr[3] = { 1, 2, 3 };
	int i;

	for (i = 0; i < 3; i++)
	{

	printf("Arr [%d]의 주소: %p\n",i, arr+i);
}
	return 0;
}
*/

//문제 2
/*

void main(void)
{

	double arr[10] ={1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10};
	double * ptr = arr;
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("실수 10개의 주소:%d %.2f\n", i, *ptr+i);

	}

	return 0;
}
*/

//문제 3
/*

void main(void)
{
	int arr[10] = { 2,3,4,5,6,7,8,9,10,11 };
	int* ip = arr;

	int i;

	printf("배열:");

		for (i = 0; i < 10; i++) //,ip++

		{
			printf("%3d", *ip++); //*(ip+i) //*ip
	}
		printf("\n");
		printf("역순:");

		ip = &arr[9];
		for (i = 0; i < 10; i++, ip--)
		{
			printf("%3d", *ip);
		}
}
*/
//문제 4
/*

void main(void)
{

	double arr[10] = { 2,3,4,5,6,67,7,87,8,8 };
	int i;
	double* dp = arr;
	double sum = 0;
	double avg = 0;


	printf("배열값 : ");
	for (i = 0; i < 10; i++, dp++) //arr+i 포인터는 되는데 배열은 안됨.
	{
		printf("%.2f  ", *dp);
		sum += *dp;
	}
	printf("\n");
	avg = sum / 10;
	printf("평균: %f\n", avg);

}
*/









