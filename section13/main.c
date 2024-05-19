#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cpy_cat_len();
int cmp();

int main () {
  char s1[256], s2[256];
  int a = 100, b = 200;
  sprintf(s1, "%d", a);
  sprintf(s2, "bの値は%dです。", b);
  puts(s1);
  puts(s2);

  return 0;
}

int str_to_num () {
  char s1[] = "1000";
  char s2[] = "12.345";
  int a;
  double b;

  a = atoi(s1);
  b = atof(s2);

  printf("a=%d b=%f\n", a, b);

  return 0;
}
int cmp() {
  char s1[256], s2[256];
  printf("s1=");
  scanf("%s", s1);
  printf("s2=");
  scanf("%s", s2);
  if(strcmp(s1, s2) == 0) {
    printf("s1とs2は等しい\n");
  } else {
    printf("s1とs2は等しくない\n");
  }

  return 0;
}

int cpy_cat_len() {
  char s[10];
  int len;

  strcpy(s, "ABC");
  printf("s=%s\n", s);

  strcat(s, "DEF");
  printf("s=%s\n", s);

  len = strlen(s);
  printf("len=%d\n", len);

  return 0;
}