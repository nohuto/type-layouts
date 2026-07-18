struct _KSSTREAM_POINTER_OFFSET// Size=0x10 (Id=1705)
{
    union // Size=0x8 (Id=0)
    {
        unsigned char * Data;// Offset=0x0 Size=0x8
        struct _KSMAPPING * Mappings;// Offset=0x0 Size=0x8
    };
    unsigned long Count;// Offset=0x8 Size=0x4
    unsigned long Remaining;// Offset=0xc Size=0x4
};
