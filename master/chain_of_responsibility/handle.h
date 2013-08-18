#ifndef __COMHANDLE_H__
#define __COMHANDLE_H__

class Handle
{
public:
	Handle(Handle *next);
	virtual ~Handle();
	virtual void option()=0;

	Handle * next_handle();	
	void  set_next_handle(Handle *next);
protected:
	Handle();
private:
	Handle *m_next;
};

#endif
