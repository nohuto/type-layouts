struct _FILE_SFIO_RESERVE_INFORMATION// Size=0x14 (Id=3045)
{
    unsigned long RequestsPerPeriod;// Offset=0x0 Size=0x4
    unsigned long Period;// Offset=0x4 Size=0x4
    unsigned char RetryFailures;// Offset=0x8 Size=0x1
    unsigned char Discardable;// Offset=0x9 Size=0x1
    unsigned long RequestSize;// Offset=0xc Size=0x4
    unsigned long NumOutstandingRequests;// Offset=0x10 Size=0x4
};
