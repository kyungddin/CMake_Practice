# /lib/CMakeListst.txt

# STATIC: 정적 라이브러리, SHARED: 동적 라이브러리, MODULE: 플러그인 라이브러리
add_library(shape STATIC shape.cpp)

# PUBLIC: 라이브러리가 컴파일 옵션과 파일 탐색 디렉토리를 물려받음, PRIVATE: 아님 (나중에 더 공부)
# 여기서는 헤더 파일 경로 추가를 위해서..
target_include_directories(shape PUBLIC ${CMAKE_SOURCE_DIR}/includes)

# shape 컴파일 시, 헤더 파일 검색 경로와 참조 경로를 추가한다~
# PRIVATE을 써주는 이유는 shape 라이브러리를 사용하는 다른 프로젝트에서 이 옵션이 필요하지 않기 때문
target_compile_options(shape PRIVATE -Wall -Werror)
