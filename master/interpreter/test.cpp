#include "context.h"
#include "interpreter.h"

int main(int argc, char const *argv[])
{
	Context c;
	Expression *te = new TerminalExpression("ter");
	te->interpret(c);

	Expression *nte = new NonTerminalExpression("nonter");
	nte->interpret(c);
	return 0;
}
