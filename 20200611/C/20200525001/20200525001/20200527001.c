/*
//예제 5-8 : switch를 이용한 텍스트 기 반의 메뉴 처리 (1/2

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int	main(void)

{
	int menu;
	char filename[32] = "그남자그여자.mp4";

	printf("1. 파일 열기\n");
	printf("2. 재생\n");
	printf("3. 재생옵션\n");
	printf("선택:");

	scanf("%d", &menu);

	switch(menu){
	case 1:
			printf(" 재생할 파일 이름?");
			scanf("%s", filename);
			break;

	case 2:

			printf("%s를 재생합니다.\n", filename);
			break;

	case 3:

			printf("재생 옵션을 선택합니다.\n");
			break;

	default:
			printf("잘못 선택을 하셨습니다.\n");
			break;
	}

	return 0;
}

*/

//예제 5 - 9 : switch를 이용한 사칙연산 계산기(2 / 2)

/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int	main(void)
{
	int a, b;
	char op;

	printf(" 수식 ? ");
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
			printf("0으로 나룰 수 없습니다.\n");
		break;

	default:
		printf("잘못된 수식입니다.\n");
		break;
	}
}
*/

//예제 5-11 : 입력된 정수들의 합계 구 하기 

/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	int num = 0;
	int sum = 0;
	int i;

	printf("정수 5개를 입력하세요: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &num);
		sum += num;

	}
	printf("합계: %d\n", &num);

	return 0;


}*/
//예제 5-12 : 입력된 문자로 직사각형 그리기 (1/2)
/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	int width, height;
	char ch;
	int i, j;

	printf("직사각형의 폭과 높이?");
	scanf("%d %d", &width, &height);
	printf("직사각형을 그릴 문자?");
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
//예제 5-15 : 반복 수행되는 사칙연산 계산기 (1/2)

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
		printf("수식? ");
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
				printf("0으로 나눌수 없습니다.\n");
			break;


		default:

			printf("잘못된 수식입니다.\n");

			break
		}

		printf("계속 하시겠습니까 (Y/N)?");
		scanf("%c", &yesno);

	}

	return 0;
}
*/
//예제 5-20 : 종료 메뉴를 가진 메뉴 처 리 프로그램 (1/2)
/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	int menu;
	char filename[32] = "washYourHands.mp4";

		while (1)

		{
			printf("0. 종료\n");
			printf("1. 파일 열기\n");
			printf("2. 재생\n");
			printf("3.  재생옵션\n");
			printf("선택:");

			scanf("%d", &menu);
			if (menu == 0)
				break;
			switch (menu)
			
			{
			case 1:
				printf("재생할 파일 이름?");
				scanf("%s", filename);
				break;

			case 2:
				printf("%s를 재생합니다.\n", filename);
				break;

			case 3:
				printf("재생 옵션을 선택합니다.\n");
				break;

			default:

				printf("잘못 선택하셨습니다.\n");
				break;

			}
		}
				printf("프로그램을 종료합니다.\n");

		return 0;

}
*/
//예제 5 - 21 : 센티널 값을 이용한 사칙 연산 계산

/*


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)

{


	int a, b;
	char op;

	while (1)

	{

		printf("수식? ");
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
				printf("0으로 나눌수 없습니다.\n");
			break;


		default:

			printf("잘못된 수식입니다.\n");

			break;





		}

		return 0;
	}

}
*/

//예제 5 - 22 : continue의 사용 예
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

//예제 5-23 : goto의 사용 

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

//예제 5 - 24 : return의 사용
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

	printf("양의 정수 입력:");
	scanf("%d", &num);

	while (i<num)
	{
		printf("Hello World! \n");
		i++;
	}
	return 0;
}*/

// 별 출력
/*


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int	main(void)
{
	int num = 10;

	for (int i = 0; i < num; i++) //세로 설정
	{
		for (int j = 0; j < i + 1; j++)// 가로 공백
		{
			printf("  ");

		}
		
			
		
		for (int j = (num*2)-1;  j>2*i ; j--) //가로 별
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

//예제 6 - 1 : 리턴 값과 매개변수가 없는 함수의 사용
/*
void hi(void)
{
	printf("Hi! Let's enjoy\n");
}
void bye(void)
{
	printf("Bye!\n");
}

//예제 6-2 : 매개변수가 있는 draw_line 함수의 사용 예 (1/2)
void draw_line(char c, int L)
{
	int i;
	for (i = 0; i < L; i++)
		printf("%c", c);
		printf("\n");
}

//예제 6-3 : 매개변수가 있는 print_sum 함수의 사용 예 (1/2)
void print_sum(int c)
{
	int i;
	int num;
	int sum = 0;

	printf("%d개의 정수?", c);
	for (i = 0; i < c; i++)
	{
		scanf("%d", &num);
		sum += num;
	}
	printf("합계 :%d\n", sum);
	

}
*/
	

//예제 6-4 : get_factorial 함수의 사용 예 (1/2)
//int get_factorial(int);
/*

int main(void)
{
	int num;
	printf("정수? ");
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















