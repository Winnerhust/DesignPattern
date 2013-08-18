#ifndef __INTERPRETER_INTERPRETER_H__
#define __INTERPRETER_INTERPRETER_H__

#include <string>
#include "context.h"
using namespace std;
class Context;
class Expression
{
public:
	virtual ~Expression();
	virtual void interpret(const Context &c)=0;
protected:
	Expression();
};
class TerminalExpression: public Expression
{
public:
	TerminalExpression();
	TerminalExpression(const string &state);
	~TerminalExpression();

	void interpret(const Context &c);
private:
	string m_state;
};
class NonTerminalExpression: public Expression
{
public:
	NonTerminalExpression();
	NonTerminalExpression(const string &state);
	~NonTerminalExpression();

	void interpret(const Context &c);
private:
	string m_state;
};
#endif
