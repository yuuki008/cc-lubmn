# this ポインタ

**自分自身を表すポインタ**

# const 定数

**定数を定義する**

## 引数の定義

```cpp
void foo(const A* pA);
void bar(const A& pA);
```

これにより A クラスのインスタンス、pA の値は変更されないことを保証する。

## const メンバ関数

```cpp
int getNumber() const;
```
