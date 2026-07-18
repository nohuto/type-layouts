struct _STOP_ENDPOINT_COMMAND_TRB// Size=0x10 (Id=695)
{
    unsigned long Reserved0[3];// Offset=0x0 Size=0xc
    struct // Size=0x4 (Id=0)
    {
        unsigned long CycleBit:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved1:9;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x9
        unsigned long Type:6;// Offset=0xc Size=0x4 BitOffset=0xa BitSize=0x6
        unsigned long EndpointId:5;// Offset=0xc Size=0x4 BitOffset=0x10 BitSize=0x5
        unsigned long Reserved2:2;// Offset=0xc Size=0x4 BitOffset=0x15 BitSize=0x2
        unsigned long Suspend:1;// Offset=0xc Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long SlotId:8;// Offset=0xc Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};
