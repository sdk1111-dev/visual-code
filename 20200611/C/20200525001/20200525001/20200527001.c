/*
//���� 5-8 : switch�� �̿��� �ؽ�Ʈ �� ���� �޴� ó�� (1/2

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int	main(void)

{
	int menu;
	char filename[32] = "�׳��ڱ׿���.mp4";

	printf("1. ���� ����\n");
	printf("2. ���\n");
	printf("3. ����ɼ�\n");
	printf("����:");

	scanf("%d", &menu);

	switch(menu){
	case 1:
			printf(" ����� ���� �̸�?");
			scanf("%s", filename);
			break;

	case 2:

			printf("%s�� ����մϴ�.\n", filename);
			break;

	case 3:

			printf("��� �ɼ��� �����մϴ�.\n");
			break;

	default:
			printf("�߸� ������ �ϼ̽��ϴ�.\n");
			break;
	}

	return 0;
}

*/

//���� 5 - 9 : switch�� �̿��� ��Ģ���� ����(2 / 2)

/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int	main(void)
{
	int a, b;
	char op;

	printf(" ���� ? ");
	scanf("%d %c %d", &a, &op, &b);

	switch (op)
	{

	case '+':
			printf("%d+%d=%d\n",a,b,a+b);
			break;

	case '-':
			printf("%d-%d=%d\n",a,b,a-b);
			break;
	case '*':
			printf("%d*%d=%d\n",a,b,a*b);
			break;
	case '/':

		if (b != 0)
			printf("%d /%d =%.2f\n", a, b, (double)a / b);

		else
			printf("0���� ���� �� �����ϴ�.\n");
		break;

	default:
		printf("�߸��� �����Դϴ�.\n");
		break;
	}
}
*/

//���� 5-11 : �Էµ� �������� �հ� �� �ϱ� 

/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	int num = 0;
	int sum = 0;
	int i;

	printf("���� 5���� �Է��ϼ���: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &num);
		sum += num;

	}
	printf("�հ�: %d\n", &num);

	return 0;


}*/
//���� 5-12 : �Էµ� ���ڷ� ���簢�� �׸��� (1/2)
/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	int width, height;
	char ch;
	int i, j;

	printf("���簢���� ���� ����?");
	scanf("%d %d", &width, &height);
	printf("���簢���� �׸� ����?");
	scanf(" %c", &ch);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			printf("%c", ch);
		printf("\n");
	}

	return 0;
}
*/
//���� 5-15 : �ݺ� ����Ǵ� ��Ģ���� ���� (1/2)

/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	int a, b;
	char op;
	char yesno = 'Y';
	while (yesno == 'Y' || yesno == 'y')
	{
		printf("����? ");
		scanf("%d %c %d", &a, &op, &b);

		switch (op) {
		case '+':
			printf("%d + %d = %d\n", a, b, a + b);
			break;
		case '-':
			printf("%d - %d = %d\n", a, b, a - b);
			break;
		case '*':
			printf("%d * %d = %d\n", a, b, a * b);
			break;

		case '/':
			if (b != 0)
				printf("%d/%d =%.2f\n", a, b, (double)a / b);
;			else
				printf("0���� ������ �����ϴ�.\n");
			break;


		default:

			printf("�߸��� �����Դϴ�.\n");

			break
		}

		printf("��� �Ͻðڽ��ϱ� (Y/N)?");
		scanf("%c", &yesno);

	}

	return 0;
}
*/
//���� 5-20 : ���� �޴��� ���� �޴� ó �� ���α׷� (1/2)
/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	int menu;
	char filename[32] = "washYourHands.mp4";

		while (1)

		{
			printf("0. ����\n");
			printf("1. ���� ����\n");
			printf("2. ���\n");
			printf("3.  ����ɼ�\n");
			printf("����:");

			scanf("%d", &menu);
			if (menu == 0)
				break;
			switch (menu)
			
			{
			case 1:
				printf("����� ���� �̸�?");
				scanf("%s", filename);
				break;

			case 2:
				printf("%s�� ����մϴ�.\n", filename);
				break;

			case 3:
				printf("��� �ɼ��� �����մϴ�.\n");
				break;

			default:

				printf("�߸� �����ϼ̽��ϴ�.\n");
				break;

			}
		}
				printf("���α׷��� �����մϴ�.\n");

		return 0;

}
*/
//���� 5 - 21 : ��Ƽ�� ���� �̿��� ��Ģ ���� ���

/*


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)

{


	int a, b;
	char op;

	while (1)

	{

		printf("����? ");
		scanf("%d %c %d", &a, &op, &b);

		if (a == 0 && op == '0' && b == 0)
			break;

		switch (op)

		{

		case '+':

			printf("%d +%d = %d\n", a, b, a + b);
			break;

		case '-':
			printf("%d - %d =%d\n", a, b, a - b);
			break;

		case '*':
			printf("%d * %d =%d\n", a, b, a * b);

			break;

		case '/':
			if (b != 0)
				printf("%d/%d =%.2f\n", a, b, (double)a / b);
			else
				printf("0���� ������ �����ϴ�.\n");
			break;


		default:

			printf("�߸��� �����Դϴ�.\n");

			break;





		}

		return 0;
	}

}
*/

//���� 5 - 22 : continue�� ��� ��
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	int i;

	for (i = 10; i > 0; i--)
	{
		if (i % 3 == 0)
			continue;
		printf("%d ", i);

	}
	printf("\n");

	return 0;

}


*/

//���� 5-23 : goto�� ��� 

/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	int i;

	for (i = 10; i > 0; i--)
	{
		if (i % 3 == 0)
			goto quit;
		printf("%d", i);
	}
quit:
	printf("\n");
	return 0;
}
*/

//���� 5 - 24 : return�� ���
/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{

	int i;

	for (i = 10; i > 0; i--)
	{
		if (i % 3 == 0)
			return 1;
		printf("%d", i);

	}
	printf("\n");

	return 0;

}
*/
/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int row = 10;
	int out= 2;
	for (int i = 0; i < row; i++)
	{
		int c;
		for (c = 0; c <= (row - i); c++)
			printf(" ");

		int devider;
		for (c = 0; c <= i; c++)

		{
			while (1) 
			{
				for (devider = 2; devider <= out - 1; devider++)

				{
					if (out % devider == 0)
						break;
				}
				if (out++ == devider)
				{
					printf("%3d", out - 1);
					break;
				}

			}
		}
		printf("\n");
	}   
}
*/
/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int	main(void)
{
	int num;
	int i = 0;

	printf("���� ���� �Է�:");
	scanf("%d", &num);

	while (i<num)
	{
		printf("Hello World! \n");
		i++;
	}
	return 0;
}*/

// �� ���
/*


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int	main(void)
{
	int num = 10;

	for (int i = 0; i < num; i++) //���� ����
	{
		for (int j = 0; j < i + 1; j++)// ���� ����
		{
			printf("  ");

		}
		
			
		
		for (int j = (num*2)-1;  j>2*i ; j--) //���� ��
		{
			printf(" *");
		}

		printf("\n");
	}
	return 0;
}

*/


/*
int main(void)

{
	int result;
	result = add(3, 4);

	printf("%d\n", result);
	printf("%d\n", add(3, 4));
	hi();
	printf_sum(result);
	printf("%d\n", G);

}
*/

//���� 6 - 1 : ���� ���� �Ű������� ���� �Լ��� ���
/*
void hi(void)
{
	printf("Hi! Let's enjoy\n");
}
void bye(void)
{
	printf("Bye!\n");
}

//���� 6-2 : �Ű������� �ִ� draw_line �Լ��� ��� �� (1/2)
void draw_line(char c, int L)
{
	int i;
	for (i = 0; i < L; i++)
		printf("%c", c);
		printf("\n");
}

//���� 6-3 : �Ű������� �ִ� print_sum �Լ��� ��� �� (1/2)
void print_sum(int c)
{
	int i;
	int num;
	int sum = 0;

	printf("%d���� ����?", c);
	for (i = 0; i < c; i++)
	{
		scanf("%d", &num);
		sum += num;
	}
	printf("�հ� :%d\n", sum);
	

}
*/
	

//���� 6-4 : get_factorial �Լ��� ��� �� (1/2)
//int get_factorial(int);
/*

int main(void)
{
	int num;
	printf("����? ");
	scanf("%d", &num);
	//int result = get_factorial(num);
	//printf("%d", get_factorial(num);
	printf("%d!=%d\n", num, get_factorial(num));
	//printf("%d!=%d\n", num, result);
	//printf("%d!=\n", num, factorial);
	return 0;
}


int get_factorial(int num)
{
	int factorial = 1;
	int i = 1;
	for (i = 1; i <= num; i++)
	{
		factorial *= i;
	}
	return factorial;
}
*/















