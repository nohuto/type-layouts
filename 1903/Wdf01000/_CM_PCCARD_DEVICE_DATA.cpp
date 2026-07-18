struct _CM_PCCARD_DEVICE_DATA// Size=0x20 (Id=2711)
{
    unsigned char Flags;// Offset=0x0 Size=0x1
    unsigned char ErrorCode;// Offset=0x1 Size=0x1
    unsigned short Reserved;// Offset=0x2 Size=0x2
    unsigned long BusData;// Offset=0x4 Size=0x4
    unsigned long DeviceId;// Offset=0x8 Size=0x4
    unsigned long LegacyBaseAddress;// Offset=0xc Size=0x4
    unsigned char IRQMap[16];// Offset=0x10 Size=0x10
};
