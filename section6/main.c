# include <stdio.h>

int main() {
  int i,j,num;

  printf("回数を入力: ");
  scanf("%d", &num);

  printf("二重 for ループ\n");
  for (i=1; i<=num; i++) {
    for (j=1; j<=num; j++) {
      printf("%d+%d=%d ", i,j,i+j);
    };
    printf("\n");
  };

  printf("while ループ\n");
  i=1;
  while (i<=num) {
    printf("*");
    i++;
  }

  printf("\n");

  printf("do while ループ\n");
  i=1;
  do {
    printf("*");
    i++;
  } while (i<=num);

  printf("\n");

  printf("負の値でループから抜けます。\n");
  while(1) {
    printf("数値を入力: ");
    scanf("%d", &num);

    if (num<0) {
      break;
    }
  }
  printf("終了\n");

  return 0;
}

