struct tagVARIANT// Size=0x18 (Id=787)
{
    union // Size=0x18 (Id=0)
    {
        unsigned short vt;// Offset=0x0 Size=0x2
        unsigned short wReserved1;// Offset=0x2 Size=0x2
        unsigned short wReserved2;// Offset=0x4 Size=0x2
        unsigned short wReserved3;// Offset=0x6 Size=0x2
        union // Size=0x10 (Id=0)
        {
            long long llVal;// Offset=0x8 Size=0x8
            long lVal;// Offset=0x8 Size=0x4
            unsigned char bVal;// Offset=0x8 Size=0x1
            short iVal;// Offset=0x8 Size=0x2
            float fltVal;// Offset=0x8 Size=0x4
            float dblVal;// Offset=0x8 Size=0x8
            short boolVal;// Offset=0x8 Size=0x2
            short __OBSOLETE__VARIANT_BOOL;// Offset=0x8 Size=0x2
            long scode;// Offset=0x8 Size=0x4
            union tagCY cyVal;// Offset=0x8 Size=0x8
            float date;// Offset=0x8 Size=0x8
            wchar_t * bstrVal;// Offset=0x8 Size=0x8
            struct IUnknown * punkVal;// Offset=0x8 Size=0x8
            struct IDispatch * pdispVal;// Offset=0x8 Size=0x8
            struct tagSAFEARRAY * parray;// Offset=0x8 Size=0x8
            unsigned char * pbVal;// Offset=0x8 Size=0x8
            short * piVal;// Offset=0x8 Size=0x8
            long * plVal;// Offset=0x8 Size=0x8
            long long * pllVal;// Offset=0x8 Size=0x8
            float * pfltVal;// Offset=0x8 Size=0x8
            float * pdblVal;// Offset=0x8 Size=0x8
            short * pboolVal;// Offset=0x8 Size=0x8
            short * __OBSOLETE__VARIANT_PBOOL;// Offset=0x8 Size=0x8
            long * pscode;// Offset=0x8 Size=0x8
            union tagCY * pcyVal;// Offset=0x8 Size=0x8
            float * pdate;// Offset=0x8 Size=0x8
            wchar_t ** pbstrVal;// Offset=0x8 Size=0x8
            struct IUnknown ** ppunkVal;// Offset=0x8 Size=0x8
            struct IDispatch ** ppdispVal;// Offset=0x8 Size=0x8
            struct tagSAFEARRAY ** pparray;// Offset=0x8 Size=0x8
            struct tagVARIANT * pvarVal;// Offset=0x8 Size=0x8
            void * byref;// Offset=0x8 Size=0x8
            char cVal;// Offset=0x8 Size=0x1
            unsigned short uiVal;// Offset=0x8 Size=0x2
            unsigned long ulVal;// Offset=0x8 Size=0x4
            unsigned long long ullVal;// Offset=0x8 Size=0x8
            int intVal;// Offset=0x8 Size=0x4
            unsigned int uintVal;// Offset=0x8 Size=0x4
            struct tagDEC * pdecVal;// Offset=0x8 Size=0x8
            char * pcVal;// Offset=0x8 Size=0x8
            unsigned short * puiVal;// Offset=0x8 Size=0x8
            unsigned long * pulVal;// Offset=0x8 Size=0x8
            unsigned long long * pullVal;// Offset=0x8 Size=0x8
            int * pintVal;// Offset=0x8 Size=0x8
            unsigned int * puintVal;// Offset=0x8 Size=0x8
            void * pvRecord;// Offset=0x8 Size=0x8
        };
        struct IRecordInfo * pRecInfo;// Offset=0x10 Size=0x8
        struct tagDEC decVal;// Offset=0x0 Size=0x10
    };
};
