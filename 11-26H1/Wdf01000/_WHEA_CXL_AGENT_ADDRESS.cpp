union _WHEA_CXL_AGENT_ADDRESS// Size=0x8 (Id=3792)
{
    unsigned char FunctionNumber;// Offset=0x0 Size=0x1
    unsigned char DeviceNumber;// Offset=0x1 Size=0x1
    unsigned char BusNumber;// Offset=0x2 Size=0x1
    unsigned short SegmentNumber;// Offset=0x3 Size=0x2
    unsigned char Reserved[3];// Offset=0x5 Size=0x3
    unsigned char CxlPortRcrbBaseAddress[8];// Offset=0x0 Size=0x8
};
