struct tagEXCEPINFO// Size=0x40 (Id=5478)
{
    unsigned short wCode;// Offset=0x0 Size=0x2
    unsigned short wReserved;// Offset=0x2 Size=0x2
    wchar_t * bstrSource;// Offset=0x8 Size=0x8
    wchar_t * bstrDescription;// Offset=0x10 Size=0x8
    wchar_t * bstrHelpFile;// Offset=0x18 Size=0x8
    unsigned long dwHelpContext;// Offset=0x20 Size=0x4
    void * pvReserved;// Offset=0x28 Size=0x8
    HRESULT  ( * pfnDeferredFillIn)(struct tagEXCEPINFO * );// Offset=0x30 Size=0x8
    long scode;// Offset=0x38 Size=0x4
};
