struct _anonymous_108// Size=0x8 (Id=108)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=109)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_108 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

union _ULARGE_INTEGER// Size=0x8 (Id=845)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=15522)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        unsigned long HighPart;// Offset=0x4 Size=0x4
    };
    struct _ULARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

struct _FILETIME// Size=0x8 (Id=3330)
{
    unsigned long dwLowDateTime;// Offset=0x0 Size=0x4
    unsigned long dwHighDateTime;// Offset=0x4 Size=0x4
};

struct tagPROPVARIANT// Size=0x18 (Id=3315)
{
    union // Size=0x18 (Id=0)
    {
        unsigned short vt;// Offset=0x0 Size=0x2
        unsigned short wReserved1;// Offset=0x2 Size=0x2
        unsigned short wReserved2;// Offset=0x4 Size=0x2
        unsigned short wReserved3;// Offset=0x6 Size=0x2
        union // Size=0x18 (Id=0)
        {
            char cVal;// Offset=0x8 Size=0x1
            unsigned char bVal;// Offset=0x8 Size=0x1
            short iVal;// Offset=0x8 Size=0x2
            unsigned short uiVal;// Offset=0x8 Size=0x2
            long lVal;// Offset=0x8 Size=0x4
            unsigned long ulVal;// Offset=0x8 Size=0x4
            int intVal;// Offset=0x8 Size=0x4
            unsigned int uintVal;// Offset=0x8 Size=0x4
            union _LARGE_INTEGER hVal;// Offset=0x8 Size=0x8
            union _ULARGE_INTEGER uhVal;// Offset=0x8 Size=0x8
            float fltVal;// Offset=0x8 Size=0x4
            float dblVal;// Offset=0x8 Size=0x8
            short boolVal;// Offset=0x8 Size=0x2
            short __OBSOLETE__VARIANT_BOOL;// Offset=0x8 Size=0x2
            long scode;// Offset=0x8 Size=0x4
            union tagCY cyVal;// Offset=0x8 Size=0x8
            float date;// Offset=0x8 Size=0x8
            struct _FILETIME filetime;// Offset=0x8 Size=0x8
            struct _GUID * puuid;// Offset=0x8 Size=0x8
            struct tagCLIPDATA * pclipdata;// Offset=0x8 Size=0x8
            wchar_t * bstrVal;// Offset=0x8 Size=0x8
            struct tagBSTRBLOB bstrblobVal;// Offset=0x8 Size=0x10
            struct tagBLOB blob;// Offset=0x8 Size=0x10
            char * pszVal;// Offset=0x8 Size=0x8
            wchar_t * pwszVal;// Offset=0x8 Size=0x8
            struct IUnknown * punkVal;// Offset=0x8 Size=0x8
            struct IDispatch * pdispVal;// Offset=0x8 Size=0x8
            struct IStream * pStream;// Offset=0x8 Size=0x8
            struct IStorage * pStorage;// Offset=0x8 Size=0x8
            struct tagVersionedStream * pVersionedStream;// Offset=0x8 Size=0x8
            struct tagSAFEARRAY * parray;// Offset=0x8 Size=0x8
            struct tagCAC cac;// Offset=0x8 Size=0x10
            struct tagCAUB caub;// Offset=0x8 Size=0x10
            struct tagCAI cai;// Offset=0x8 Size=0x10
            struct tagCAUI caui;// Offset=0x8 Size=0x10
            struct tagCAL cal;// Offset=0x8 Size=0x10
            struct tagCAUL caul;// Offset=0x8 Size=0x10
            struct tagCAH cah;// Offset=0x8 Size=0x10
            struct tagCAUH cauh;// Offset=0x8 Size=0x10
            struct tagCAFLT caflt;// Offset=0x8 Size=0x10
            struct tagCADBL cadbl;// Offset=0x8 Size=0x10
            struct tagCABOOL cabool;// Offset=0x8 Size=0x10
            struct tagCASCODE cascode;// Offset=0x8 Size=0x10
            struct tagCACY cacy;// Offset=0x8 Size=0x10
            struct tagCADATE cadate;// Offset=0x8 Size=0x10
            struct tagCAFILETIME cafiletime;// Offset=0x8 Size=0x10
            struct tagCACLSID cauuid;// Offset=0x8 Size=0x10
            struct tagCACLIPDATA caclipdata;// Offset=0x8 Size=0x10
            struct tagCABSTR cabstr;// Offset=0x8 Size=0x10
            struct tagCABSTRBLOB cabstrblob;// Offset=0x8 Size=0x10
            struct tagCALPSTR calpstr;// Offset=0x8 Size=0x10
            struct tagCALPWSTR calpwstr;// Offset=0x8 Size=0x10
            struct tagCAPROPVARIANT capropvar;// Offset=0x8 Size=0x10
            char * pcVal;// Offset=0x8 Size=0x8
            unsigned char * pbVal;// Offset=0x8 Size=0x8
            short * piVal;// Offset=0x8 Size=0x8
            wchar_t * puiVal;// Offset=0x8 Size=0x8
            long * plVal;// Offset=0x8 Size=0x8
            unsigned long * pulVal;// Offset=0x8 Size=0x8
            int * pintVal;// Offset=0x8 Size=0x8
            unsigned int * puintVal;// Offset=0x8 Size=0x8
            float * pfltVal;// Offset=0x8 Size=0x8
            float * pdblVal;// Offset=0x8 Size=0x8
            short * pboolVal;// Offset=0x8 Size=0x8
            struct tagDEC * pdecVal;// Offset=0x8 Size=0x8
            long * pscode;// Offset=0x8 Size=0x8
            union tagCY * pcyVal;// Offset=0x8 Size=0x8
            float * pdate;// Offset=0x8 Size=0x8
            wchar_t ** pbstrVal;// Offset=0x8 Size=0x8
            struct IUnknown ** ppunkVal;// Offset=0x8 Size=0x8
            struct IDispatch ** ppdispVal;// Offset=0x8 Size=0x8
            struct tagSAFEARRAY ** pparray;// Offset=0x8 Size=0x8
            struct tagPROPVARIANT * pvarVal;// Offset=0x8 Size=0x8
        };
        struct tagDEC decVal;// Offset=0x0 Size=0x10
    };
};
