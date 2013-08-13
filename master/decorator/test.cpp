#include "decorator.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	//调用方法1
	Component *com=new ConComponent();
	//Decorator *dec=new ConDecorator(com);
	Decorator *ss= new ConDecoratorB(com);

	ss->Operation();
	cout<<"--------------"<<endl;

	//调用方法2
	Decorator *dd = new ConDecorator( new ConDecoratorB( new ConComponent()));
	
	dd->Operation();

	delete ss;
	delete dd;

	return 0;
}
