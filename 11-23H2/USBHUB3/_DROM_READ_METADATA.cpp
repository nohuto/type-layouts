union _DROM_READ_METADATA// Size=0x4 (Id=765)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long Reserved1:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
        unsigned long Address:13;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0xd
        unsigned long ReadSize:5;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x5
        unsigned long Reserved2:12;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0xc
    };
};
