#include <iostream>
#include "string.h"
using namespace std;

//動的メモリの確保について

int main()
{
    //任意の大きさの配列を準備する場合

/*********************************************
    int     arrey[5];
    int     num = 5;

//これでは要素数を変更したいとき、2か所に手を加えなければならない
*********************************************/

/*********************************************
    int     num = 5;
    int     arrey[n];


//いい感じに見えるけれどもこれではコンパイルエラー
*********************************************/

    const int n = 5; // まずは配列の要素数を定数として定める

    char array[n];   // 要素数 n の配列を宣言 (これなら n は定数なのでコンパイルは通る)

    strcpy( array,"hello");

    cout << array << endl;

    return 0;

}
