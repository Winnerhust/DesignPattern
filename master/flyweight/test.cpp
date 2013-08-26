#include "flyweightfactory.h"

int main(int argc,char* argv[])
{
        FlyweightFactory ff;

        Flyweight *fly = ff.getFlyweight("dfs");
        Flyweight *fly1 = ff.getFlyweight("sf");
        Flyweight *fly2 = ff.getFlyweight("sf");

        return 0;
}
