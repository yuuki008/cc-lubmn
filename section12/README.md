# メモリ生成関数

- malloc (引数で指定したバイト数のメモリを確保)
- calloc (引数で指定したバイト数のメモリを確保し、全て 0 で初期化)
- realloc (引数で指定したバイト数のメモリを確保し、古いメモリを新しいメモリにコピー)

# メモリの領域

- プログラム領域 (プログラムがメモリにロードされる領域)
- 静的領域 (グローバル変数や static 変数)
- ヒープ領域 (動的にメモリを確保するための領域)
- スタック領域 (ローカル変数)