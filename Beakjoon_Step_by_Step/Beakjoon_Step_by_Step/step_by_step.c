#include <stdio.h>

/*
���� �ܰ躰 Ǯ�� 2020_01_13 ~
*/

// �����
void num2557() {
	printf("Hello World!");
}

void num10718() {
    printf("����ģ�� ��������\n����ģ�� ��������");
}

void num10171() {
	printf("\\    /\\ \n )  ( ')\n(  /  )\n \\(__)|\n");
}

void num10172() {
    printf("|\\_/|\n|q p|   /}\n( 0 )\"\"\"\\ \n|\"^\"`    |\n||_/=\\\\__| ");
}

void num1000() {
    int A;
    int B;
    scanf_s("%d\n", &A);
    scanf_s("%d\n", &B);
    printf("%d\n" , A + B);
}

void num10869() {
    int a;
    int b;
    scanf_s("%d\n", &a);
    scanf_s("%d\n", &b);
    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    printf("%d\n", a / b);
    printf("%d\n", a % b);
}

void num10430() {
       int A, B, C;

        scanf("%d %d %d", &A, &B, &C);

        printf("%d\n", (A + B) % C);

        printf("%d\n", (A % C + B % C) % C);

        printf("%d\n", (A * B) % C);

        printf("%d\n", (A % C * B % C) % C);
}

// if��

void num1330() {
    int A;
    int B;
    scanf_s("%d", &A);
    scanf_s("%d", &B);
    if (A > B) {
        printf(">");
    }
    if (A < B) {
        printf("<");
    }
    if (A == B) {
        printf("==");
    }
}

void num9498() {
    int score;
    scanf_s("%d", &score);
    if (score <= 100 && score >= 90) {
        printf("A");
    }
    if (score <= 89 && score >= 80) {
        printf("B");
    }
    if (score <= 79 && score >= 70) {
        printf("C");
    }
    if (score <= 69 && score >= 60) {
        printf("D");
    }
    if (score <= 59 && score >= 0) {
        printf("F");
    }

}

void num2884() {
    int a, b;
    scanf_s("%d %d", &a, &b);
    if (b < 45)
    {
        b += 60;
        a--;
        if (a < 0) a = 23;
    };
    printf("%d %d", a, b - 45);
}

// for��

void num2739() {
    int N = 0, i = 0;
    scanf_s("%d", &N);
    if (N < 1 && N > 9) {
        printf("1 ~ 9 ������ �������� �Է��ϼ���\n");
    }
    else {
        for (i = 1; i <= 9; i++)
        {
            printf("%d * %d = %d\n", N, i, N * i);
        }
    }
}

//윤년
void num2753(){
    int Year = 0;
    printf("윤년계산 프로그램\n");
    printf("연도를 입력하세요 : ");
    scanf_s("%d", &Year);
    if (Year < 4) {printf("\nerror");}
    if (Year % 4 == 0 && Year % 100 != 0){
        printf("\n1");
    }
    else{
        printf("\n0");
    }
}
int main() {
    void num2753();
    return 0;
}

// 별찍기 5
#include<stdio.h>
int main() {
	int i, j,k,n;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		k = 2 * i + 1; //별의 갯수는 행*2 + 1 개.
		for (j = 0; j < 2*n-1; j++) {
			if (j < (2*n-1 - k) / 2)  // 예시를 보고 빈공간의 수를 파악
				printf(" ");
		}
		for (j = 0; j < k; j++) { //별의 갯수만큼 출력 
			printf("*");
		}
		printf("\n");
	}
}