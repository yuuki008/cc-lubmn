# ファイル分割の仕組み

## ヘッダファイル

- 拡張子 .h
- プリプロセッサやマクロ定義
- プログラムの先頭部部に来るべき情報

```c
#ifndef _SHOW_RESULT_H_
#define _SHOW_RESULT_H_

// プロトタイプ宣言;

#endif // _SHOW_RESULT_H_
```

#ifdef, #define, #endif はマクロといい、 C 言語そのもの文法とは無関係だが、コンパイラに指令を与えるもの

## ソースファイル

- 拡張子 .c
- プログラムや関数の定義
- ヘッダファイルのインクルード
- プログラムのメイン関数

# include の使い分け

- #include "..."
  - ユーザー定義関数を定義したヘッダファイルをインクルード
- #include <...>
  - 標準ライブラリと呼ばれるヘッダファイルをインクルード

# ファイルを跨いだグローバル変数

違うファイルで定義済みのグローバル変数を読み込む場合は、extern キーワードを使う

```c
// calc.c
int ans;

// showResult.c
extern int ans;
```