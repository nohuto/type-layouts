union _STORAGE_PROTOCOL_DATA_SUBVALUE_GET_LOG_PAGE// Size=0x4 (Id=727)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long RetainAsynEvent:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long LogSpecificField:4;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x4
        unsigned long Reserved0:3;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x3
        unsigned long UUIDIndex:7;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x7
        unsigned long Reserved:17;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x11
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
