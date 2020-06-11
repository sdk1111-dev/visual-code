
//#define _CRT_SECURE_NO_WARNINGS

/*#include <stdio.h>


int main()

{
	int num;

	printf("정수? ");

	scanf("%d", &num);

	printf("10진수 %d 는 16진수 %x 입니다.\n", num, num);

	return 0;


}*/

/*#include <stdio.h>

int main(void)

{
	int num = 0;

	while (num < 5)
	{
		printf("Hello Workld! %d \n", num);
		num++;
	}
	return 0;
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

	int main(void)

	{
		int dan = 0, num = 1;
		printf("몇 단?");
		scanf("%d", &dan);

		while (num<10)
		{
			printf("%d * %d = %d\n", dan, num, dan * num);
			num++;

		}
		return 0;

	} 
	*/
/*
# define _CRT_SECURE_NO_WARNINGS

# include <stdio.h>

	int main(void)
	{
		int dan = 0, num = 1;
		printf("몇단? ");
		scanf("% d", &dan);

		while (num<10)

			{
				printf("%d * %d = %d\n", dan, num, dan * num);
				num++;
			}

	return 0;

}
*/
/*
#include <stdio.h>	

int main(void)

{
	printf(" 7 = %08x\n", 7);
	printf(" -7 = %08\n", -7);
	printf(" 7+(10) = %08x\n", 7 + (-10));

	return 0;
}
*/
/*
#include <stdio.h>

int main(void)

{
	short a = -10;
	unsigned short b = 65526;

	printf("a= %d, %08x\n", a, a);
	printf("b= %u, %08x\n", b, b);

	return 0;

}
*/

/*
 #include <stdio.h>

int main(void)

{
	char n = 128;
	unsigned char m = 256;
	char x = -129;
	unsigned char y = -1;

	printf("n=%d\n", n);
	printf("m=%d\n", m);
	printf("x=%d\n", x);
	printf("y=%d\n", y);

	return 0;


}
*/
/*

# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{

	char ch, prev_ch, next_ch;

	printf("문자? ");
	scanf("%c", &ch);

	prev_ch = ch - 1;
	next_ch = ch + 1;
	printf("prev_ch = %c, %d, %#02x\n", prev_ch, prev_ch, prev_ch);
	printf("ch      = %c, %d, %#02x\n", ch, ch, ch);
	printf("next_ch = %c, %d, %#02x\n", next_ch, next_ch, next_ch);

	return 0;

}
*/
// 3-6 : 특수문자
/*

#include <stdio.h>
int main(void)
{
	char bell = '\b';
	printf("c프로그램을 시작합니다.\n", bell);
	printf("\\work\\chap03_06\\Debug\n");
	printf("\t탭 문자를 출력합니다.\n");

	return 0;

}
*/

// 예제 3-7 : 실수형의 정밀도

/*

#include <stdio.h>
int main(void)

{
	float pi1 = 3.14159265359793;
	double pi2 = 3.14159265359793;

	printf("float 형의 pi 값 : %30.25f\n", pi1);
	printf("double 형의 pi 값 : %30.25\n", pi2);

	return 0;

}
*/

//예제 3-8 : float 형의 오버 플로우와 언더 플로우[1/2]
/*

#include <stdio.h>
int main(void)

{

	float x = 3.40282e38;
	float y = 1.17549e-38;
	
	printf("x = %30.25e\n", x);
	printf("y = %30.25e\n", y);

	x = x * 100;
	printf("x=%30.25e\n", x);

	y = y * 1000;
	printf("x=%30.25e\n", y);

	return 0;


}
*/

// 3-9 : 변수의 선언 및 사용

/*

# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{

	int amount = 0;
	int price = 0;
	int total_price = 0;

	printf("amount =%d, price=%d\n", amount, price);
	scanf("%d", &amount);

	price = 2000;

	total_price = amount * price;
	printf("합계: %d원\n", total_price);

	return 0;

}
*/
//3-10: 리터럴 상수의 크기
/*

#include <stdio.h>	

int main(void)

{


	printf("sizeof(\'a\') = %d\n", sizeof('a'));
	printf("sizeof(12345) = %d\n", sizeof(12345));
	printf("sizeof(12345U) = %d\n", sizeof(12345U));
	printf("sizeof(12345L) = %d\n", sizeof(12345L));
	
	printf("sizeof(12.34F)=%d\n", sizeof(12.34F));
	printf("sizeof(12.34567)=%d\n", sizeof(12.1234567));
	printf("sizeof(1.234e-5)=%d\n", sizeof(1.234e-5));

	printf("sizeof(\"abcde\")=%d=\n", sizeof("abcde"));

		return 0;


}
*/

//예제 3-11 : 매크로 상수
/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14 //매크로 상수 정의
int main(void)
{
	double radius = 0;
	double area = 0;

	printf("반지름? ");
	scanf("%lf", &radius); // double형 입력

	area = PI * radius * radius;

	printf("원의 면적: %2f\n", area);
	printf("PI = %.2f\n", PI);

	return 0;


}
*/

//3-12 : <limits.h> 와 <float.h>를 이용한 오버플로우 발생 [1/2]
/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include<float.h>


int	main(void)
{ 

	char a = CHAR_MAX;
	char b = CHAR_MAX;
	short c = SHRT_MAX;
	short d = SHRT_MAX;
	int e = INT_MAX;
	int f = INT_MAX;
	float g = FLT_MAX;
	float h = FLT_MAX;

	printf("a= %d, b=%d\n", a, b);
	printf("c= %d, d=%d\n", c, d);
	printf("e= %d, f=%d\n", e, f);
	printf("g=%30.25e, h=%30.25e\n", g, h);

	return 0;


}
*/

//예제 3-13:const 변수의 사용
/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int amount = 0, price = 0;
	const double VAT_RATE = 0.1; // 부가가치세율
	int total_price = 0;

	printf("수량? ");
	scanf("%d", &amount);

	printf("단가? ");
	scanf("%d", &price);

	total_price = amount * price * (1 + VAT_RATE);
	printf("합계: %d원\n", total_price);

	return 0;



}
*/
//예제 4-1 :  정수의 산술 연산

/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	int x = 0, y = 0;

	printf("두 개의 정수를 입력하세요:");
	scanf("%d %d", &x, &y);

	printf("+%d = %d\n", x, +x);
	printf("-%d = %d\n", y, -y);
	printf("%d + %d = %d\n", x,y,x+y);
	printf("%d - %d = %d\n", x,y, x-y);
	printf("%d * %d = %d\n", x,y, x*y);
	printf("%d / %d = %d\n", x,y, x/y);
	printf("%d %% %d = %d\n", x,y, x%y);

	return 0;


}

*/

// 실수의 산술 연산

/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)

{

	double x = 0, y = 0;

	printf("두 개의 실수를 입력하세요: ");
	scanf("%lf %lf", &x, &y);

	printf("+%f = %f\n", x, +y);
	printf("-%f = %f\n", y, -y);
	printf("%f + %f =%f\n", x, y, x + y);
	printf("%f - %f= %f\n", x, y, x - y);
	printf("%f * %f =%f\n", x, y, x * y);
	printf("%f / %f =%f\n", x, y, x / y);

	return 0;

}
*/


// 예제 4-4 : 정수와 실수의 혼합 연산
/*

#define PI 3.141592
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)

{
	int radius = 0;
	double area, perimeter;

	printf("반지름? ");
	scanf("%d", &radius);

	area = PI * radius * radius;
	printf("원의면적 : %.2f\n", area);

	perimeter = 2 * PI * radius;
	printf("원의 둘레: %2f\n", perimeter);

	return 0;


}

*/

// 예제 4-5 : 증감 연산자의 사용 예 [1/2]
/*

#define _CRT_SECURE_NO_WORNINGS
#include <stdio.h>
int main(void)
{
	int index1 = 0, index2 = 0;
	int current1, current2;
	float x1 = 0.5F, x2 = 0.5F;
	float y1, y2;

	current1 = index1++;
	printf("index1 = %d, current1= %d\n", index1, current1);

	current2 = ++index2;
	printf("index2 =%d, current2=%d\n", index2, current2);

	y1 = x1++;
	printf("x1 =%.2f, y1=%.2f\n", x1, y1);

	y2 = ++x2;
	printf("x2 = %.2f, y2=%.2f\n", x2, y2);

	return 0;

}
*/

// 예제 4-6 : 대입 연산자식의 값
/*
#include <stdio.h>

int main(void)

{

	int a = 0;
	double b = 0;
	int c = 0;

	a = 123l;
	printf("a=%d\n", a);
	printf("a=%d\n", a = 456);
	printf("b=%f\n", b = a + 0.5);
	printf("c=%d\n", c = printf("ABC\n"));

	return 0;

}
*/

// 예제 4-7 : 복합 대입 연산자의 활용 [1/2]
/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)

{
	int items = 0;
	int pages = 0;
	int items_per_page = 0;

	printf("항목수? ");
	scanf("%d", &items);

	printf("한 페이지 당 항목수?");
	scanf("%d", &items_per_page);

	pages = items / items_per_page;
	items %= items_per_page;
	printf("%d 페이지와 %d 항목\n", pages, items);


	return 0;


}
*/

// 예제 4-8 : 관계 연산자의 사용 예

/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{

	int a = 0, b = 0;
	printf("두 개의 정수? ");
	scanf("%d%d", &a, &b);

	printf("%d > %d : %d\n", a, b, a > b);
	printf("%d < %d : %d\n", a, b, a < b);
	printf("%d >= %d : %d\n", a, b, a >= b);
	printf("%d <= %d : %d\n", a, b, a <= b);
	printf("%d == %d : %d\n", a, b, a >= b);
	printf("%d != %d : %d\n", a, b, a != b);
	return 0;

}
*/

// 예제 4-9: 논리 연산자의 사용 예

/*


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	int month;

	printf("몇 월? ");
	scanf("%d", &month);

	if (month >= 6 && month <= 8) printf("성수기 요금 적용\n");

	if (month < 6 || month > 8) printf("일반요금 적용\n");

	return 0;

}
*/

//구구단 while 문 
/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)

{
	int dan = 0, num = 1;
	printf("몇단 ?");
	scanf("%d", &dan);
	
	while (num<10)
	{
		printf("%d *%d =%d \n", dan, num, dan * num);
		num++;
	}

		return 0;
}
*/

// 문제 7-1 While 문 연습
/*


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)

{
	int num, i=0;

		printf("정수를 입력하면 Hello World가 정수 만큼 출력한다.");

		scanf("%d", &num);

		while (i<num)

		{
			printf("hellow world!\n");
			i++;
		}
		return 0;

}
*/

//예제 5-1 : if 의 사용 예
/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)

{
	int score;

	printf("퀴즈 점수를 입력하세요: ");
	scanf("%d", &score);

	if (score < 70)
		printf("재시!!!\n");

	printf("다음 수업은 일주일 후입니다.\n");

	return 0;


}
*/

/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	

int main(void)

{
	int score;

	printf("퀴즈 점수를 입력하세요: ");
	scanf("%d", &score);

	if (score < 70)
		printf("재시!!!\n");
	else
	{

		printf("통과!!!!\n");
			
	}

	return 0;

}
*/

//5-3  0으로 나누기 검사
/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	int x, y;

	printf("정수 2개를 입력하세요: ");
	scanf("%d %d", &x, &y);


	if (y != 0)
		printf("%d /%d = %f\n", x, y, (double)x / y);


	else

		printf("0으로 나눌 수 없습니다.\n");

	return 0;




}
*/

//5-4 else if 문 [1/2]
/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int age, fee;
	printf(" 나이 ? ");
	scanf("%d", &age);
	if (age >= 8)
		if (age >= 65) {
			fee = 5000;
		}
		else {
			fee = 10000;
		}
		else {
		fee = 0;
		}
	

	printf("입장료: %d\n", fee);
	return 0;

}
*/





























