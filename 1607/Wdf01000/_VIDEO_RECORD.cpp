struct _VIDEO_RECORD// Size=0xa18 (Id=1605)
{
    unsigned long MemorySize;// Offset=0x0 Size=0x4
    unsigned long XResolution;// Offset=0x4 Size=0x4
    unsigned long YResolution;// Offset=0x8 Size=0x4
    unsigned long BitsPerPixel;// Offset=0xc Size=0x4
    unsigned long VRefresh;// Offset=0x10 Size=0x4
    wchar_t ChipType[256];// Offset=0x14 Size=0x200
    wchar_t DACType[256];// Offset=0x214 Size=0x200
    wchar_t AdapterString[256];// Offset=0x414 Size=0x200
    wchar_t BiosString[256];// Offset=0x614 Size=0x200
    wchar_t DeviceId[256];// Offset=0x814 Size=0x200
    unsigned long StateFlags;// Offset=0xa14 Size=0x4
};
