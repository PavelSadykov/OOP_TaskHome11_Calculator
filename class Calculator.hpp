//
//  class Calculator.hpp
//  OOP ДЗ 11 Калькулятор Шаблон
//
//  Created by Павел on 16.01.2023.
//

#ifndef class_Calculator_hpp
#define class_Calculator_hpp

#include <stdio.h>
#include "class Calculator.hpp"
#include <iostream>
#include <string>
#include <forward_list>
#include <vector>
#include <list>
#include <map>



template <class T1, class T2> class Calculator{
public:
    Calculator(T1 number1, T2 number2);
      
      void setValue1( T1 number1);
      void setValue2( T2 number2);
      T1 getSum();
      T1 getMultiply();
      T1 getSub();
      T1 getDiv();
 private:
      T1 _number1;
      T2 _number2;
 };




#endif /* class_Calculator_hpp */
