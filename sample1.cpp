// sample1.cpp
//
// コンパイルエラーを意図的に引き起こすことで
// autoが推定した型を確認する
//
template<typename T>
class TD;

int main( int argc, char** argv){

   int x = 1;
   const int cx = x;

   auto a = cx;
   auto& b = cx;
   auto* c = &cx;

   TD<decltype(x)> xType;
   TD<decltype(cx)> cxType;

   TD<decltype(a)> aType;
   TD<decltype(b)> bType;
   TD<decltype(c)> cType;

   return 0;
}
