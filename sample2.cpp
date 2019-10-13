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
      auto getVal() { return val; } // auto: 返り値を予測 -> int
};

int main( int argc, char** argv){

   auto x = 1; // auto: xの型を予測 -> int
   auto p = &x; // auto: yの型を予測 -> int*

   *p = 2;

   std::vector<int> vec( 3 ); // サイズ3のベクトルを生成

   // auto: イテレータの型名をautoで予測 -> std::vector<int>::iterator
   for ( auto it = vec.begin(); it != vec.end(); ++it )
      *it = x++;

   // auto: コンテナの要素を予測 -> int&
   for ( auto& v : vec )
   {
      Memo m( v*v ); // 2乗してメモ
      std::cout << m.getVal() << std::endl; // メモした値を出力
   }

   return 0;
}
