struct KSP_PIN// Size=0x20 (Id=1281)
{
    struct KSIDENTIFIER Property;// Offset=0x0 Size=0x18
    unsigned long PinId;// Offset=0x18 Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long Reserved;// Offset=0x1c Size=0x4
        unsigned long Flags;// Offset=0x1c Size=0x4
    };
};
