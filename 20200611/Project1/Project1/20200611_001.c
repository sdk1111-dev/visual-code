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

å 13-1 ��������
int main(void)
{
	int arr[3] = { 0, 1, 2 };
	printf("�迭�� �̸�:%p \n", arr);
	printf("ù��° ���:%p \n", arr[0]);
	printf("�ι�° ���:%p \n", arr[1]);
	printf("����° ���:%P \n", arr[2]);

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

//���� 1
/*

int main(void)

{
	//double arr[3];

	double arr[3] = { 1, 2, 3 };
	int i;

	for (i = 0; i < 3; i++)
	{

	printf("Arr [%d]�� �ּ�: %p\n",i, arr+i);
}
	return 0;
}
*/

//���� 2
/*

void main(void)
{

	double arr[10] ={1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10};
	double * ptr = arr;
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("�Ǽ� 10���� �ּ�:%d %.2f\n", i, *ptr+i);

	}

	return 0;
}
*/

//���� 3
/*

void main(void)
{
	int arr[10] = { 2,3,4,5,6,7,8,9,10,11 };
	int* ip = arr;

	int i;

	printf("�迭:");

		for (i = 0; i < 10; i++) //,ip++

		{
			printf("%3d", *ip++); //*(ip+i) //*ip
	}
		printf("\n");
		printf("����:");

		ip = &arr[9];
		for (i = 0; i < 10; i++, ip--)
		{
			printf("%3d", *ip);
		}
}
*/
//���� 4
/*

void main(void)
{

	double arr[10] = { 2,3,4,5,6,67,7,87,8,8 };
	int i;
	double* dp = arr;
	double sum = 0;
	double avg = 0;


	printf("�迭�� : ");
	for (i = 0; i < 10; i++, dp++) //arr+i �����ʹ� �Ǵµ� �迭�� �ȵ�.
	{
		printf("%.2f  ", *dp);
		sum += *dp;
	}
	printf("\n");
	avg = sum / 10;
	printf("���: %f\n", avg);

}
*/









