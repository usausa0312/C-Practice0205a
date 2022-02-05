#pragma once

///////////
int _a = 0;//この変数を0以外にするとフラグオン
int _b = 1;
int _c = 1;
int _d = 1;//この変数を0以外にするとフラグオン
///////////
bool A() { return _a == 0 ? true : false; };
bool B() { return _b == 0 ? true : false; };
bool C() { return _c == 0 ? true : false; };
bool D() { return _d == 0 ? true : false; };




#include<iostream>
#define PRINT(FLG) (std::cout<<FLG <<std::endl);
