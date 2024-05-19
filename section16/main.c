#include <stdio.h>
#include "studentDatabase.h"
#include "dataOutput.h"

int main() {
  int i;
  char names[][LENGTH] = { "山田太郎","鈴木花子","田中次郎","山本美智子" };
  int ids[] = { 1,2,2,3 };
  initDatabase();

  for (i = 0; i < 4; i++) {  //  登録
    add(ids[i], names[i]);
    printf("登録 %d %s\n", ids[i], names[i]);
    showError();
  }

  for (i = 0; i < 3; i++) {
    showStudentData(get(i + 1));
  }
}