CXX=g++
all:
	$(CXX) -c  context.cpp
	$(CXX) -c  interpreter.cpp
	$(CXX) test.cpp -o test context.o interpreter.o
clean:
	rm *.o test
