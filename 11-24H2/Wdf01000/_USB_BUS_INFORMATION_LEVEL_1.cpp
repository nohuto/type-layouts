struct _USB_BUS_INFORMATION_LEVEL_1// Size=0x10 (Id=3463)
{
    unsigned long TotalBandwidth;// Offset=0x0 Size=0x4
    unsigned long ConsumedBandwidth;// Offset=0x4 Size=0x4
    unsigned long ControllerNameLength;// Offset=0x8 Size=0x4
    wchar_t ControllerNameUnicodeString[1];// Offset=0xc Size=0x2
};
