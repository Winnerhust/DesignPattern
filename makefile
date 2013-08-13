CXX=g++
all:
    $(CXX) -c decorator.cpp
    $(CXX) test.cpp -o test decorator.o
clean:
    rm decorator.o test
