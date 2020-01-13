#include <stdio.h>

/*
백준 단계별 풀기 2020_01_13 ~
*/

// 입출력
void num2557() {
	printf("Hello World!");
	return 0;
}

void num10718() {
	printf("강한친구 대한육군\n강한친구 대한육군");
	return 0;
}

void num10171() {
	printf("\\    /\\ \n )  ( ')\n(  /  )\n \\(__)|\n");
	return 0;
}

void num10869() {
    int a;
    int b;
    scanf("%d\n", &a);
    scanf("%d\n", &b);
    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    printf("%d\n", a / b);
    printf("%d\n", a % b);
    return 0;
}

// if문

void num1330() {
    int A;
    int B;
    scanf("%d", &A);
    scanf("%d", &B);
    if (A > B) {
        printf(">");
    }
    if (A < B) {
        printf("<");
    }
    if (A == B) {
        printf("==");
    }
    return 0;
}

void num9498() {
    int score;
    scanf("%d", &score);
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

    return 0;
}

void num2884() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (b < 45)
    {
        b += 60;
        a--;
        if (a < 0) a = 23;
    };
    printf("%d %d", a, b - 45);
}

// for문

void num2739() {
    int N = 0, i = 0;
    scanf("%d", &N);
    if (N < 1 && N > 9) {
        printf("1 ~ 9 사이의 정수값을 입력하세요\n");
    }
    else {
        for (i = 1; i <= 9; i++)
        {
            printf("%d * %d = %d\n", N, i, N * i);
        }
    }
    return 0;
}