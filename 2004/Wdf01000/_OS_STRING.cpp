struct _OS_STRING// Size=0x12 (Id=2637)
{
    unsigned char bLength;// Offset=0x0 Size=0x1
    unsigned char bDescriptorType;// Offset=0x1 Size=0x1
    wchar_t MicrosoftString[7];// Offset=0x2 Size=0xe
    unsigned char bVendorCode;// Offset=0x10 Size=0x1
    union // Size=0x1 (Id=0)
    {
        unsigned char bPad;// Offset=0x11 Size=0x1
        unsigned char bFlags;// Offset=0x11 Size=0x1
    };
};
