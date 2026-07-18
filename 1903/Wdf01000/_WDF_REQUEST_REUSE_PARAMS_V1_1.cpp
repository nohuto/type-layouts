struct _WDF_REQUEST_REUSE_PARAMS_V1_1// Size=0x18 (Id=5565)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    long Status;// Offset=0x8 Size=0x4
    struct _IRP * NewIrp;// Offset=0x10 Size=0x8
};
