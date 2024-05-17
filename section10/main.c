#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define PI 3.14

void randomAdd();
void calculateTrigonometricFunctions();
void demonstrateMathFunctions();
void demonstrateBitwiseOperators();

int main() {
  demonstrateBitwiseOperators();
  demonstrateMathFunctions();
  calculateTrigonometricFunctions();
  randomAdd();
  return 0;
}


void demonstrateBitwiseOperators() {
  unsigned char i = 0xf; // 2 進数: 00001111;
  unsigned char j = 0xff; // 2 進数: 11111111;

  printf("%x << 1 = %x\n", i, i << 1); // 00001111 << 1 = 00011110
  printf("%x >> 1 = %x\n", i, i >> 1); // 00001111 >> 1 = 00000111
  printf("%x | %x = %x\n", i, j, i | j); // 00001111 | 11111111 = 11111111
  printf("%x & %x = %x\n", i, j, i & j); // 00001111 & 11111111 = 00001111
  printf("%x ^ %x = %x\n", i, j, i ^ j); // 00001111 ^ 11111111 = 11110000
  printf("~%x = %x\n", i, ~i); // ~00001111 = 11110000
}



void demonstrateMathFunctions() {
  int n = -2;
  double d1 = -2.5, d2 = 4.0;

  printf("%dの絶対値は%dです。\n", n, abs(n));
  printf("%fの絶対値は%fです。\n", d1, fabs(d1));
  printf("%fの2乗は%fです。\n", d2, pow(d2, 2));
  printf("%fの平方根は%fです。\n", d2, sqrt(d2));
}


void calculateTrigonometricFunctions() {
  int angle;
  double rad;

  printf("角度を入力してください(0~360): ");
  scanf("%d", &angle);

  rad = angle * PI / 180;

  printf("sin(%d) = %f\n", angle, sin(rad));
  printf("cos(%d) = %f\n", angle, cos(rad));
  printf("tan(%d) = %f\n", angle, tan(rad));
}

void randomAdd() {
  int a, b;

  srand((unsigned)time(NULL));

  a = rand() % 10 + 1;
  b = rand() % 10 + 1;

  printf("%d + %d = %d\n", a, b, a+b);
}