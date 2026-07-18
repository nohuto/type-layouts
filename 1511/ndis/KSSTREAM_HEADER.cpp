struct KSSTREAM_HEADER// Size=0x38 (Id=1686)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    unsigned long TypeSpecificFlags;// Offset=0x4 Size=0x4
    struct KSTIME PresentationTime;// Offset=0x8 Size=0x10
    long long Duration;// Offset=0x18 Size=0x8
    unsigned long FrameExtent;// Offset=0x20 Size=0x4
    unsigned long DataUsed;// Offset=0x24 Size=0x4
    void * Data;// Offset=0x28 Size=0x8
    unsigned long OptionsFlags;// Offset=0x30 Size=0x4
    unsigned long Reserved;// Offset=0x34 Size=0x4
};
