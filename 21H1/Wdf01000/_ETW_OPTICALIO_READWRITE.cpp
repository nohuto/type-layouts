struct _ETW_OPTICALIO_READWRITE// Size=0x38 (Id=2644)
{
    unsigned long DiskNumber;// Offset=0x0 Size=0x4
    unsigned long IrpFlags;// Offset=0x4 Size=0x4
    unsigned long Size;// Offset=0x8 Size=0x4
    unsigned long Reserved;// Offset=0xc Size=0x4
    unsigned long long ByteOffset;// Offset=0x10 Size=0x8
    void * FileObject;// Offset=0x18 Size=0x8
    void * IrpAddr;// Offset=0x20 Size=0x8
    unsigned long long HighResResponseTime;// Offset=0x28 Size=0x8
    unsigned long IssuingThreadId;// Offset=0x30 Size=0x4
};
