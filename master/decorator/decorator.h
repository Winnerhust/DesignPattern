#ifndef __COMDECORATOR_H__
#define __COMDECORATOR_H__

class Component
{
public:
	virtual ~Component();
	
	virtual void Operation();
protected:
	Component();
};
class ConComponent:public Component
{
public:
	ConComponent();
	~ConComponent();
	void Operation();
};
class Decorator: public Component
{
public:
	Decorator(Component *);
	virtual ~Decorator();
	
	void Operation();
protected:
	Component *com;
};
class ConDecorator:public Decorator
{
public:
	ConDecorator(Component *com);
	~ConDecorator();

	void Operation();
	void AddBehavior();
};
class ConDecoratorB:public Decorator
{
public:
	ConDecoratorB(Component *com);
	~ConDecoratorB();

	void Operation();
	void AddBehavior();
};
#endif
