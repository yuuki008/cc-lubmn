# ポインタ変数

ポインタは、変数のメモリアドレスを表す。

`int`型のポインタは`int*`となる。

変数のメモリアドレスは、`&`で取得できる。
ポインタ変数の値は、`*`で取得できる。

ポインタ変数を使えば、別関数であっても値を変更できる。
ただし、予期せぬところで変数が上書きされる可能性があるため、使い方には注意が必要。

ポインタのメモリアドレスに値を入れない場合、実行はできるが、プログラムが終了してしまう。
そのため、ポインタのメモリアドレスに値を入れる場合は、ポインタが指す変数があるかどうかを確認しておく。

```c
void main() {
  int *p = NULL;
  *p = 10;
}
```
