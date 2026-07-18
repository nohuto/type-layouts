struct _GUID// Size=0x10 (Id=79)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _QUERY_USB_CAPABILITY// Size=0x28 (Id=526)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    struct USBDI_HANDLE__ * USBDIHandle;// Offset=0x8 Size=0x8
    struct _GUID CapabilityType;// Offset=0x10 Size=0x10
    unsigned long OutputBufferLength;// Offset=0x20 Size=0x4
    unsigned long ResultLength;// Offset=0x24 Size=0x4
};
