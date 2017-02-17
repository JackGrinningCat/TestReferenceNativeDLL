// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the USEDLIBRARY_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// USEDLIBRARY_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef USEDLIBRARY_EXPORTS
#define USEDLIBRARY_API __declspec(dllexport)
#else
#define USEDLIBRARY_API __declspec(dllimport)
#endif

// This class is exported from the UsedLibrary.dll
class USEDLIBRARY_API CUsedLibrary {
public:
	CUsedLibrary(void);
	// TODO: add your methods here.
};

extern USEDLIBRARY_API int nUsedLibrary;

USEDLIBRARY_API int fnUsedLibrary(void);
