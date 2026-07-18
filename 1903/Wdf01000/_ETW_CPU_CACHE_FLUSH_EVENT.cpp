struct _ETW_CPU_CACHE_FLUSH_EVENT// Size=0x18 (Id=3391)
{
    void * Address;// Offset=0x0 Size=0x8
    unsigned long long Bytes;// Offset=0x8 Size=0x8
    unsigned char Clean;// Offset=0x10 Size=0x1
    unsigned char FullFlush;// Offset=0x11 Size=0x1
    unsigned char Rectangle;// Offset=0x12 Size=0x1
    unsigned char Reserved0;// Offset=0x13 Size=0x1
    unsigned long Reserved1;// Offset=0x14 Size=0x4
};
