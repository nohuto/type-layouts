struct _RTL_BITMAP// Size=0x10 (Id=32)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x8 Size=0x8
};

struct _JOB_RATE_CONTROL_HEADER// Size=0x28 (Id=612)
{
    void * RateControlQuotaReference;// Offset=0x0 Size=0x8
    struct _RTL_BITMAP OverQuotaHistory;// Offset=0x8 Size=0x10
    unsigned char * BitMapBuffer;// Offset=0x18 Size=0x8
    unsigned long long BitMapBufferSize;// Offset=0x20 Size=0x8
};
