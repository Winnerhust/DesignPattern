#include <iostream>
#include "singleton.h"

int main(int argc, char const *argv[])
{
	Singleton *s;

	s->Instance();

	Singleton *t=Singleton::Instance();

	return 0;
}
