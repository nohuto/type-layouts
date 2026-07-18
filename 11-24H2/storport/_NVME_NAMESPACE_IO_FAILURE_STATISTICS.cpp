struct _unnamed_10// Size=0x8 (Id=10)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_10 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _NVME_NAMESPACE_IO_FAILURE_RECORD// Size=0x10 (Id=1362)
{
    union _LARGE_INTEGER Timestamp;// Offset=0x0 Size=0x8
    struct _IRP * Irp;// Offset=0x8 Size=0x8
};

struct _NVME_NAMESPACE_IO_FAILURE_STATISTICS// Size=0xa8 (Id=1348)
{
    unsigned long TotalIoFailureCount;// Offset=0x0 Size=0x4
    unsigned char IoFailureRecordsCurrentIndex;// Offset=0x4 Size=0x1
    unsigned char IoFailureRecordsCount;// Offset=0x5 Size=0x1
    unsigned char Reserved[2];// Offset=0x6 Size=0x2
    struct _NVME_NAMESPACE_IO_FAILURE_RECORD IoFailureRecords[10];// Offset=0x8 Size=0xa0
};
