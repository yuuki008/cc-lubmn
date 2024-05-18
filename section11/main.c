#include <stdio.h>

void show(int n1, int n2, int n3);
void byte_and_address();
void manipulate_pointers();
void swap(int* num1, int* num2);

int main () {
  int a = 1, b = 2;

  printf("a = %d, b = %d\n", a, b);
  swap(&a, &b);
  printf("a = %d, b = %d\n", a, b);

  return 0;
}

void swap(int* num1, int* num2) {
  int tmp = *num1;
  *num1 = *num2;
  *num2 = tmp;
}

void manipulate_pointers() {
  int a = 100;
  int b = 200;
  int *p = NULL; // int 型のポインタ変数
  p = &a;
  printf("p=&a\n");
  show(a, b, *p);
  *p = 300;
  printf("*p=300\n");
  show(a, b, *p);
  p = &b;
  printf("p=&b\n");
  show(a, b, *p);
  *p = 400;
  printf("*p=400\n");
  show(a, b, *p);
}

void show(int n1, int n2, int n3) {
  printf("a = %d, b = %d, *p = %d\n", n1, n2, n3);
}


void byte_and_address() {
  int a = 100;
  double b = 123.4;
  float c = 123.4f;
  char d = 'a';

  printf("aの値は%d, 大きさは%dbyte, アドレスは0x%x\n", a, sizeof(a), &a);
  printf("bの値は%f, 大きさは%dbyte, アドレスは0x%x\n", b, sizeof(b), &b);
  printf("cの値は%f, 大きさは%dbyte, アドレスは0x%x\n", c, sizeof(c), &c);
  printf("dの値は%c, 大きさは%dbyte, アドレスは0x%x\n", d, sizeof(d), &d);
}

