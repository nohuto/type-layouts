struct _IMAGE_INFO// Size=0x28 (Id=2046)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long Properties;// Offset=0x0 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long ImageAddressingMode:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
            unsigned long SystemModeImage:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long ImageMappedToAllPids:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
            unsigned long ExtendedInfoPresent:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
            unsigned long MachineTypeMismatch:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
            unsigned long ImageSignatureLevel:4;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x4
            unsigned long ImageSignatureType:3;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x3
            unsigned long ImagePartialMap:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
            unsigned long Reserved:12;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0xc
        };
    };
    void * ImageBase;// Offset=0x8 Size=0x8
    unsigned long ImageSelector;// Offset=0x10 Size=0x4
    unsigned long long ImageSize;// Offset=0x18 Size=0x8
    unsigned long ImageSectionNumber;// Offset=0x20 Size=0x4
};
