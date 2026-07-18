union _HEAP_LFH_THREAD_DATA// Size=0x8 (Id=942)
{
    unsigned short SlotMapRef;// Offset=0x0 Size=0x2
    unsigned short HeatMapRef;// Offset=0x2 Size=0x2
    unsigned char CachedProcIndex;// Offset=0x4 Size=0x1
    unsigned char ContentionRemapCount;// Offset=0x5 Size=0x1
    unsigned short Spare;// Offset=0x6 Size=0x2
    void * AllBits;// Offset=0x0 Size=0x8
};
