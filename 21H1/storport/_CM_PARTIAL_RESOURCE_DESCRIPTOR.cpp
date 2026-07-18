struct _anonymous_10// Size=0x8 (Id=10)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_10 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _anonymous_624// Size=0xc (Id=624)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _anonymous_625// Size=0x10 (Id=625)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _anonymous_626// Size=0x10 (Id=626)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _anonymous_627// Size=0x10 (Id=627)
{
    union // Size=0x10 (Id=0)
    {
        struct _anonymous_626 Raw;// Offset=0x0 Size=0x10
        struct _anonymous_625 Translated;// Offset=0x0 Size=0x10
    };
};

struct _anonymous_628// Size=0xc (Id=628)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _anonymous_629// Size=0xc (Id=629)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _anonymous_630// Size=0xc (Id=630)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _anonymous_631// Size=0xc (Id=631)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _anonymous_632// Size=0xc (Id=632)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _anonymous_633// Size=0xc (Id=633)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _anonymous_634// Size=0xc (Id=634)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _anonymous_635// Size=0xc (Id=635)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _anonymous_636// Size=0xc (Id=636)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _anonymous_637// Size=0x10 (Id=637)
{
    union // Size=0x10 (Id=0)
    {
        struct _anonymous_624 Generic;// Offset=0x0 Size=0xc
        struct _anonymous_624 Port;// Offset=0x0 Size=0xc
        struct _anonymous_625 Interrupt;// Offset=0x0 Size=0x10
        struct _anonymous_627 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _anonymous_624 Memory;// Offset=0x0 Size=0xc
        struct _anonymous_628 Dma;// Offset=0x0 Size=0xc
        struct _anonymous_629 DmaV3;// Offset=0x0 Size=0xc
        struct _anonymous_630 DevicePrivate;// Offset=0x0 Size=0xc
        struct _anonymous_631 BusNumber;// Offset=0x0 Size=0xc
        struct _anonymous_632 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _anonymous_633 Memory40;// Offset=0x0 Size=0xc
        struct _anonymous_634 Memory48;// Offset=0x0 Size=0xc
        struct _anonymous_635 Memory64;// Offset=0x0 Size=0xc
        struct _anonymous_636 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=638)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char ShareDisposition;// Offset=0x1 Size=0x1
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _anonymous_637 u;// Offset=0x4 Size=0x10
};
