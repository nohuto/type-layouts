struct _ETW_OPTICALIO_FLUSH_BUFFERS// Size=0x20 (Id=1721)
{
    unsigned long DiskNumber;// Offset=0x0 Size=0x4
    unsigned long IrpFlags;// Offset=0x4 Size=0x4
    unsigned long long HighResResponseTime;// Offset=0x8 Size=0x8
    void * IrpAddr;// Offset=0x10 Size=0x8
    unsigned long IssuingThreadId;// Offset=0x18 Size=0x4
};
