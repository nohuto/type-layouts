struct _PEBS_DS_SAVE_AREA32// Size=0x80 (Id=693)
{
    unsigned long BtsBufferBase;// Offset=0x0 Size=0x4
    unsigned long BtsIndex;// Offset=0x4 Size=0x4
    unsigned long BtsAbsoluteMaximum;// Offset=0x8 Size=0x4
    unsigned long BtsInterruptThreshold;// Offset=0xc Size=0x4
    unsigned long PebsBufferBase;// Offset=0x10 Size=0x4
    unsigned long PebsIndex;// Offset=0x14 Size=0x4
    unsigned long PebsAbsoluteMaximum;// Offset=0x18 Size=0x4
    unsigned long PebsInterruptThreshold;// Offset=0x1c Size=0x4
    unsigned long long PebsGpCounterReset[8];// Offset=0x20 Size=0x40
    unsigned long long PebsFixedCounterReset[4];// Offset=0x60 Size=0x20
};

struct _PEBS_DS_SAVE_AREA64// Size=0xa0 (Id=556)
{
    unsigned long long BtsBufferBase;// Offset=0x0 Size=0x8
    unsigned long long BtsIndex;// Offset=0x8 Size=0x8
    unsigned long long BtsAbsoluteMaximum;// Offset=0x10 Size=0x8
    unsigned long long BtsInterruptThreshold;// Offset=0x18 Size=0x8
    unsigned long long PebsBufferBase;// Offset=0x20 Size=0x8
    unsigned long long PebsIndex;// Offset=0x28 Size=0x8
    unsigned long long PebsAbsoluteMaximum;// Offset=0x30 Size=0x8
    unsigned long long PebsInterruptThreshold;// Offset=0x38 Size=0x8
    unsigned long long PebsGpCounterReset[8];// Offset=0x40 Size=0x40
    unsigned long long PebsFixedCounterReset[4];// Offset=0x80 Size=0x20
};

struct _PEBS_DS_SAVE_AREA// Size=0xa0 (Id=377)
{
    union // Size=0x80 (Id=0)
    {
        struct _PEBS_DS_SAVE_AREA32 As32Bit;// Offset=0x0 Size=0x80
        struct _PEBS_DS_SAVE_AREA64 As64Bit;// Offset=0x0 Size=0xa0
    };
};
