struct _NDIS_RESTART_ATTRIBUTES// Size=0x20 (Id=335)
{
    struct _NDIS_RESTART_ATTRIBUTES * Next;// Offset=0x0 Size=0x8
    unsigned long Oid;// Offset=0x8 Size=0x4
    unsigned long DataLength;// Offset=0xc Size=0x4
    unsigned char Data[1];// Offset=0x10 Size=0x1
};
