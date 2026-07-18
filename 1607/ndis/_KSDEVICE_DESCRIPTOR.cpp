struct _KSDEVICE_DESCRIPTOR// Size=0x20 (Id=973)
{
    struct _KSDEVICE_DISPATCH * Dispatch;// Offset=0x0 Size=0x8
    unsigned long FilterDescriptorsCount;// Offset=0x8 Size=0x4
    struct _KSFILTER_DESCRIPTOR ** FilterDescriptors;// Offset=0x10 Size=0x8
    unsigned long Version;// Offset=0x18 Size=0x4
    unsigned long Flags;// Offset=0x1c Size=0x4
};
