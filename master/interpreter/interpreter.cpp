#ifndef __INTERPRETER_INTERPRETER_CPP__
#define __INTERPRETER_INTERPRETER_CPP__ 

#include <iostream>
#include "interpreter.h"
using namespace std;

Expression::Expression()
{
}
Expression::~Expression()
{
}

TerminalExpression::TerminalExpression()
:m_state("")
{
}
TerminalExpression::TerminalExpression(const string &state)
:m_state(state)
{
}
TerminalExpression::~TerminalExpression()
{
}
void TerminalExpression::interpret(const Context &c)
{
	cout<<"TerminalExpression::interpret:"<<m_state<<endl;
}

NonTerminalExpression::NonTerminalExpression()
:m_state("")
{
}
NonTerminalExpression::NonTerminalExpression(const string &state)
:m_state(state)
{
}
NonTerminalExpression::~NonTerminalExpression()
{
}
void NonTerminalExpression::interpret(const Context &c)
{
	cout<<"NonTerminalExpression::interpret:"<<m_state<<endl;
}
#endif
