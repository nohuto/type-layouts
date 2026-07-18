struct _WMI_IRQ_RECORD// Size=0x18 (Id=2796)
{
    unsigned long long IRQAffinity;// Offset=0x0 Size=0x8
    unsigned short IRQGroup;// Offset=0x8 Size=0x2
    unsigned short Reserved;// Offset=0xa Size=0x2
    unsigned long IRQNum;// Offset=0xc Size=0x4
    unsigned long DeviceDescriptionLen;// Offset=0x10 Size=0x4
    wchar_t DeviceDescription[1];// Offset=0x14 Size=0x2
};
