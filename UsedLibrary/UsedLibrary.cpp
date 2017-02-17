// UsedLibrary.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "UsedLibrary.h"


// This is an example of an exported variable
USEDLIBRARY_API int nUsedLibrary=0;

// This is an example of an exported function.
USEDLIBRARY_API int fnUsedLibrary(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see UsedLibrary.h for the class definition
CUsedLibrary::CUsedLibrary()
{
    return;
}
