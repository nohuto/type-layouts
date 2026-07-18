struct _OSVERSIONINFOEXA// Size=0x9c (Id=2708)
{
    unsigned long dwOSVersionInfoSize;// Offset=0x0 Size=0x4
    unsigned long dwMajorVersion;// Offset=0x4 Size=0x4
    unsigned long dwMinorVersion;// Offset=0x8 Size=0x4
    unsigned long dwBuildNumber;// Offset=0xc Size=0x4
    unsigned long dwPlatformId;// Offset=0x10 Size=0x4
    char szCSDVersion[128];// Offset=0x14 Size=0x80
    unsigned short wServicePackMajor;// Offset=0x94 Size=0x2
    unsigned short wServicePackMinor;// Offset=0x96 Size=0x2
    unsigned short wSuiteMask;// Offset=0x98 Size=0x2
    unsigned char wProductType;// Offset=0x9a Size=0x1
    unsigned char wReserved;// Offset=0x9b Size=0x1
};
