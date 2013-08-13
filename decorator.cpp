#ifndef __COMDECORATOR_CPP__
#define __COMDECORATOR_CPP__

#include "decorator.h"
#include <iostream>
using namespace std;

Component::Component()
{
}
Component::~Component()
{
}
void Component::Operation()
{
}

ConComponent::ConComponent()
{
}
ConComponent::~ConComponent()
{
}
void ConComponent::Operation()
{
	cout<<"普通攻击100伤害"<<endl;
}

Decorator::Decorator(Component *com)
{
	this->com=com;
}
Decorator::~Decorator()
{
	delete com;
}
void Decorator::Operation()
{
	//cout<<"Decorator"<<endl;
}

ConDecorator::ConDecorator(Component *com)
:Decorator(com)
{
}
ConDecorator::~ConDecorator()
{
}

void ConDecorator::Operation()
{
	com->Operation();
	AddBehavior();
}
void ConDecorator::AddBehavior()
{
	cout<<"附加1.5倍暴击"<<endl;
}
ConDecoratorB::ConDecoratorB(Component *com)
:Decorator(com)
{
}
ConDecoratorB::~ConDecoratorB()
{
}

void ConDecoratorB::Operation()
{
	com->Operation();
	AddBehavior();
}
void ConDecoratorB::AddBehavior()
{
	cout<<"附加25\%吸血"<<endl;
}

#endif
