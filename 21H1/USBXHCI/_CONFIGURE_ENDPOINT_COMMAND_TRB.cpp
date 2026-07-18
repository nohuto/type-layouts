struct _CONFIGURE_ENDPOINT_COMMAND_TRB// Size=0x10 (Id=684)
{
    unsigned long long InputContextPointer;// Offset=0x0 Size=0x8
    unsigned long Reserved0;// Offset=0x8 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long CycleBit:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved1:8;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x8
        unsigned long Deconfigure:1;// Offset=0xc Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long Type:6;// Offset=0xc Size=0x4 BitOffset=0xa BitSize=0x6
        unsigned long Reserved2:8;// Offset=0xc Size=0x4 BitOffset=0x10 BitSize=0x8
        unsigned long SlotId:8;// Offset=0xc Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};
