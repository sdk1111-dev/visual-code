// ���� 1
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
	printf("���� �Է�: ");
	scanf("%d", &a);
	printf("���� �Է�: ");
	scanf("%d", &b);
	printf("�簢���� �ѷ��� ����: %d\n", get_perimeter(a,b));
	return 0;

}
*/

// ���� 2
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
	printf("���簢�� �Ѻ��� ���� �Է�:");
	scanf("%lf", &c);
	printf("���簢�� ������: %d", get_square(c));
	return 0;
}
*/

// ���� 3
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
	
	printf("�� ������ ������ ��ǥ? :");
	scanf("%d %d", &x1, &y1);
	printf("�� ������ ���� ��ǥ? :");
	scanf("%d %d", &x2, &y2);
	distance1 = distance(x1, y1, x2, y2);
	printf("%d, %d)~(%d, %d)������ ���� : %lf\n", x1, y1, x2, y2, distance1);

	return 0;

}
*/

//���� 4 ��ǰ�� ���ݰ� ������ �Է½� ���ΰ� ���
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
	printf("������?");
	scanf("%d", &per);

	while (1)
	{
		printf("�ǸŰ���?");
		scanf("%d", &price);

		if (price == 0) break;
		printf("���ΰ���: %d\n", discount_price(price, per));


	}
	return 0;

}*/

// ���� 5
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
	printf("���� �Է�:");
	
	while (1)
	{
		

		
		scanf("%d", &n);
		if (n == 0)	break;

		if (is_even(n)) e_cnt++;
		if (is_odd(n))	o_cnt++;

	}
	printf("¦�� :%d�� Ȧ�� :%d��\n", e_cnt, o_cnt);
	return 0;
		
}
*/

//���� 6
/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>	

int choose_menu()
{
	int menu = 0;

	printf("[1. ���Ͽ��� 2. �������� 3. �μ� 0. ����]���� ?");
	scanf("%d", &menu);

	if (menu >= 4)
	{
		printf("[1. ���Ͽ��� 2. �������� 3. �μ� 0. ����]���� ?");
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
			printf("���� ���⸦ �����մϴ�.\n");
			break;

		case 2:
			printf("���� ������ �����մϴ�.\n");
			break;
		case 3:
			printf("�μ⸦ �����մϴ�.\n");
			break;
		default:
			break;
		}
		menu = choose_menu();
		

	}
	printf("���α׷��� �����մϴ�.");
	return 0;
}
*/
//���� 7

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

	printf("�����Է�:");
	scanf(" %d", &n);

	for (i=1; i<=n; i++)
	{
		if (is_prime(i)) 
		{
			printf("%d", i);
			cnt++;
		}
	}

		printf("\n�Ҽ��� ��%d�� \n", cnt);

		return 0;

}
*/

//���� 8
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

	printf("\n�հ� : %d\n", sum);

	return 0;
}
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void  print_intro_mesg(); //���� �޼���
double read_val(); //�Է��϶� ����, ù��°�� �ι�° ���� �Է¹���.
char read_operator(); // �����ڸ� �޾Ƶ帲.
int check_val(char opt, double val2); //�����⿡�� �����˻�.
double calculator(double val1, double val2, char opt);//����Ͽ� ��갪 ��ȯ.
void print_result(double val1, double val2, char opt, double res);//��갪 �˷��ִ� �Լ�.
void print_final_mesg();//�� �˸� �޼���.

main() {
	double val1, val2, res;
	char opt;

	print_intro_mesg(); // ù �޼��� ����Ʈ.

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
	printf("*           �� �� ��   �� �� �� ��                             *\n");
	printf("****************************************************************\n");
	printf("*          - �۵���� -                                        *\n");
	printf("*���� ������ ���� (ex 3.1 * 4.2) �� �Է��ϸ� ����� ����մϴ�.*\n");
	printf("* 000�� �Է��ϸ� ���α׷��� ����˴ϴ�.                        *\n");
	printf("****************************************************************\n");


}

double read_val() {
	double val1;

	static int cnt = 1; // �ѹ� �ʱ�ȭ �ϰ� ��� �����Ų��.

	if (cnt % 2 != 0) {
		printf("%d.���ľ �Է��Ͻÿ�. : ", cnt / 2 + 1); //1=>1,3=>2....
	}
	scanf("%lf", &val1);
	cnt++;
	return val1;

}



char read_operator() {

	char sic; //������ ����

	while (1) { //������ �����ڰ� ���ö����� ���ѷ���.

		scanf("%c", &sic);
		if (sic == '/' || sic == '+' || sic == '-' || sic == '*')
			break;
	}
	return sic;



}

int check_val(char opt, double val2) {

	if (opt == '/' && val2 == 0) { //������ ���ö�  val2 �� 0�̸� ����.
		printf("[����]������ ���� 0�̹Ƿ� ����� �� �����ϴ�.\n");
		return 1;
	}

	return 0;

}


double calculator(double val1, double val2, char opt) {
	double res;

	switch (opt) { // ������ ���~ ���.
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

	printf("��� : %g %c %g�� ����� %g�Դϴ�.\n", val1, opt, val2, res); //%g�� �Ҽ��� 0.0000�� �����ִ� ��.
}

void print_final_mesg() {

	printf("\n********************************************************\n");
	printf("*         ���� ���α׷��� �����մϴ�.                  *\n");
	printf("**********************************************************\n");
}


