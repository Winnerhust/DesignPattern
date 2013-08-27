#include "director.h"
#include "builder.h"

int main()
{
        Director *d=new Director(new ConBuilder());
        
        d->Construct();
        return 0;
}
