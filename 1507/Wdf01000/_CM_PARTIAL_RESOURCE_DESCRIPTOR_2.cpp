struct _unnamed_73// Size=0x8 (Id=73)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=74)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_73 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_34// Size=0xc (Id=34)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_35// Size=0x10 (Id=35)
{
    unsigned long Level;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_36// Size=0x10 (Id=36)
{
    unsigned short Reserved;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_37// Size=0x10 (Id=37)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_36 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_35 Translated;// Offset=0x0 Size=0x10
    };
};

struct _unnamed_38// Size=0xc (Id=38)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long Port;// Offset=0x4 Size=0x4
    unsigned long Reserved1;// Offset=0x8 Size=0x4
};

struct _unnamed_39// Size=0xc (Id=39)
{
    unsigned long Channel;// Offset=0x0 Size=0x4
    unsigned long RequestLine;// Offset=0x4 Size=0x4
    unsigned char TransferWidth;// Offset=0x8 Size=0x1
    unsigned char Reserved1;// Offset=0x9 Size=0x1
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Reserved3;// Offset=0xb Size=0x1
};

struct _unnamed_23// Size=0xc (Id=23)
{
    unsigned long Data[3];// Offset=0x0 Size=0xc
};

struct _unnamed_40// Size=0xc (Id=40)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long Reserved;// Offset=0x8 Size=0x4
};

struct _unnamed_41// Size=0xc (Id=41)
{
    unsigned long DataSize;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Reserved2;// Offset=0x8 Size=0x4
};

struct _unnamed_42// Size=0xc (Id=42)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length40;// Offset=0x8 Size=0x4
};

struct _unnamed_43// Size=0xc (Id=43)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length48;// Offset=0x8 Size=0x4
};

struct _unnamed_44// Size=0xc (Id=44)
{
    union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
    unsigned long Length64;// Offset=0x8 Size=0x4
};

struct _unnamed_29// Size=0xc (Id=29)
{
    unsigned char Class;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char Reserved1;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned long IdLowPart;// Offset=0x4 Size=0x4
    unsigned long IdHighPart;// Offset=0x8 Size=0x4
};

union _unnamed_45// Size=0x10 (Id=45)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_34 Generic;// Offset=0x0 Size=0xc
        struct _unnamed_34 Port;// Offset=0x0 Size=0xc
        struct _unnamed_35 Interrupt;// Offset=0x0 Size=0x10
        struct _unnamed_37 MessageInterrupt;// Offset=0x0 Size=0x10
        struct _unnamed_34 Memory;// Offset=0x0 Size=0xc
        struct _unnamed_38 Dma;// Offset=0x0 Size=0xc
        struct _unnamed_39 DmaV3;// Offset=0x0 Size=0xc
        struct _unnamed_23 DevicePrivate;// Offset=0x0 Size=0xc
        struct _unnamed_40 BusNumber;// Offset=0x0 Size=0xc
        struct _unnamed_41 DeviceSpecificData;// Offset=0x0 Size=0xc
        struct _unnamed_42 Memory40;// Offset=0x0 Size=0xc
        struct _unnamed_43 Memory48;// Offset=0x0 Size=0xc
        struct _unnamed_44 Memory64;// Offset=0x0 Size=0xc
        struct _unnamed_29 Connection;// Offset=0x0 Size=0xc
    };
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR// Size=0x14 (Id=878)
{
    union // Size=0x4 (Id=0)
    {
        unsigned char Type;// Offset=0x0 Size=0x1
        unsigned char ShareDisposition;// Offset=0x1 Size=0x1
        unsigned short Flags;// Offset=0x2 Size=0x2
        union <unnamed-type-u>// Size=0x10 (Id=5236)
        {
            struct <unnamed-type-Generic>// Size=0xc (Id=5237)
            {
                union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
                unsigned long Length;// Offset=0x8 Size=0x4
            };
            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Generic> Generic;// Offset=0x0 Size=0xc
            struct <unnamed-type-Port>// Size=0xc (Id=5241)
            {
                union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
                unsigned long Length;// Offset=0x8 Size=0x4
            };
            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Port> Port;// Offset=0x0 Size=0xc
            struct <unnamed-type-Interrupt>// Size=0x10 (Id=5245)
            {
                unsigned long Level;// Offset=0x0 Size=0x4
                unsigned long Vector;// Offset=0x4 Size=0x4
                unsigned long long Affinity;// Offset=0x8 Size=0x8
            };
            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Interrupt> Interrupt;// Offset=0x0 Size=0x10
            struct <unnamed-type-MessageInterrupt>// Size=0x10 (Id=5250)
            {
                struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-MessageInterrupt>::_unnamed_892::<unnamed-type-Raw> Raw;// Offset=0x0 Size=0x10
                struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-MessageInterrupt>::_unnamed_891::<unnamed-type-Translated> Translated;// Offset=0x0 Size=0x10
            };
            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-MessageInterrupt> MessageInterrupt;// Offset=0x0 Size=0x10
            struct <unnamed-type-Memory>// Size=0xc (Id=5254)
            {
                union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
                unsigned long Length;// Offset=0x8 Size=0x4
            };
            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Memory> Memory;// Offset=0x0 Size=0xc
            struct <unnamed-type-Dma>// Size=0xc (Id=5258)
            {
                unsigned long Channel;// Offset=0x0 Size=0x4
                unsigned long Port;// Offset=0x4 Size=0x4
                unsigned long Reserved1;// Offset=0x8 Size=0x4
            };
            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Dma> Dma;// Offset=0x0 Size=0xc
            struct <unnamed-type-DmaV3>// Size=0xc (Id=5263)
            {
                unsigned long Channel;// Offset=0x0 Size=0x4
                unsigned long RequestLine;// Offset=0x4 Size=0x4
                unsigned char TransferWidth;// Offset=0x8 Size=0x1
                unsigned char Reserved1;// Offset=0x9 Size=0x1
                unsigned char Reserved2;// Offset=0xa Size=0x1
                unsigned char Reserved3;// Offset=0xb Size=0x1
            };
            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-DmaV3> DmaV3;// Offset=0x0 Size=0xc
            struct <unnamed-type-DevicePrivate>// Size=0xc (Id=5271)
            {
                unsigned long Data[3];// Offset=0x0 Size=0xc
            };
            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-DevicePrivate> DevicePrivate;// Offset=0x0 Size=0xc
            struct <unnamed-type-BusNumber>// Size=0xc (Id=5275)
            {
                unsigned long Start;// Offset=0x0 Size=0x4
                unsigned long Length;// Offset=0x4 Size=0x4
                unsigned long Reserved;// Offset=0x8 Size=0x4
            };
            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-BusNumber> BusNumber;// Offset=0x0 Size=0xc
            struct <unnamed-type-DeviceSpecificData>// Size=0xc (Id=5280)
            {
                unsigned long DataSize;// Offset=0x0 Size=0x4
                unsigned long Reserved1;// Offset=0x4 Size=0x4
                unsigned long Reserved2;// Offset=0x8 Size=0x4
            };
            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-DeviceSpecificData> DeviceSpecificData;// Offset=0x0 Size=0xc
            struct <unnamed-type-Memory40>// Size=0xc (Id=5285)
            {
                union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
                unsigned long Length40;// Offset=0x8 Size=0x4
            };
            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Memory40> Memory40;// Offset=0x0 Size=0xc
            struct <unnamed-type-Memory48>// Size=0xc (Id=5289)
            {
                union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
                unsigned long Length48;// Offset=0x8 Size=0x4
            };
            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Memory48> Memory48;// Offset=0x0 Size=0xc
            struct <unnamed-type-Memory64>// Size=0xc (Id=5293)
            {
                union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
                unsigned long Length64;// Offset=0x8 Size=0x4
            };
            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Memory64> Memory64;// Offset=0x0 Size=0xc
            struct <unnamed-type-Connection>// Size=0xc (Id=5297)
            {
                unsigned char Class;// Offset=0x0 Size=0x1
                unsigned char Type;// Offset=0x1 Size=0x1
                unsigned char Reserved1;// Offset=0x2 Size=0x1
                unsigned char Reserved2;// Offset=0x3 Size=0x1
                unsigned long IdLowPart;// Offset=0x4 Size=0x4
                unsigned long IdHighPart;// Offset=0x8 Size=0x4
            };
            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Connection> Connection;// Offset=0x0 Size=0xc
        };
    };
    union _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u> u;// Offset=0x4 Size=0x10
};
