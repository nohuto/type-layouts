union _WHEA_CXL_COMPONENT_EVENTS_SECTION_VALIDBITS// Size=0x8 (Id=3776)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long DeviceID:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long DeviceSerialNumber:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long CxlComponentEventLog:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long Reserved:61;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x3d
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

struct _WHEA_CXL_COMPONENT_EVENTS_SECTION// Size=0x21 (Id=3527)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    union _WHEA_CXL_COMPONENT_EVENTS_SECTION_VALIDBITS ValidBits;// Offset=0x4 Size=0x8
    struct _WHEA_CXL_PCIE_DEVICE_ID DeviceID;// Offset=0xc Size=0xc
    union _WHEA_CXL_DEVICE_SERIAL_NUMBER DeviceSerialNumber;// Offset=0x18 Size=0x8
    unsigned char CxlComponentEventLog[1];// Offset=0x20 Size=0x1
};
