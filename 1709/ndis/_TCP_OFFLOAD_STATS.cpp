struct _TCP_OFFLOAD_STATS// Size=0x28 (Id=1671)
{
    unsigned long long InSegments;// Offset=0x0 Size=0x8
    unsigned long long OutSegments;// Offset=0x8 Size=0x8
    unsigned long CurrentlyEstablished;// Offset=0x10 Size=0x4
    unsigned long ResetEstablished;// Offset=0x14 Size=0x4
    unsigned long RetransmittedSegments;// Offset=0x18 Size=0x4
    unsigned long InErrors;// Offset=0x1c Size=0x4
    unsigned long OutResets;// Offset=0x20 Size=0x4
};
