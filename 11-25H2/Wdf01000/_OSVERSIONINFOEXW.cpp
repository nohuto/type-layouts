struct _OSVERSIONINFOEXW// Size=0x11c (Id=1452)
{
    unsigned long dwOSVersionInfoSize;// Offset=0x0 Size=0x4
    unsigned long dwMajorVersion;// Offset=0x4 Size=0x4
    unsigned long dwMinorVersion;// Offset=0x8 Size=0x4
    unsigned long dwBuildNumber;// Offset=0xc Size=0x4
    unsigned long dwPlatformId;// Offset=0x10 Size=0x4
    wchar_t szCSDVersion[128];// Offset=0x14 Size=0x100
    unsigned short wServicePackMajor;// Offset=0x114 Size=0x2
    unsigned short wServicePackMinor;// Offset=0x116 Size=0x2
    unsigned short wSuiteMask;// Offset=0x118 Size=0x2
    unsigned char wProductType;// Offset=0x11a Size=0x1
    unsigned char wReserved;// Offset=0x11b Size=0x1
};
