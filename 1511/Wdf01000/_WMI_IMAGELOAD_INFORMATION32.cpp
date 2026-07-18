struct _WMI_IMAGELOAD_INFORMATION32// Size=0x30 (Id=1990)
{
    unsigned int ImageBase32;// Offset=0x0 Size=0x4
    unsigned int ImageSize32;// Offset=0x4 Size=0x4
    unsigned long ProcessId;// Offset=0x8 Size=0x4
    unsigned long ImageChecksum;// Offset=0xc Size=0x4
    unsigned long TimeDateStamp;// Offset=0x10 Size=0x4
    unsigned char SignatureLevel;// Offset=0x14 Size=0x1
    unsigned char SignatureType;// Offset=0x15 Size=0x1
    unsigned short Reserved0;// Offset=0x16 Size=0x2
    unsigned int DefaultBase32;// Offset=0x18 Size=0x4
    unsigned long Reserved1;// Offset=0x1c Size=0x4
    unsigned long Reserved2;// Offset=0x20 Size=0x4
    unsigned long Reserved3;// Offset=0x24 Size=0x4
    unsigned long Reserved4;// Offset=0x28 Size=0x4
    wchar_t FileName[1];// Offset=0x2c Size=0x2
};
