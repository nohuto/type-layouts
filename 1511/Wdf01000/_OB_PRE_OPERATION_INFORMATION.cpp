struct _OB_PRE_OPERATION_INFORMATION// Size=0x28 (Id=3904)
{
    unsigned long Operation;// Offset=0x0 Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long Flags;// Offset=0x4 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long KernelHandle:1;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long Reserved:31;// Offset=0x4 Size=0x4 BitOffset=0x1 BitSize=0x1f
        };
    };
    void * Object;// Offset=0x8 Size=0x8
    struct _OBJECT_TYPE * ObjectType;// Offset=0x10 Size=0x8
    void * CallContext;// Offset=0x18 Size=0x8
    union _OB_PRE_OPERATION_PARAMETERS * Parameters;// Offset=0x20 Size=0x8
};
