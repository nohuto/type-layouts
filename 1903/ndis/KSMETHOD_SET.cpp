struct KSMETHOD_SET// Size=0x28 (Id=1999)
{
    struct _GUID * Set;// Offset=0x0 Size=0x8
    unsigned long MethodsCount;// Offset=0x8 Size=0x4
    struct KSMETHOD_ITEM * MethodItem;// Offset=0x10 Size=0x8
    unsigned long FastIoCount;// Offset=0x18 Size=0x4
    struct KSFASTMETHOD_ITEM * FastIoTable;// Offset=0x20 Size=0x8
};
