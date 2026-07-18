union _MSOS20_FLAGS// Size=0x4 (Id=713)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long DescriptorSetInfo:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DescriptorSetHeader:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long AlternateEnumeration:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long ConfigurationSubset:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long FunctionSubset:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long CompatibleId:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long RegistryProperty:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long MinResumeTime:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long ModelId:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long CcgpDevice:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long VendorRevision:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
    };
};

union _MSOS20_ALT_ENUM_FLAGS// Size=0x4 (Id=858)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long AltEnumCmdSent:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long AltEnumCompleted:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long AltEnumCmdCached:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
    };
};

struct _MSOS20_DESCRIPTOR_SET_INFO// Size=0x8 (Id=630)
{
    unsigned long dwWindowsVersion;// Offset=0x0 Size=0x4
    unsigned short wLength;// Offset=0x4 Size=0x2
    unsigned char bMS_VendorCode;// Offset=0x6 Size=0x1
    unsigned char bAltEnumCmd;// Offset=0x7 Size=0x1
};

struct _USB_DEVICE_DESCRIPTOR// Size=0x12 (Id=635)
{
    unsigned char bLength;// Offset=0x0 Size=0x1
    unsigned char bDescriptorType;// Offset=0x1 Size=0x1
    unsigned short bcdUSB;// Offset=0x2 Size=0x2
    unsigned char bDeviceClass;// Offset=0x4 Size=0x1
    unsigned char bDeviceSubClass;// Offset=0x5 Size=0x1
    unsigned char bDeviceProtocol;// Offset=0x6 Size=0x1
    unsigned char bMaxPacketSize0;// Offset=0x7 Size=0x1
    unsigned short idVendor;// Offset=0x8 Size=0x2
    unsigned short idProduct;// Offset=0xa Size=0x2
    unsigned short bcdDevice;// Offset=0xc Size=0x2
    unsigned char iManufacturer;// Offset=0xe Size=0x1
    unsigned char iProduct;// Offset=0xf Size=0x1
    unsigned char iSerialNumber;// Offset=0x10 Size=0x1
    unsigned char bNumConfigurations;// Offset=0x11 Size=0x1
};

struct _MSOS20_INFO// Size=0x68 (Id=659)
{
    union _MSOS20_FLAGS Flags;// Offset=0x0 Size=0x4
    union _MSOS20_ALT_ENUM_FLAGS AltEnumFlags;// Offset=0x4 Size=0x4
    unsigned char AltEnumCmd;// Offset=0x8 Size=0x1
    unsigned long BytesReturned;// Offset=0xc Size=0x4
    struct _MSOS20_DESCRIPTOR_SET_INFO DescriptorSetInfo;// Offset=0x10 Size=0x8
    struct _MSOS20_DESCRIPTOR_SET_HEADER * DescriptorSet;// Offset=0x18 Size=0x8
    struct _MSOS20_FEATURE_COMPATIBLE_ID_DESCRIPTOR * CompatibleIdDescriptor;// Offset=0x20 Size=0x8
    struct _MSOS20_FEATURE_MINIMUM_RESUME_TIME_DESCRIPTOR * MinResumeTimeDescriptor;// Offset=0x28 Size=0x8
    struct _MSOS20_FEATURE_MODEL_ID_DESCRIPTOR * ModelIdDescriptor;// Offset=0x30 Size=0x8
    struct _MSOS20_FEATURE_CCGP_DEVICE_DESCRIPTOR * CcgpDeviceDescriptor;// Offset=0x38 Size=0x8
    struct _MSOS20_FEATURE_VENDOR_REVISION_DESCRIPTOR * VendorRevisionDescriptor;// Offset=0x40 Size=0x8
    struct _USB_DEVICE_DESCRIPTOR OriginalDeviceDescriptor;// Offset=0x48 Size=0x12
    struct RECORDER_LOG__ * IfrLog;// Offset=0x60 Size=0x8
};
