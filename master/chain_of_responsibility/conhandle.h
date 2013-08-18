#ifndef __COM_C_HANDLE_H__
#define __COM_C_HANDLE_H__

#include "handle.h"
class Handle;
class ConHandle: public Handle
{
public:
	ConHandle();
	ConHandle(Handle * next);
	~ConHandle();

	void option();
};
class ConHandleA: public Handle
{
public:
	ConHandleA();
	ConHandleA(Handle * next);
	~ConHandleA();

	void option();
};
class ConHandleB: public Handle
{
public:
	ConHandleB();
	ConHandleB(Handle * next);
	~ConHandleB();

	void option();
};
#endif
