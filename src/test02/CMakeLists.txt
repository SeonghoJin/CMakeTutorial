cmake_minimum_required(VERSION 2.8)

#static라이브러리를 위한 타겟을 정의
#STATIC | SHARED | MODULE == 정적 | 동적 | 런타임에 동적으로 로딩되는 라이브러리
add_library(Test02 STATIC
  test02.cpp
)