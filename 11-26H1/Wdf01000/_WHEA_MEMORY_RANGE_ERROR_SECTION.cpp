union _WHEA_MEMORY_RANGE_ERROR_SECTION_VALIDBITS// Size=0x8 (Id=3226)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Version:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long DeviceInfo:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long DeviceType:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long RangeCount:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long Ranges:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Reserved:59;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x3b
    };
    unsigned long long ValidBits;// Offset=0x0 Size=0x8
};

struct _WHEA_CXL_PCIE_DEVICE_ID// Size=0xc (Id=4134)
{
    unsigned short VendorID;// Offset=0x0 Size=0x2
    unsigned short DeviceID;// Offset=0x2 Size=0x2
    unsigned char FunctionNumber;// Offset=0x4 Size=0x1
    unsigned char DeviceNumber;// Offset=0x5 Size=0x1
    unsigned char BusNumber;// Offset=0x6 Size=0x1
    unsigned short SegmentNumber;// Offset=0x7 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short Reserved:3;// Offset=0x9 Size=0x2 BitOffset=0x0 BitSize=0x3
        unsigned short SlotNumber:13;// Offset=0x9 Size=0x2 BitOffset=0x3 BitSize=0xd
    };
    unsigned char Reserved2;// Offset=0xb Size=0x1
};

union _WHEA_CXL_DEVICE_SERIAL_NUMBER// Size=0x8 (Id=2313)
{
    unsigned long CxlDeviceSerialNumberLowerDW;// Offset=0x0 Size=0x4
    unsigned long CxlDeviceSerialNumberUpperDW;// Offset=0x4 Size=0x4
    unsigned long long AsUlonglong;// Offset=0x0 Size=0x8
};

union _WHEA_DEVICE_INFO// Size=0x48 (Id=3729)
{
    struct <unnamed-type-CXL>// Size=0x14 (Id=27512)
    {
        struct _WHEA_CXL_PCIE_DEVICE_ID DeviceID;// Offset=0x0 Size=0xc
        union _WHEA_CXL_DEVICE_SERIAL_NUMBER DeviceSerialNumber;// Offset=0xc Size=0x8
    };
    struct _WHEA_DEVICE_INFO::<unnamed-type-CXL> CXL;// Offset=0x0 Size=0x14
    unsigned char AsUCHAR[72];// Offset=0x0 Size=0x48
};

struct _WHEA_MEMORY_RANGE// Size=0x10 (Id=3297)
{
    unsigned long long StartSystemPhysicalAddress;// Offset=0x0 Size=0x8
    unsigned long long LengthInBytes;// Offset=0x8 Size=0x8
};

struct _WHEA_MEMORY_RANGE_ERROR_SECTION// Size=0x68 (Id=2907)
{
    union _WHEA_MEMORY_RANGE_ERROR_SECTION_VALIDBITS ValidBits;// Offset=0x0 Size=0x8
    unsigned long Version;// Offset=0x8 Size=0x4
    union _WHEA_DEVICE_INFO DeviceInfo;// Offset=0xc Size=0x48
    unsigned char DeviceType;// Offset=0x54 Size=0x1
    unsigned char Reserved;// Offset=0x55 Size=0x1
    unsigned short RangeCount;// Offset=0x56 Size=0x2
    struct _WHEA_MEMORY_RANGE Ranges[1];// Offset=0x58 Size=0x10
};
