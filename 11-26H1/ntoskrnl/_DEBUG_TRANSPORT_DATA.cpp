struct _unnamed_2075// Size=0x4 (Id=2075)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned int Segment:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned int Bus:8;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x8
        unsigned int Device:5;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x5
        unsigned int Function:3;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x3
    };
};

union _unnamed_2076// Size=0x4 (Id=2076)
{
    unsigned int RawPciLocation;// Offset=0x0 Size=0x4
    struct _unnamed_2075 Fields;// Offset=0x0 Size=0x4
};

struct _DEBUG_TRANSPORT_DATA// Size=0x10 (Id=2274)
{
    unsigned long HwContextSize;// Offset=0x0 Size=0x4
    unsigned long SharedVisibleDataSize;// Offset=0x4 Size=0x4
    unsigned char UseSerialFraming;// Offset=0x8 Size=0x1
    unsigned char ValidUSBCoreId;// Offset=0x9 Size=0x1
    unsigned char USBCoreId;// Offset=0xa Size=0x1
    unsigned char DevControlInitialized;// Offset=0xb Size=0x1
    union _unnamed_2076 DevControlPciLocation;// Offset=0xc Size=0x4
};
