// TestReferenceNativeDLL.cpp : main project file.

#include "stdafx.h"

#include "../UsedLibrary/UsedLibrary.h"

using namespace System;

int main(array<System::String ^> ^args)
{
	fnUsedLibrary();
	
	Console::WriteLine(L"Hello World");
    return 0;
}
