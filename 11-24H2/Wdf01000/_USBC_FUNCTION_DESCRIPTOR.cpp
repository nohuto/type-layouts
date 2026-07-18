struct _UNICODE_STRING// Size=0x10 (Id=250)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _USBC_FUNCTION_DESCRIPTOR// Size=0x50 (Id=1089)
{
    unsigned char FunctionNumber;// Offset=0x0 Size=0x1
    unsigned char NumberOfInterfaces;// Offset=0x1 Size=0x1
    struct _USB_INTERFACE_DESCRIPTOR ** InterfaceDescriptorList;// Offset=0x8 Size=0x8
    struct _UNICODE_STRING HardwareId;// Offset=0x10 Size=0x10
    struct _UNICODE_STRING CompatibleId;// Offset=0x20 Size=0x10
    struct _UNICODE_STRING FunctionDescription;// Offset=0x30 Size=0x10
    unsigned long FunctionFlags;// Offset=0x40 Size=0x4
    void * Reserved;// Offset=0x48 Size=0x8
};
