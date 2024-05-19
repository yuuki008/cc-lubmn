#include <stdio.h>
#include <stdlib.h>

#define SIZE 256

void writeFile();
void readFile();
void readFile2();
void writeAndReadForBinary();

int main() {
  FILE *file;
  int i, size;
  char *rdata;

  file = fopen("./sample.bin", "rb");
  if (file == NULL) {
    printf("ファイルを開けませんでした\n");
    exit(1);
  }

  fseek(file, 0, SEEK_END);
  size = ftell(file);
  rdata = (char*)malloc(sizeof(char)*size);
  fseek(file, 0, SEEK_SET);
  fread(rdata, sizeof(char), size, file);
  fclose(file);

  for(i=0;i<size;i++) {
    printf("%x ", rdata[i]);
  }
  printf("\n");
}

void writeAndReadForBinary() {
  FILE *file;
  int i;

  char wdata[] = { 0x10, 0x1a, 0x1e, 0x1f };
  char rdata[4];

  file = fopen("./sample.bin", "wb");
  if (file == NULL) {
    printf("ファイルを開けませんでした\n");
    exit(1);
  }

  fwrite(wdata, sizeof(char), sizeof(wdata), file);
  fclose(file);

  file = fopen("./sample.bin", "rb");
  if (file == NULL) {
    printf("ファイルを開けませんでした\n");
    exit(1);
  }

  fread(rdata, sizeof(char), sizeof(rdata), file);
  fclose(file);

  for(i=0;i<sizeof(rdata);i++) {
    printf("%x ", rdata[i]);
  }
  printf("\n");
}

void readFile2() {
  FILE *file;
  int c;
  file = fopen("./sample.txt", "r");
  if (file == NULL) {
    printf("ファイルを開けませんでした\n");
    exit(1);
  }

  while ((c = fgetc(file)) != EOF) {
    printf("%c", (char)c);
  }
  fclose(file);
}


void readFile() {
  FILE *file;
  char line[SIZE];
  line[0] = '\0';
  file = fopen("./sample.txt", "r");

  if (file == NULL) {
    printf("ファイルを開けませんでした\n");
    exit(1);
  }

  while (fgets(line, SIZE, file) != NULL) {
    printf("%s", line);
  }

  fclose(file);
};

void writeFile() {
  FILE *file;
  file = fopen("./sample.txt", "w");
  if (file == NULL) {
    printf("ファイルを開けませんでした\n");
    exit(1);
  }

  fprintf(file, "Hello, World.\r\n");
  fprintf(file, "ABCDEF\r\n");
  fclose(file);
}