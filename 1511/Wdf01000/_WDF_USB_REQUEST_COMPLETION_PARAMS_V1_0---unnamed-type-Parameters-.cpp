union _WDF_USB_CONTROL_SETUP_PACKET// Size=0x8 (Id=399)
{
    struct <unnamed-type-Packet>// Size=0x8 (Id=19416)
    {
        union <unnamed-type-bm>// Size=0x1 (Id=19417)
        {
            struct <unnamed-type-Request>// Size=0x1 (Id=19418)
            {
                unsigned char Recipient:2;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x2
                unsigned char Reserved:3;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x3
                unsigned char Type:2;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x2
                unsigned char Dir:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
            };
            struct _WDF_USB_CONTROL_SETUP_PACKET::<unnamed-type-Packet>::<unnamed-type-bm>::<unnamed-type-Request> Request;// Offset=0x0 Size=0x1
            unsigned char Byte;// Offset=0x0 Size=0x1
        };
        union _WDF_USB_CONTROL_SETUP_PACKET::<unnamed-type-Packet>::<unnamed-type-bm> bm;// Offset=0x0 Size=0x1
        unsigned char bRequest;// Offset=0x1 Size=0x1
        union <unnamed-type-wValue>// Size=0x2 (Id=19427)
        {
            struct <unnamed-type-Bytes>// Size=0x2 (Id=19428)
            {
                unsigned char LowByte;// Offset=0x0 Size=0x1
                unsigned char HiByte;// Offset=0x1 Size=0x1
            };
            struct _WDF_USB_CONTROL_SETUP_PACKET::<unnamed-type-Packet>::<unnamed-type-wValue>::<unnamed-type-Bytes> Bytes;// Offset=0x0 Size=0x2
            unsigned short Value;// Offset=0x0 Size=0x2
        };
        union _WDF_USB_CONTROL_SETUP_PACKET::<unnamed-type-Packet>::<unnamed-type-wValue> wValue;// Offset=0x2 Size=0x2
        union <unnamed-type-wIndex>// Size=0x2 (Id=19434)
        {
            struct <unnamed-type-Bytes>// Size=0x2 (Id=19435)
            {
                unsigned char LowByte;// Offset=0x0 Size=0x1
                unsigned char HiByte;// Offset=0x1 Size=0x1
            };
            struct _WDF_USB_CONTROL_SETUP_PACKET::<unnamed-type-Packet>::<unnamed-type-wIndex>::<unnamed-type-Bytes> Bytes;// Offset=0x0 Size=0x2
            unsigned short Value;// Offset=0x0 Size=0x2
        };
        union _WDF_USB_CONTROL_SETUP_PACKET::<unnamed-type-Packet>::<unnamed-type-wIndex> wIndex;// Offset=0x4 Size=0x2
        unsigned short wLength;// Offset=0x6 Size=0x2
    };
    struct _WDF_USB_CONTROL_SETUP_PACKET::<unnamed-type-Packet> Packet;// Offset=0x0 Size=0x8
    struct <unnamed-type-Generic>// Size=0x8 (Id=19443)
    {
        unsigned char Bytes[8];// Offset=0x0 Size=0x8
    };
    struct _WDF_USB_CONTROL_SETUP_PACKET::<unnamed-type-Generic> Generic;// Offset=0x0 Size=0x8
};

union _WDF_USB_REQUEST_COMPLETION_PARAMS_V1_0::<unnamed-type-Parameters>// Size=0x18 (Id=3104)
{
    union // Size=0x18 (Id=0)
    {
        struct <unnamed-type-DeviceString>// Size=0x10 (Id=19929)
        {
            struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
            unsigned short LangID;// Offset=0x8 Size=0x2
            unsigned char StringIndex;// Offset=0xa Size=0x1
            unsigned char RequiredSize;// Offset=0xb Size=0x1
        };
        struct _WDF_USB_REQUEST_COMPLETION_PARAMS_V1_0::<unnamed-type-Parameters>::<unnamed-type-DeviceString> DeviceString;// Offset=0x0 Size=0x10
        struct <unnamed-type-DeviceControlTransfer>// Size=0x18 (Id=19935)
        {
            struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
            union _WDF_USB_CONTROL_SETUP_PACKET SetupPacket;// Offset=0x8 Size=0x8
            unsigned long Length;// Offset=0x10 Size=0x4
        };
        struct _WDF_USB_REQUEST_COMPLETION_PARAMS_V1_0::<unnamed-type-Parameters>::<unnamed-type-DeviceControlTransfer> DeviceControlTransfer;// Offset=0x0 Size=0x18
        struct <unnamed-type-DeviceUrb>// Size=0x8 (Id=19940)
        {
            struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
        };
        struct _WDF_USB_REQUEST_COMPLETION_PARAMS_V1_0::<unnamed-type-Parameters>::<unnamed-type-DeviceUrb> DeviceUrb;// Offset=0x0 Size=0x8
        struct <unnamed-type-PipeWrite>// Size=0x18 (Id=19943)
        {
            struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
            unsigned long long Length;// Offset=0x8 Size=0x8
            unsigned long long Offset;// Offset=0x10 Size=0x8
        };
        struct _WDF_USB_REQUEST_COMPLETION_PARAMS_V1_0::<unnamed-type-Parameters>::<unnamed-type-PipeWrite> PipeWrite;// Offset=0x0 Size=0x18
        struct <unnamed-type-PipeRead>// Size=0x18 (Id=19948)
        {
            struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
            unsigned long long Length;// Offset=0x8 Size=0x8
            unsigned long long Offset;// Offset=0x10 Size=0x8
        };
        struct _WDF_USB_REQUEST_COMPLETION_PARAMS_V1_0::<unnamed-type-Parameters>::<unnamed-type-PipeRead> PipeRead;// Offset=0x0 Size=0x18
        struct <unnamed-type-PipeUrb>// Size=0x8 (Id=19953)
        {
            struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
        };
        struct _WDF_USB_REQUEST_COMPLETION_PARAMS_V1_0::<unnamed-type-Parameters>::<unnamed-type-PipeUrb> PipeUrb;// Offset=0x0 Size=0x8
    };
};
