union _WHEA_CXL_PROTOCOL_ERROR_SECTION_VALIDBITS// Size=0x8 (Id=2849)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long CxlAgentType:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long CxlAgentAddress:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long DeviceID:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long DeviceSerialNumber:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long CapabilityStructure:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long CxlDvsec:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long CxlErrorLog:1;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x1
        unsigned long long Reserved:57;// Offset=0x0 Size=0x8 BitOffset=0x7 BitSize=0x39
    };
    unsigned long long ValidBits;// Offset=0x0 Size=0x8
};

union _WHEA_CXL_AGENT_ADDRESS// Size=0x8 (Id=3792)
{
    unsigned char FunctionNumber;// Offset=0x0 Size=0x1
    unsigned char DeviceNumber;// Offset=0x1 Size=0x1
    unsigned char BusNumber;// Offset=0x2 Size=0x1
    unsigned short SegmentNumber;// Offset=0x3 Size=0x2
    unsigned char Reserved[3];// Offset=0x5 Size=0x3
    unsigned char CxlPortRcrbBaseAddress[8];// Offset=0x0 Size=0x8
};

struct _WHEA_CXL_DEVICE_ID// Size=0x10 (Id=3840)
{
    unsigned short VendorID;// Offset=0x0 Size=0x2
    unsigned short DeviceID;// Offset=0x2 Size=0x2
    unsigned short SubsystemVendorID;// Offset=0x4 Size=0x2
    unsigned short SubsystemDeviceID;// Offset=0x6 Size=0x2
    unsigned short ClassCode;// Offset=0x8 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short Reserved:3;// Offset=0xa Size=0x2 BitOffset=0x0 BitSize=0x3
        unsigned short SlotNumber:13;// Offset=0xa Size=0x2 BitOffset=0x3 BitSize=0xd
    };
    unsigned char Reserved2[4];// Offset=0xc Size=0x4
};

union _WHEA_CXL_DEVICE_SERIAL_NUMBER// Size=0x8 (Id=2313)
{
    unsigned long CxlDeviceSerialNumberLowerDW;// Offset=0x0 Size=0x4
    unsigned long CxlDeviceSerialNumberUpperDW;// Offset=0x4 Size=0x4
    unsigned long long AsUlonglong;// Offset=0x0 Size=0x8
};

struct _WHEA_CXL_PROTOCOL_ERROR_SECTION// Size=0x75 (Id=3481)
{
    union _WHEA_CXL_PROTOCOL_ERROR_SECTION_VALIDBITS ValidBits;// Offset=0x0 Size=0x8
    unsigned char CxlAgentType;// Offset=0x8 Size=0x1
    unsigned char Reserved[7];// Offset=0x9 Size=0x7
    union _WHEA_CXL_AGENT_ADDRESS CxlAgentAddress;// Offset=0x10 Size=0x8
    struct _WHEA_CXL_DEVICE_ID DeviceID;// Offset=0x18 Size=0x10
    union _WHEA_CXL_DEVICE_SERIAL_NUMBER DeviceSerialNumber;// Offset=0x28 Size=0x8
    unsigned char CapabilityStructure[60];// Offset=0x30 Size=0x3c
    unsigned short CxlDvsecLength;// Offset=0x6c Size=0x2
    unsigned short CxlErrorLogLength;// Offset=0x6e Size=0x2
    unsigned char Reserved2[4];// Offset=0x70 Size=0x4
    unsigned char CxlDvsecAndErrorLog[1];// Offset=0x74 Size=0x1
};
