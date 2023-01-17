//
//  class Calculator.cpp
//  OOP ДЗ 11 Калькулятор Шаблон
//
//  Created by Павел on 16.01.2023.
//

#include "class Calculator.hpp"
#include <iostream>
#include <string>
#include <forward_list>
#include <vector>
#include <list>
#include <map>



template <class T1, class T2>
Calculator< T1, T2>::Calculator(T1 number1, T2 number2):_number1(number1), _number2(number2)
    {}
        
template <class T1, class T2>
void Calculator< T1, T2>::setValue1( T1 number1){
         _number1 = number1;
    }
template <class T1, class T2>
void Calculator< T1, T2>::setValue2( T2 number2){
         _number2 = number2;
    }
template <class T1, class T2>
T1 Calculator< T1, T2>:: getSum(){
         T1 res = _number1 + _number2;
         return res;
    }
template <class T1, class T2>
T1 Calculator<T1,T2>::getMultiply(){
         T1 res = _number1 * _number2;
         return res;
    }
template <class T1, class T2>
T1 Calculator<T1,T2>::getSub(){
         T1 res = _number1 - _number2;
         return res;
    }
template <class T1, class T2>
T1 Calculator<T1,T2>::getDiv(){
        
        if(_number2!=0){
             T1 res = _number1 / _number2;
             return res;
        }
        return 123456;
    }
 




