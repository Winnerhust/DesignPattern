#include "handle.h"
#include "conhandle.h"

int main(int argc, char const *argv[])
{
	Handle *h =new ConHandleA(new ConHandleA(new ConHandle()));

	h->option();
	return 0;
}
