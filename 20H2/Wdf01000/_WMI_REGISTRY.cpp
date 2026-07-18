struct _WMI_REGISTRY// Size=0x20 (Id=2192)
{
    long long InitialTime;// Offset=0x0 Size=0x8
    unsigned long Status;// Offset=0x8 Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long Index;// Offset=0xc Size=0x4
        unsigned long InfoClass;// Offset=0xc Size=0x4
    };
    void * Kcb;// Offset=0x10 Size=0x8
    wchar_t Name[1];// Offset=0x18 Size=0x2
};
