struct _RTL_BITMAP// Size=0x10 (Id=13)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x8 Size=0x8
};

struct _JOB_RATE_CONTROL_HEADER// Size=0x28 (Id=1271)
{
    void * RateControlQuotaReference;// Offset=0x0 Size=0x8
    struct _RTL_BITMAP OverQuotaHistory;// Offset=0x8 Size=0x10
    unsigned char * BitMapBuffer;// Offset=0x18 Size=0x8
    unsigned long long BitMapBufferSize;// Offset=0x20 Size=0x8
};

struct _JOB_NET_RATE_CONTROL// Size=0x48 (Id=1379)
{
    struct _JOB_RATE_CONTROL_HEADER Header;// Offset=0x0 Size=0x28
    unsigned long long MaxBandwidth;// Offset=0x28 Size=0x8
    union // Size=0x4 (Id=0)
    {
        unsigned long Flags;// Offset=0x30 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long MaxBandwidthEnabled:1;// Offset=0x30 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long DscpTagEnabled:1;// Offset=0x30 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long Reserved:30;// Offset=0x30 Size=0x4 BitOffset=0x2 BitSize=0x1e
        };
    };
    unsigned long long PolicyCookie;// Offset=0x38 Size=0x8
    unsigned char DscpTag;// Offset=0x40 Size=0x1
};
