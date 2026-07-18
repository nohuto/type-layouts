union _LARGE_INTEGER// Size=0x8 (Id=371)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=12031)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_146// Size=0xc (Id=146)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_147// Size=0x10 (Id=147)
{
    unsigned long Level;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_149// Size=0x10 (Id=149)
{
    unsigned short Reserved;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_150// Size=0x10 (Id=150)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_149 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_147 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_151// Size=0xc (Id=151)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_152// Size=0xc (Id=152)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_154// Size=0xc (Id=154)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_155// Size=0xc (Id=155)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_156// Size=0xc (Id=156)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_157// Size=0xc (Id=157)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_158// Size=0xc (Id=158)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_159// Size=0xc (Id=159)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_162// Size=0xc (Id=162)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_163// Size=0x10 (Id=163)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_146 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_146 Port;// Offset=0x0 Size=0xc
        struct _unnamed_147 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_150 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_146 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_151 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_152 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_154 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_155 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_156 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_157 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_158 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_159 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_162 Connection;// Offset=0x0 Size=0xc
    };
};
