struct _unnamed_400// Size=0x4 (Id=400)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned int MTPInitiator:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned int MTPResponder:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned int IpOverUsb:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned int VidStream:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned int Reserved:27;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1b
        unsigned int UcmIsPresent:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};

union _USB_DUAL_ROLE_FEATURES// Size=0x4 (Id=401)
{
    unsigned long ul;// Offset=0x0 Size=0x4
    struct _unnamed_400 features;// Offset=0x0 Size=0x4
};
