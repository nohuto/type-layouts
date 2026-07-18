struct _XSTATE_CONTEXT// Size=0x20 (Id=799)
{
    unsigned long long Mask;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
    unsigned char Flags;// Offset=0xc Size=0x1
    unsigned char Reserved0[3];// Offset=0xd Size=0x3
    struct _XSAVE_AREA * Area;// Offset=0x10 Size=0x8
    void * Buffer;// Offset=0x18 Size=0x8
};
