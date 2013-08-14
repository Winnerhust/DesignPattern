#ifndef __COMSINGLETON_H__
#define __COMSINGLETON_H__

class Singleton
{
public:
	static Singleton * Instance();
private:
	Singleton();

	static Singleton *single;	
};
#endif
