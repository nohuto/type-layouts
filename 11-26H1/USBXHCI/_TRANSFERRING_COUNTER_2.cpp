struct _TRANSFERRING_COUNTER// Size=0x28 (Id=597)
{
    unsigned long TransferCount;// Offset=0x0 Size=0x4
    unsigned long FailedTransferCount;// Offset=0x4 Size=0x4
    unsigned long long BytesTransferred;// Offset=0x8 Size=0x8
    unsigned long IsochTDCount;// Offset=0x10 Size=0x4
    unsigned long IsochTDFailCount;// Offset=0x14 Size=0x4
    unsigned long MissedServiceErrorCount;// Offset=0x18 Size=0x4
    unsigned long UnderrunOverrunCount;// Offset=0x1c Size=0x4
    struct _PCW_INSTANCE * PcwInstanceHandle;// Offset=0x20 Size=0x8
};
