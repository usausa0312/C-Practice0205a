#pragma once

///////////
int _a = 0;//���̕ϐ���0�ȊO�ɂ���ƃt���O�I��
int _b = 1;
int _c = 1;
int _d = 1;//���̕ϐ���0�ȊO�ɂ���ƃt���O�I��
///////////
bool A() { return _a == 0 ? true : false; };
bool B() { return _b == 0 ? true : false; };
bool C() { return _c == 0 ? true : false; };
bool D() { return _d == 0 ? true : false; };




#include<iostream>
#define PRINT(FLG) (std::cout<<FLG <<std::endl);
