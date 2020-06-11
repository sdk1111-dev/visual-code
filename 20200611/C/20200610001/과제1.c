// 문제 1
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int get_perimeter(int a, int	b)
{
	int r = 0;
	r = 2 * (a + b);
	return r;

}

int main(void)

{
	int a,b;
	printf("가로 입력: ");
	scanf("%d", &a);
	printf("세로 입력: ");
	scanf("%d", &b);
	printf("사각형의 둘레의 합은: %d\n", get_perimeter(a,b));
	return 0;

}
*/

// 문제 2
/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int get_square(double x)
{
	double result = 0;
	result = x * x;
	return result;

}

int main(void)
{
	double c;
	printf("정사각형 한변의 길이 입력:");
	scanf("%lf", &c);
	printf("정사각형 면적은: %d", get_square(c));
	return 0;
}
*/

// 문제 3
/*


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


double distance(int x1, int y1, int x2, int y2)
{
	int a1 = x2 - x1, b1 = y2 - y1;
	double result = sqrt((a1 * a1) + (b1 * b1));
	return result;
}

int main(void)
{
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	double distance1;
	
	printf("두 직선의 시작점 좌표? :");
	scanf("%d %d", &x1, &y1);
	printf("두 직선의 끝점 좌표? :");
	scanf("%d %d", &x2, &y2);
	distance1 = distance(x1, y1, x2, y2);
	printf("%d, %d)~(%d, %d)직선의 길이 : %lf\n", x1, y1, x2, y2, distance1);

	return 0;

}
*/

//문제 4 제품의 가격과 할인율 입력시 할인가 출력
/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int discount_price(int price, int disc)
{
	return price / 100 * (100 - disc);
}

int main(void)
{
	int per, price;
	printf("할인율?");
	scanf("%d", &per);

	while (1)
	{
		printf("판매가격?");
		scanf("%d", &price);

		if (price == 0) break;
		printf("할인가격: %d\n", discount_price(price, per));


	}
	return 0;

}*/

// 문제 5
/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int is_even(int n)
{
	return (n % 2 == 0);
}
int is_odd(int n)
{
	return (n % 2 == 1);
}
  
int main(void)

{
	int n, e_cnt = 0, o_cnt = 0;
	printf("숫자 입력:");
	
	while (1)
	{
		

		
		scanf("%d", &n);
		if (n == 0)	break;

		if (is_even(n)) e_cnt++;
		if (is_odd(n))	o_cnt++;

	}
	printf("짝수 :%d개 홀수 :%d개\n", e_cnt, o_cnt);
	return 0;
		
}
*/

//문제 6
/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>	

int choose_menu()
{
	int menu = 0;

	printf("[1. 파일열기 2. 파일저장 3. 인쇄 0. 종료]선택 ?");
	scanf("%d", &menu);

	if (menu >= 4)
	{
		printf("[1. 파일열기 2. 파일저장 3. 인쇄 0. 종료]선택 ?");
		scanf("%d", &menu);
	}
	return menu;
}

int main(void)

{
	int menu = 5;
	menu = choose_menu;
	while (menu!=0)
	{
		switch (menu)
		{
		case 1:
			printf("파일 열기를 수행합니다.\n");
			break;

		case 2:
			printf("파일 저장을 수행합니다.\n");
			break;
		case 3:
			printf("인쇄를 수행합니다.\n");
			break;
		default:
			break;
		}
		menu = choose_menu();
		

	}
	printf("프로그램을 종료합니다.");
	return 0;
}
*/
//문제 7

/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int is_prime(int n)
{
	int divisors = 0, i;

	for (i = 1; i <= n; i++)
		if (n % i == 0) divisors++;

	return (divisors == 2);
}

int main(void)

{

	int n, i, cnt = 0;

	printf("숫자입력:");
	scanf(" %d", &n);

	for (i=1; i<=n; i++)
	{
		if (is_prime(i)) 
		{
			printf("%d", i);
			cnt++;
		}
	}

		printf("\n소수는 총%d개 \n", cnt);

		return 0;

}
*/

//문제 8
/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int num[10], i, sum = 0;

	srand((unsigned int)time(NULL));

	for (i = 0; i < 10; i++) {
		num[i] = rand() % 100;
		printf("%d ", num[i]);
		sum += num[i];
	}

	printf("\n합계 : %d\n", sum);

	return 0;
}
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void  print_intro_mesg(); //시작 메세지
double read_val(); //입력하란 말과, 첫번째와 두번째 숫자 입력받음.
char read_operator(); // 연산자를 받아드림.
int check_val(char opt, double val2); //나누기에서 오류검사.
double calculator(double val1, double val2, char opt);//계산하여 계산값 반환.
void print_result(double val1, double val2, char opt, double res);//계산값 알려주는 함수.
void print_final_mesg();//끝 알림 메세지.

main() {
	double val1, val2, res;
	char opt;

	print_intro_mesg(); // 첫 메세지 프린트.

	while ((val1 = read_val()) != 000) {
		opt = read_operator();
		val2 = read_val();
		if (check_val(opt, val2)) {
			continue;
		}
		res = calculator(val1, val2, opt);
		print_result(val1, val2, opt, res);
	}
	print_final_mesg();

}

void print_intro_mesg() {

	printf("****************************************************************\n");
	printf("*           계 산 기   프 로 그 램                             *\n");
	printf("****************************************************************\n");
	printf("*          - 작동방법 -                                        *\n");
	printf("*숫자 연산자 숫자 (ex 3.1 * 4.2) 을 입력하면 결과를 출력합니다.*\n");
	printf("* 000를 입력하면 프로그램이 종료됩니다.                        *\n");
	printf("****************************************************************\n");


}

double read_val() {
	double val1;

	static int cnt = 1; // 한번 초기화 하고 계속 저장시킨다.

	if (cnt % 2 != 0) {
		printf("%d.수식어를 입력하시오. : ", cnt / 2 + 1); //1=>1,3=>2....
	}
	scanf("%lf", &val1);
	cnt++;
	return val1;

}



char read_operator() {

	char sic; //연산자 저장

	while (1) { //지정된 연사자가 나올때까지 무한루프.

		scanf("%c", &sic);
		if (sic == '/' || sic == '+' || sic == '-' || sic == '*')
			break;
	}
	return sic;



}

int check_val(char opt, double val2) {

	if (opt == '/' && val2 == 0) { //나누기 나올때  val2 이 0이면 실행.
		printf("[오류]나누는 수가 0이므로 계산할 수 없습니다.\n");
		return 1;
	}

	return 0;

}


double calculator(double val1, double val2, char opt) {
	double res;

	switch (opt) { // 연산자 골라서~ 계산.
	case '+':
		res = val1 + val2;
		break;

	case '-':
		res = val1 - val2;
		break;

	case '/':
		res = val1 / val2;
		break;

	case '*':
		res = val1 * val2;
		break;

	}

	return res;
}



void print_result(double val1, double val2, char opt, double res) {

	printf("결과 : %g %c %g의 결과는 %g입니다.\n", val1, opt, val2, res); //%g는 소수점 0.0000을 마춰주는 것.
}

void print_final_mesg() {

	printf("\n********************************************************\n");
	printf("*         계산기 프로그램을 종료합니다.                  *\n");
	printf("**********************************************************\n");
}


