# 配列と STL (Standard Template Library)

- vector
- list
- map

## vector

サイズを意識せずに使える配列で動的配列と呼ぶ。
通常の配列のことを静的配列と呼ぶ。
どのくらいのメモリを確保しなくてはならないか不明確な場合には不向きです。

- push_back()
- clear()
- size()
- capacity() 追加できる要素の許容量
- empty()

## list

任意の位置に自由にデータを挿入することができる。
vector は動的配列であることから配列のインデックスが変わってしまうような、前へのデータの挿入はできない。
list はインデックスを使うことができず、要素にアクセスする方法は、イテレータを使う。
`list<int>::iterator itr`

リストの値全体にアクセスする方法
`for (itr = li.begin(); itr != li.end(); itr++)`

イテレータとは、リストの各要素にアクセスするためのポインタのようなもの。
イテレータの宣言方法は以下のように行う
`list<int>::iterator ir;`
イテレータの次に値を挿入
`insert(itr, 値)`

イテレータの値にアクセスする場合は、`*itr`とする。

- push_front
- push_back
- pop_front
- pop_back
- insert
- erase
- clear

# vector と list の特徴

vector はあくまでも配列の延長上の概念でサイズを最初に指定しなくても使えることが主眼になっている。
それに対して list は、**双方向連結リスト**と呼び、任意の場所の要素が削除されたり、挿入されたりするような使用方法を想定している。
