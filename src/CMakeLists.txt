
#소스 파일 add_executable add_executable (myapp src1.cpp src2.cpp) 소스 파일은 변수로 일단 변수에 넣어 두자.
#인클루드 패스 include_directories include_directories (/path/to/include) CMakeLists.txt 중 어디에 두어도 사용.
#라이브러리 경로 link_directories link_directories (/path/to/lib) 이후에 생성된 대상에 대해서만 유효하다.
#라이브러리 target_link_libraries target_link_libraries (myapp foo) 대상 작성 후 없으면 지정할 수 없다.

#cmake 최소버전 지정
cmake_minimum_required(VERSION 2.8)

#PROJECT이름 지정
PROJECT(hello)

#컴파일러 지정
set(CMAKE_CXX_COMPILER g++)

#변수 지정, CHACHE를 사용하면 위로도 전해짐. 보통 아래로만 전해진다.
set(HOMHOM "hom" CACHE STRING "homhom is hommm")

#libray 저장경로 지정
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ./bin)

#ARCHIVE 저장경로 지정
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ./archive/)

#실행파일 저장경로 지정
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../src)



#컴파일러 옵션 지정
add_definitions("-Wall -std=c++14")

#Include 경로 지정 -i옵션
##INCLUDE_DIRECTORIES()
#LINK경로 지정 Compiler의 -L옵션
##LINK_DIRECTORIES()

#분기 빌드에 대한 Example
##set (myapp_sources main.cpp sub1.cpp)
##if (USE_FEATURE_X)
##  set (myapp_sources ${myapp_sources} sub2.cpp)
##endif ()
##add_executable (myapp ${myapp_sources})


#static 파일을 만든 후 참조.
add_subdirectory(test01)                
add_subdirectory(test02)


#빌드
add_executable(Main
 main.cpp
 
 #main코드 파일 이외의 코드 파일이 있는 경우
 test.cpp
  #main.cpp이외의 파일이 다른 디렉토리에 있는 경우
  test01/test01.cpp
  test02/test02.cpp
)


#링크 -l 옵션
target_link_libraries(Main Test01 Test02)