CXX=g++
all:
        $(CXX) -c product.cpp
        $(CXX) -c builder.cpp
        $(CXX) -c director.cpp
        $(CXX) test.cpp -o test product.o builder.o director.o
clean:
        rm *.o test
