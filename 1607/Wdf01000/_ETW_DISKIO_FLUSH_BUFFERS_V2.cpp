struct _ETW_DISKIO_FLUSH_BUFFERS_V2// Size=0x18 (Id=2414)
{
    unsigned long DiskNumber;// Offset=0x0 Size=0x4
    unsigned long IrpFlags;// Offset=0x4 Size=0x4
    unsigned long long HighResResponseTime;// Offset=0x8 Size=0x8
    void * IrpAddr;// Offset=0x10 Size=0x8
};
