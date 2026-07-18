union _LARGE_INTEGER// Size=0x8 (Id=156)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=5909)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

union _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>// Size=0x10 (Id=1904)
{
    union // Size=0x10 (Id=0)
    {
        struct <unnamed-type-Generic>// Size=0xc (Id=2737)
        {
            union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
            unsigned long Length;// Offset=0x8 Size=0x4
        };
        struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Generic> Generic;// Offset=0x0 Size=0xc
        struct <unnamed-type-Port>// Size=0xc (Id=2741)
        {
            union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
            unsigned long Length;// Offset=0x8 Size=0x4
        };
        struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Port> Port;// Offset=0x0 Size=0xc
        struct <unnamed-type-Interrupt>// Size=0x10 (Id=2745)
        {
            unsigned short Level;// Offset=0x0 Size=0x2
            unsigned short Group;// Offset=0x2 Size=0x2
            unsigned long Vector;// Offset=0x4 Size=0x4
            unsigned long long Affinity;// Offset=0x8 Size=0x8
        };
        struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Interrupt> Interrupt;// Offset=0x0 Size=0x10
        struct <unnamed-type-MessageInterrupt>// Size=0x10 (Id=2751)
        {
            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-MessageInterrupt>::_unnamed_1910::<unnamed-type-Raw> Raw;// Offset=0x0 Size=0x10
            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-MessageInterrupt>::_unnamed_1911::<unnamed-type-Translated> Translated;// Offset=0x0 Size=0x10
        };
        struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-MessageInterrupt> MessageInterrupt;// Offset=0x0 Size=0x10
        struct <unnamed-type-Memory>// Size=0xc (Id=2755)
        {
            union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
            unsigned long Length;// Offset=0x8 Size=0x4
        };
        struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Memory> Memory;// Offset=0x0 Size=0xc
        struct <unnamed-type-Dma>// Size=0xc (Id=2759)
        {
            unsigned long Channel;// Offset=0x0 Size=0x4
            unsigned long Port;// Offset=0x4 Size=0x4
            unsigned long Reserved1;// Offset=0x8 Size=0x4
        };
        struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Dma> Dma;// Offset=0x0 Size=0xc
        struct <unnamed-type-DmaV3>// Size=0xc (Id=2764)
        {
            unsigned long Channel;// Offset=0x0 Size=0x4
            unsigned long RequestLine;// Offset=0x4 Size=0x4
            unsigned char TransferWidth;// Offset=0x8 Size=0x1
            unsigned char Reserved1;// Offset=0x9 Size=0x1
            unsigned char Reserved2;// Offset=0xa Size=0x1
            unsigned char Reserved3;// Offset=0xb Size=0x1
        };
        struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-DmaV3> DmaV3;// Offset=0x0 Size=0xc
        struct <unnamed-type-DevicePrivate>// Size=0xc (Id=2772)
        {
            unsigned long Data[3];// Offset=0x0 Size=0xc
        };
        struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-DevicePrivate> DevicePrivate;// Offset=0x0 Size=0xc
        struct <unnamed-type-BusNumber>// Size=0xc (Id=2776)
        {
            unsigned long Start;// Offset=0x0 Size=0x4
            unsigned long Length;// Offset=0x4 Size=0x4
            unsigned long Reserved;// Offset=0x8 Size=0x4
        };
        struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-BusNumber> BusNumber;// Offset=0x0 Size=0xc
        struct <unnamed-type-DeviceSpecificData>// Size=0xc (Id=2781)
        {
            unsigned long DataSize;// Offset=0x0 Size=0x4
            unsigned long Reserved1;// Offset=0x4 Size=0x4
            unsigned long Reserved2;// Offset=0x8 Size=0x4
        };
        struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-DeviceSpecificData> DeviceSpecificData;// Offset=0x0 Size=0xc
        struct <unnamed-type-Memory40>// Size=0xc (Id=2786)
        {
            union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
            unsigned long Length40;// Offset=0x8 Size=0x4
        };
        struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Memory40> Memory40;// Offset=0x0 Size=0xc
        struct <unnamed-type-Memory48>// Size=0xc (Id=2790)
        {
            union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
            unsigned long Length48;// Offset=0x8 Size=0x4
        };
        struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Memory48> Memory48;// Offset=0x0 Size=0xc
        struct <unnamed-type-Memory64>// Size=0xc (Id=2794)
        {
            union _LARGE_INTEGER Start;// Offset=0x0 Size=0x8
            unsigned long Length64;// Offset=0x8 Size=0x4
        };
        struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Memory64> Memory64;// Offset=0x0 Size=0xc
        struct <unnamed-type-Connection>// Size=0xc (Id=2798)
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
