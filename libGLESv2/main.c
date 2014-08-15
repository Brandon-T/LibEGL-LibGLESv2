#include "Exports.h"


__attribute__((constructor)) void __load()
{
    Initialize();
}

__attribute__((destructor)) void __unload()
{
    DeInitialize();
}
