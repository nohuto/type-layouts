struct _KSPROCESSPIN// Size=0x40 (Id=1956)
{
    struct _KSPIN * Pin;// Offset=0x0 Size=0x8
    struct _KSSTREAM_POINTER * StreamPointer;// Offset=0x8 Size=0x8
    struct _KSPROCESSPIN * InPlaceCounterpart;// Offset=0x10 Size=0x8
    struct _KSPROCESSPIN * DelegateBranch;// Offset=0x18 Size=0x8
    struct _KSPROCESSPIN * CopySource;// Offset=0x20 Size=0x8
    void * Data;// Offset=0x28 Size=0x8
    unsigned long BytesAvailable;// Offset=0x30 Size=0x4
    unsigned long BytesUsed;// Offset=0x34 Size=0x4
    unsigned long Flags;// Offset=0x38 Size=0x4
    unsigned char Terminate;// Offset=0x3c Size=0x1
};
