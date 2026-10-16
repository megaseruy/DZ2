/* 1.56
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double v1;
	double v2;
	double s;
	double z;

	scanf("%lf", &v1);
	scanf("%lf", &v2);
	scanf("%lf", &s);

	z = (v1 - v2) * 0.5 + s;
}
*/
/*1.57
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double temp;
	double far;
	double kel;

	scanf("%lf", &temp);

	far = temp * 1.8 + 32;
	kel = temp - 273.15;

	printf("far=%lf\n", far);
	printf("kel=%lf", kel);

}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double far = 450;
	double temp = (far - 32) / 1.8;
}
*/
/*1.61 a
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double a;
	scanf("%lf", &a);
	a = a * a;
	a = a * a;

}*/
/*1.61 б
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double a;
	double b;
	scanf("%lf", &a);
	a = a * a;
	b = a * a;
	a = b * a;
}
*/
/* 1.61 в
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double a;
	double a2;
	double a4;
	double a6;
	double a7;
	scanf("%lf", &a);
	a2 = a * a;
	a4 = a2 * a2;
	a6 = a4 * a2;
	a7 = a6 * a;

}
*/
/* 1.61 г
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double a;
	double a2;
	double a4;
	double a8;
	scanf("%lf", &a);
	a2 = a * a;
	a4 = a2 * a2;
	a8 = a4 * a4;
}*/
/* 1.61д
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double a;
	double a2;
	double a4;
	double a8;
	double a9;
	scanf("%lf", &a);
	a2 = a * a;
	a4 = a2 * a2;
	a8 = a4 * a4;
	a9 = a8 * a;
}*/
/*1.61 e
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double a;
	double a2;
	double a4;
	double a8;
	double a10;
	scanf("%lf", &a);
	a2 = a * a;
	a4 = a2 * a2;
	a8 = a4 * a4;
	a10 = a8 * a2;
}*/
/*1.61 ж
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double a;
	double a2;
	double a4;
	double a8;
	double a12;
	double a13;
	scanf("%lf", &a);
	a2 = a * a;
	a4 = a2 * a2;
	a8 = a4 * a4;
	a12 = a8 * a4;
	a13 = a12 * a;
}*/
/*1.61 з
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double a;
	double a2;
	double a3;
	double a5;
	double a10;
	double a15;
	scanf("%lf", &a);
	a2 = a * a;
	a3 = a2 * a;
	a5 = a3 * a2;
	a10 = a5 * a5;
	a15 = a10 * a5;
}*/
/*1.61 и
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double a;
	double a2;
	double a3;
	double a5;
	double a10;
	double a20;
	double a21;
	scanf("%lf", &a);
	a2 = a * a;
	a3 = a2 * a;
	a5 = a3 * a2;
	a10 = a5 * a5;
	a20 = a10 * a10;
	a21 = a20 * a;
}*/
/*1.61 к
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double a;
	double a2;
	double a3;
	double a4;
	double a7;
	double a14;
	double a28;
	scanf("%lf", &a);
	a2 = a * a;
	a3 = a2 * a;
	a4 = a2 * a2;
	a7 = a4 * a3;
	a14 = a7 * a7;
	a28 = a14 * a14;
}*/
/*1.61 л
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double a;
	double a2;
	double a4;
	double a8;
	double a16;
	double a32;
	double a64;
	scanf("%lf", &a);
	a2 = a * a;
	a4 = a2 * a2;
	a8 = a4 * a4;
	a16 = a8 * a8;
	a32 = a16 * a16;
	a64 = a32 * a32;
}*/
/* 1.62 a
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double a;
	double a2;
	double a3;
	double a5;
	double a10;
	scanf("%lf", &a);
	a2 = a * a;
	a3 = a2 * a;
	a5 = a3	 * a2;
	a10 = a5 * a5;
}*/
/*1.62 б
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double a;
	double a2;
	double a4;
	double a5;
	double a10;
	double a20;
	scanf("%lf", &a);
	a2 = a * a;
	a4 = a2 * a2;
	a5 = a4 * a;
	a10 = a5 * a5;
	a20=a10*a10
}*/
/* 1.62 в
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double a;
	double a2;
	double a3;
	double a5;
	double a8;
	double a13;
	scanf("%lf", &a);
	a2 = a * a;
	a3 = a2 * a;
	a5 = a3 * a2;
	a8 = a5 * a3;
	a13 = a8 * a5;
}*/
/*1.62 д
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double a;
	double a2;
	double a3;
	double a5;
	double a6;
	double a11;
	double a17;
	scanf("%lf", &a);
	double a2 = a * a;
	double a3 = a2 * a;
	double a5 = a3 * a2;
	double a6 = a5 * a;    
	double a11 = a6 * a5;
	double a17 = a11 * a6;
}*/
/* 1.62 e
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double a;
	double a2;
	double a4;
	double a6;
	double a12;
	double a14;
	double a28;
	scanf("%lf", &a);
	double a2 = a * a; 
	double a4 = a2 * a2;
	double a6 = a4 * a2;
	double a12 = a6 * a6;
	double a14 = a12 * a2;
	double a28 = a14 * a14;
}*/
/*2.15
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n, a, b, c, result;
	scanf("%d", &n);
	if (n < 100 || n > 999) {
		return 1;
	}

	
	a = n / 100;
	b = (n / 10) % 10;
	c = n % 10;

	result = c * 100 + a * 10 + b;

	printf("result =%d\n", result);
}
*/
/* 2.16
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n, a, b, c, result;
	scanf("%d", &n);
	if (n < 100 || n > 999) {
		return 1;
	}


	a = n / 100;
	b = (n / 10) % 10;
	c = n % 10;

	result = b * 100 + a * 10 + c;

	printf("result =%d\n", result);

	return 0;
}*/
/* 2.17
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() 
{
	int n, a, b, c, result;
	scanf("%d", &n);
	if (n < 100 || n > 999) {
		return 1;
	}


	a = n / 100;
	b = (n / 10) % 10;
	c = n % 10;

	result = a * 100 + c * 10 + b;

	printf("result =%d\n", result);

}*/
/* 2.24
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	for (int x = 100; x <= 999; x++) {
		int last = x % 10;
		int a = x - last;
		int b = a / 10;
		int result = (last * 100) + b;

		if (result == 237) {
			printf("Искомое число x = %d\n", x);
		}
	}
}*/
/* 2.25
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int n;
	scanf("%d", &n);
	for (int x = 100; x <= 999; x++) {
		int last = x % 10;
		int a = x - last;
		int b = a / 10;
		int result = (last * 100) + b;

		if (result == n) {
			printf("Искомое число x = %d\n", x);
		}
	}
}*/
/* 2.26
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	for (int x = 100; x <= 999; x++) {
		int first = x / 100;
		int a = x - first*100;
		int b = a * 10;
		int result = first  + b;

		if (result == 564) {
			printf("Искомое число x = %d\n", x);
		}
	}
}*/
/* 2.27
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int x = 100; x <= 999; x++) {
		int first = x / 100;
		int a = x - first * 100;
		int b = a * 10;
		int result = first + b;

		if (result == n) {
			printf("Искомое число x = %d\n", x);
		}
	}
}
*/
/*2.28
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{	
	for (int x = 100; x <= 999; x++) {
		int second = (x/10)%10;
		int a = x%10;
		int b = x/100;
		int result = second*100+ b*10 + a;

		if (result == 546) {
			printf("Искомое число x = %d\n", x);
		}
	}
}
*/
/* 2.29
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int x = 100; x <= 999; x++) {
		int second = (x / 10) % 10;
		int a = x % 10;
		int b = x / 100;
		int result = second * 100 + b * 10 + a;

		if (result == 546) {
			printf("Искомое число x = %d\n", x);
		}
	}
}
*/
/* 2.30
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	for (int x = 100; x <= 999; x++) {
		int second = (x / 10) % 10;
		int a = x % 10;
		int b = x / 100;
		int result =  b * 100 + a *10  + second;

		if (result == 456) {
			printf("Искомое число x = %d\n", x);
		}
	}
}
*/
/*3.15 a
#include <stdio.h>
#include <stdbool.h>

int main() {

	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			bool A = (bool)a;
			bool B = (bool)b;
			bool result = !A || !B;

			printf("%d | %d |	%d\n", a, b, result);
		}
	}
}
*/
/*3.15  б
#include <stdio.h>
#include <stdbool.h>

int main() {
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			bool A = (bool)a;
			bool B = (bool)b;
			bool result = !A && (A || !B);

			printf("%d | %d |	%d\n", a, b, result);
		}
	}
}
*/
/*3.15 в
#include <stdio.h>
#include <stdbool.h>

int main() {
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			bool A = (bool)a;
			bool B = (bool)b;
			bool result = (!A  || B) && B;

			printf("%d | %d |	%d\n", a, b, result);
		}
	}
}
*/
/*3.16 a
#include <stdio.h>
#include <stdbool.h>

int main() {
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			bool X = (bool)a;
			bool Y = (bool)b;
			bool result = !X && !Y;

			printf("%d | %d |	%d\n", a, b, result);
		}
	}
}
*/
/* 3.16 б
#include <stdio.h>
#include <stdbool.h>

int main() {
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			bool X = (bool)a;
			bool Y = (bool)b;
			bool result = X || (!X && Y);

			printf("%d | %d |	%d\n", a, b, result);
		}
	}
}
*/
/* 3.16 в
#include <stdio.h>
#include <stdbool.h>

int main() {
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			bool X = (bool)a;
			bool Y = (bool)b;
			bool result = (!X && Y) || Y;

			printf("%d | %d |	%d\n", a, b, result);
		}
	}
}
*/
/* 3.17a
#include <stdio.h>
#include <stdbool.h>

int main() {
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			bool A = (bool)a;
			bool B = (bool)b;
			bool result = (!A && !B) || A;

			printf("%d | %d |	%d\n", a, b, result);
		}
	}
}
*/
/* 3.17 б
#include <stdio.h>
#include <stdbool.h>

int main() {
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			bool A = (bool)a;
			bool B = (bool)b;
			bool result = (B || !A) && !B;

			printf("%d | %d |	%d\n", a, b, result);
		}
	}
}
*/
/* 3.17 в
#include <stdio.h>
#include <stdbool.h>

int main() {
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			bool A = (bool)a;
			bool B = (bool)b;
			bool result = !B && !(A && !B);

			printf("%d | %d |	%d\n", a, b, result);
		}
	}
}
*/
/* 3.18 а
#include <stdio.h>
#include <stdbool.h>

int main() {
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			bool X = (bool)a;
			bool Y = (bool)b;
			bool result = !(X && !Y) || X;

			printf("%d | %d |	%d\n", a, b, result);
		}
	}
}
*/
/* 3.18б
#include <stdio.h>
#include <stdbool.h>

int main() {
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			bool X = (bool)a;
			bool Y = (bool)b;
			bool result = (!X && Y) || !Y;

			printf("%d | %d |	%d\n", a, b, result);
		}
	}
}
*/
/* 3.18в
#include <stdio.h>
#include <stdbool.h>

int main() {
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			bool X = (bool)a;
			bool Y = (bool)b;
			bool result = (!X && !Y) || Y;

			printf("%d | %d |	%d\n", a, b, result);
		}
	}
}
*/
/*3.19 a
#include <stdio.h>
#include <stdbool.h>

int main() {
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			bool A = (bool)a;
			bool B = (bool)b;
			bool result = !(!A && !B) && A;

			printf("%d | %d |	%d\n", a, b, result);
		}
	}
}
*/
/* 3.19б
#include <stdio.h>
#include <stdbool.h>

int main() {
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			bool A = (bool)a;
			bool B = (bool)b;
			bool result = !(!A || !B) || A;

			printf("%d | %d |	%d\n", a, b, result);
		}
	}
}
*/
/*3.19в
#include <stdio.h>
#include <stdbool.h>

int main() {
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			bool A = (bool)a;
			bool B = (bool)b;
			bool result = !(!A || !B) && B;

			printf("%d | %d |	%d\n", a, b, result);
		}
	}
}
*/
/* 3.20a
#include <stdio.h>
#include <stdbool.h>

int main() {
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			bool X = (bool)a;
			bool Y = (bool)b;
			bool result = !(!X || Y) || !X;

			printf("%d | %d |	%d\n", a, b, result);
		}
	}
}
*/
/* 3.20б
#include <stdio.h>
#include <stdbool.h>

int main() {
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			bool X = (bool)a;
			bool Y = (bool)b;
			bool result = !(!X && !Y) && X;

			printf("%d | %d |	%d\n", a, b, result);
		}
	}
}
*/
/* 3.20в
#include <stdio.h>
#include <stdbool.h>

int main() {
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			bool X = (bool)a;
			bool Y = (bool)b;
			bool result = !(X || !Y) || !Y;

			printf("%d | %d |	%d\n", a, b, result);
		}
	}
}
*/
/*3.21a
#include <stdio.h>
#include <stdbool.h>

int main() 
{
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			for (int c = 0; c <= 1; c++) {
				bool A = (bool)a;
				bool B = (bool)b;
				bool C = (bool)c;

				bool result = !(A || (!B && C));

				printf("%d | %d | %d |   %d\n", a, b, c, result);
			}
		}
	}
}
*/
/*3.21б
#include <stdio.h>
#include <stdbool.h>

int main()
{
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			for (int c = 0; c <= 1; c++) {
				bool A = (bool)a;
				bool B = (bool)b;
				bool C = (bool)c;

				bool result = A && !(B || !C);

				printf("%d | %d | %d |   %d\n", a, b, c, result);
			}
		}
	}
}
*/
/*3.21в
#include <stdio.h>
#include <stdbool.h>

int main()
{
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			for (int c = 0; c <= 1; c++) {
				bool A = (bool)a;
				bool B = (bool)b;
				bool C = (bool)c;

				bool result = !(!A || (B && C));

				printf("%d | %d | %d |   %d\n", a, b, c, result);
			}
		}
	}
}
*/
/*3.22a
#include <stdio.h>
#include <stdbool.h>

int main()
{
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			for (int c = 0; c <= 1; c++) {
				bool X = (bool)a;
				bool Y = (bool)b;
				bool Z = (bool)c;

				bool result = !(X || (!Y && Z));

				printf("%d | %d | %d |   %d\n", a, b, c, result);
			}
		}
	}
}
*/
/*3.22б
#include <stdio.h>
#include <stdbool.h>

int main()
{
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			for (int c = 0; c <= 1; c++) {
				bool X = (bool)a;
				bool Y = (bool)b;
				bool Z = (bool)c;

				bool result = Y || (X && !Y || Z));

				printf("%d | %d | %d |   %d\n", a, b, c, result);
			}
		}
	}
}
*/
/*3.22в
#include <stdio.h>
#include <stdbool.h>

int main()
{
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			for (int c = 0; c <= 1; c++) {
				bool X = (bool)a;
				bool Y = (bool)b;
				bool Z = (bool)c;

				bool result = !(!X && Y || Z));

				printf("%d | %d | %d |   %d\n", a, b, c, result);
			}
		}
	}
}
*/

/*3.23a
#include <stdio.h>
#include <stdbool.h>

int main()
{
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			for (int c = 0; c <= 1; c++) {
				bool A = (bool)a;
				bool B = (bool)b;
				bool C = (bool)c;

				bool result = !(!A || !B && C) || C;

				printf("%d | %d | %d |   %d\n", a, b, c, result);
			}
		}
	}
}
*/
/*3.23б
#include <stdio.h>
#include <stdbool.h>

int main()
{
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			for (int c = 0; c <= 1; c++) {
				bool A = (bool)a;
				bool B = (bool)b;
				bool C = (bool)c;

				bool result = !(A && !B || C) && C;

				printf("%d | %d | %d |   %d\n", a, b, c, result);
			}
		}
	}
}
*/
/*3.23в
#include <stdio.h>
#include <stdbool.h>

int main()
{
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			for (int c = 0; c <= 1; c++) {
				bool A = (bool)a;
				bool B = (bool)b;
				bool C = (bool)c;

				bool result = !(A && !B || C) || A;

				printf("%d | %d | %d |   %d\n", a, b, c, result);
			}
		}
	}
}
*/
/*3.24a
#include <stdio.h>
#include <stdbool.h>

int main()
{
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			for (int c = 0; c <= 1; c++) {
				bool X = (bool)a;
				bool Y = (bool)b;
				bool Z = (bool)c;

				bool result = !(!Y || !X && Z) && Z;

				printf("%d | %d | %d |   %d\n", a, b, c, result);
			}
		}
	}
}
*/
/*3.24б
#include <stdio.h>
#include <stdbool.h>

int main()
{
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			for (int c = 0; c <= 1; c++) {
				bool X = (bool)a;
				bool Y = (bool)b;
				bool Z = (bool)c;

				bool result = X && !(!Y || Z) || Y;

				printf("%d | %d | %d |   %d\n", a, b, c, result);
			}
		}
	}
}
*/
/*3.24в
#include <stdio.h>
#include <stdbool.h>

int main()
{
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			for (int c = 0; c <= 1; c++) {
				bool X = (bool)a;
				bool Y = (bool)b;
				bool Z = (bool)c;

				bool result = !(X || Y && Z) || !X;

				printf("%d | %d | %d |   %d\n", a, b, c, result);
			}
		}
	}
}
*/

/*3.25a
#include <stdio.h>
#include <stdbool.h>

int main()
{
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			for (int c = 0; c <= 1; c++) {
				bool A = (bool)a;
				bool B = (bool)b;
				bool C = (bool)c;

				bool result = !(A && B) && (!A || !C);

				printf("%d | %d | %d |   %d\n", a, b, c, result);
			}
		}
	}
}
*/
/*3.25б
#include <stdio.h>
#include <stdbool.h>

int main()
{
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			for (int c = 0; c <= 1; c++) {
				bool A = (bool)a;
				bool B = (bool)b;
				bool C = (bool)c;

				bool result = !(A && !B) || (A || !C);

				printf("%d | %d | %d |   %d\n", a, b, c, result);
			}
		}
	}
}
*/
/*3.25в
#include <stdio.h>
#include <stdbool.h>

int main()
{
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			for (int c = 0; c <= 1; c++) {
				bool A = (bool)a;
				bool B = (bool)b;
				bool C = (bool)c;

				bool result = A && !B || !(A || !C);

				printf("%d | %d | %d |   %d\n", a, b, c, result);
			}
		}
	}
}
*/