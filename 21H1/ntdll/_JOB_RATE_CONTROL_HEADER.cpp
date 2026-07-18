struct _RTL_BITMAP// Size=0x8 (Id=358)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x4 Size=0x4
};

struct _JOB_RATE_CONTROL_HEADER// Size=0x14 (Id=329)
{
    void * RateControlQuotaReference;// Offset=0x0 Size=0x4
    struct _RTL_BITMAP OverQuotaHistory;// Offset=0x4 Size=0x8
    unsigned char * BitMapBuffer;// Offset=0xc Size=0x4
    unsigned long BitMapBufferSize;// Offset=0x10 Size=0x4
};
