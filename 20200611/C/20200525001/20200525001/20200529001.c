
/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main(void)

{
	printf("3�� 4�߿��� ū���� %d �̴�. \n", NumberCompare(3, 4));
	printf("7�� 2�߿��� ū���� %d �̴�. \n", NumberCompare(7, 2));
	return 0;
}

int NumberCompare(int num1, int num2)

{
	if (num1 > num2)
		return num1;
	else
		return num2;
}*/

/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int AbsoCompare(int num1, int num2);
int GetAbsoValue(int num);

int main(void)

{
	int num1, num2;

	printf("�� ���� ���� �Է�:");
	
	scanf("%d %d", &num1, &num2);
	
	printf("%d�� %d �� ���밪�� ū ����: %d \n", num1, num2, AbsoCompare(num1, num2));

	return 0;

}

int AbsoCompare(int num1, int num2)
{
	if (GetAbsoValue(num1) > GetAbsoValue(num2))
		return num1;
	else
		return num2;

}
int GetAbsoValue(int num)
{

	if (num < 0)
		return num * (-1);
	else
		return num;

}
*/

/*

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void Add(int val);

int(num);   // ���������� �⺻ 0���� �ʱ�ȭ��

int main(void)

{
	printf("num:%d \n", num);

	Add(3);

	printf("num:%d \n", num);

	num++;

	printf("num: %d \n", num);

	return 0;
}

void Add(int val)

{
	num += val; // �������� num�� �� val��ŭ ����
	
}

*/
/*


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int Add(int val);
int num1;

int main(void)
{
	int num=5;
	printf("num: %d \n", Add(3));
	printf("num: %d \n", num + 9);
	return 0;

}

int Add(int val)

{
	int num = 9;
	num += val;
	return num;


}
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void SimpleFunc(void)

{

	static int num1 = 0;
	int num2 = 0;
	num1++, num2++;
	printf("static: %d, local: %d\n", num1, num2);
}

int main(void)
{

	int i;
	for (i = 0; i < 100; i++)
		SimpleFunc();
	return 0;

}