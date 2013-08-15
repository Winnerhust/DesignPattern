CXX=g++
all:
        $(CXX) -c command.cpp
        $(CXX) -c invoker.cpp
        $(CXX) -c recevier.cpp
        $(CXX) test.cpp -o test command.o invoker.o recevier.o
clean:
        rm *.o test
