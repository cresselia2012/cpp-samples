// sample2.cpp
//
// autoの基本的かつ便利な使い方
//
#include <iostream>
#include <vector>

class Memo {
   int val;
   public:
      Memo( int a ) { val = a; }
      auto getVal() { return val; } // auto: 返り値の型を推論 -> int
};

int main( int argc, char** argv){

   auto x = 1; // auto: xの型を推論 -> int
   auto p = &x; // auto: yの型を推論 -> int*

   *p = 2;

   std::vector<int> vec( 3 ); // サイズ3のベクトルを生成

   // auto: イテレータの型名をautoで推論 -> std::vector<int>::iterator
   for ( auto it = vec.begin(); it != vec.end(); ++it )
      *it = x++;

   // auto: コンテナの要素を推論 -> int&
   for ( auto& v : vec )
   {
      Memo m( v*v ); // 2乗してメモ
      std::cout << m.getVal() << std::endl; // メモした値を出力
   }

   return 0;
}
