struct _SETUP_STAGE_TRB// Size=0x10 (Id=784)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long bmRequestType:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long bRequest:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long wValue:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
        unsigned long wIndex:16;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long wLength:16;// Offset=0x4 Size=0x4 BitOffset=0x10 BitSize=0x10
        unsigned long TransferLength:17;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x11
        unsigned long Reserved0:5;// Offset=0x8 Size=0x4 BitOffset=0x11 BitSize=0x5
        unsigned long InterrupterTarget:10;// Offset=0x8 Size=0x4 BitOffset=0x16 BitSize=0xa
        unsigned long CycleBit:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved1:4;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x4
        unsigned long InterruptOnCompletion:1;// Offset=0xc Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long ImmediateData:1;// Offset=0xc Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long Reserved2:3;// Offset=0xc Size=0x4 BitOffset=0x7 BitSize=0x3
        unsigned long Type:6;// Offset=0xc Size=0x4 BitOffset=0xa BitSize=0x6
        unsigned long TransferType:2;// Offset=0xc Size=0x4 BitOffset=0x10 BitSize=0x2
        unsigned long Reserved3:14;// Offset=0xc Size=0x4 BitOffset=0x12 BitSize=0xe
    };
};
