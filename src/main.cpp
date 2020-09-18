#include <iostream>
#include "test01/test01.h"
#include "test02/test02.h"
#include "test.h"
int main()
{
  TEST01 test01;
  test01.Print();

  TEST02 test02;
  test02.Print();

  TEST test;
  test.Print();

  return 0;
}