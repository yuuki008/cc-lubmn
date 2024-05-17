#include <stdio.h>

int main() {
  int num;

  printf("1から6までの数値を入力してください。\n");
  scanf("%d", &num);

  switch(num) {
    case 1:
      printf("one\n");
      break;
    case 2:
      printf("two\n");
      break;
    case 3:
      printf("three\n");
      break;
    case 4:
      printf("four\n");
      break;
    case 5:
      printf("five\n");
    case 6:
      printf("six\n");
    default:
      printf("範囲外の数値です。\n");
      break;
  }
}