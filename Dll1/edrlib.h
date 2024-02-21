#ifdef _cplusplus

#define EXPORT extern "C" _declspec (dllexport)
#else
#define EXPORT _declspec (dllexport)

#endif

EXPORT BOOL CALLBACK EdrCenterTextA(HDC, PRECT, PCSTR);
EXPORT BOOL CALLBACK EdrCenterTextW(HDC, PRECT, PCWSTR);

#ifdef UNICODE
#define EdrCenterText EdrCenterTextW
#else
#define EdrCenterText EdrCenterTextA
#endif
