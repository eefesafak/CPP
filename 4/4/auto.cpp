#include <iostream>
#include <cstddef>
#include <cstdio>
#include <vector>
#include <list>
using namespace std;
/*
 * auto degiskenleri default init etmek çok istenmez, özellikle auto ömürlüyse hayata çöp değerle başlar
 * auto yazarsak kontrol noktası oluşturmuş oluyoruz. autoya ilk deger vermek zorunlu. default init seçenek olmaktan çıkar.
 * Riskleri de var ileride görücez.
 *

*/
int foo(); // int degil de double oldu degistirildi
int func(int);
int main()
{
//    auto x = foo(); // degistirmeye ihtiyac duymayız. recompile ettiğimizde deduction tekrar yapılacak x double olur.

//    int a[10]{};
//    auto y = a;// array to pointer conversion a int* olcak y de int* olacak

//    const int a[] = {1, 2, 3, 4, 5};
//    auto y = a; // z nin türü -> const int *

//    auto a = "efesafak"; // d nin türü -> const char *, C'den farklı olarak string literalleri const char dizeler aslında const char[9], tür çıkarımı yapıldıgında const char* olur.

//    const int a = 10;
//    auto y = a;  ys'nin türü int

//    int x = 10;
//    int& r = x;
//    auto y = r; // y turu -> int

//    int x = 10;
//    const int& r = x;
//    auto y = r; //y turu -> int eger auto yalın olarak kullanılırsa yanında baska bir declarator yoksa normalde ilk deger verilen ifadenin turudur. ancak dizi ve string ismi kullanıldıgında array dikey oldu

//    auto f = func; // ilk deger veren ifade fonk ismi ldugunda burda type deduction önce function to pointer conversion oluyor func ismini önce bu fonksyionun adresi olan türe dönüştürüyor ve ondan sonra tür çıkarımı yapılır.
//    int (*f)(int) = func; //yukarıdakiyle aynı


//    int x = 10;
//    auto &r = x; // r-> int ref, auto->int

//    const int x = 10;
//    auto &r = x; // rnin türü -> const int ref, referans declarator kullanıldıgında const düsmez. auto -> const int 2:24:38

    return 0;
}
