struct _URB_HEADER// Size=0x18 (Id=754)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short Function;// Offset=0x2 Size=0x2
    long Status;// Offset=0x4 Size=0x4
    void * UsbdDeviceHandle;// Offset=0x8 Size=0x8
    unsigned long UsbdFlags;// Offset=0x10 Size=0x4
};

enum _USBD_PIPE_TYPE
{
    UsbdPipeTypeControl=0,
    UsbdPipeTypeIsochronous=1,
    UsbdPipeTypeBulk=2,
    UsbdPipeTypeInterrupt=3
};

struct _USBD_PIPE_INFORMATION// Size=0x18 (Id=778)
{
    unsigned short MaximumPacketSize;// Offset=0x0 Size=0x2
    unsigned char EndpointAddress;// Offset=0x2 Size=0x1
    unsigned char Interval;// Offset=0x3 Size=0x1
    enum _USBD_PIPE_TYPE PipeType;// Offset=0x4 Size=0x4
    void * PipeHandle;// Offset=0x8 Size=0x8
    unsigned long MaximumTransferSize;// Offset=0x10 Size=0x4
    unsigned long PipeFlags;// Offset=0x14 Size=0x4
};

struct _USBD_INTERFACE_INFORMATION// Size=0x30 (Id=659)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned char InterfaceNumber;// Offset=0x2 Size=0x1
    unsigned char AlternateSetting;// Offset=0x3 Size=0x1
    unsigned char Class;// Offset=0x4 Size=0x1
    unsigned char SubClass;// Offset=0x5 Size=0x1
    unsigned char Protocol;// Offset=0x6 Size=0x1
    unsigned char Reserved;// Offset=0x7 Size=0x1
    void * InterfaceHandle;// Offset=0x8 Size=0x8
    unsigned long NumberOfPipes;// Offset=0x10 Size=0x4
    struct _USBD_PIPE_INFORMATION Pipes[1];// Offset=0x18 Size=0x18
};

struct _URB_SELECT_INTERFACE// Size=0x50 (Id=558)
{
    struct _URB_HEADER Hdr;// Offset=0x0 Size=0x18
    void * ConfigurationHandle;// Offset=0x18 Size=0x8
    struct _USBD_INTERFACE_INFORMATION Interface;// Offset=0x20 Size=0x30
};

struct _URB_SELECT_CONFIGURATION// Size=0x58 (Id=534)
{
    struct _URB_HEADER Hdr;// Offset=0x0 Size=0x18
    struct _USB_CONFIGURATION_DESCRIPTOR * ConfigurationDescriptor;// Offset=0x18 Size=0x8
    void * ConfigurationHandle;// Offset=0x20 Size=0x8
    struct _USBD_INTERFACE_INFORMATION Interface;// Offset=0x28 Size=0x30
};

struct _URB_PIPE_REQUEST// Size=0x28 (Id=741)
{
    struct _URB_HEADER Hdr;// Offset=0x0 Size=0x18
    void * PipeHandle;// Offset=0x18 Size=0x8
    unsigned long Reserved;// Offset=0x20 Size=0x4
};

struct _URB_FRAME_LENGTH_CONTROL// Size=0x18 (Id=633)
{
    struct _URB_HEADER Hdr;// Offset=0x0 Size=0x18
};

struct _URB_GET_FRAME_LENGTH// Size=0x20 (Id=718)
{
    struct _URB_HEADER Hdr;// Offset=0x0 Size=0x18
    unsigned long FrameLength;// Offset=0x18 Size=0x4
    unsigned long FrameNumber;// Offset=0x1c Size=0x4
};

struct _URB_SET_FRAME_LENGTH// Size=0x20 (Id=441)
{
    struct _URB_HEADER Hdr;// Offset=0x0 Size=0x18
    long FrameLengthDelta;// Offset=0x18 Size=0x4
};

struct _URB_GET_CURRENT_FRAME_NUMBER// Size=0x20 (Id=431)
{
    struct _URB_HEADER Hdr;// Offset=0x0 Size=0x18
    unsigned long FrameNumber;// Offset=0x18 Size=0x4
};

struct _URB_HCD_AREA// Size=0x40 (Id=732)
{
    void * Reserved8[8];// Offset=0x0 Size=0x40
};

struct _URB_CONTROL_TRANSFER// Size=0x88 (Id=653)
{
    struct _URB_HEADER Hdr;// Offset=0x0 Size=0x18
    void * PipeHandle;// Offset=0x18 Size=0x8
    unsigned long TransferFlags;// Offset=0x20 Size=0x4
    unsigned long TransferBufferLength;// Offset=0x24 Size=0x4
    void * TransferBuffer;// Offset=0x28 Size=0x8
    struct _MDL * TransferBufferMDL;// Offset=0x30 Size=0x8
    struct _URB * UrbLink;// Offset=0x38 Size=0x8
    struct _URB_HCD_AREA hca;// Offset=0x40 Size=0x40
    unsigned char SetupPacket[8];// Offset=0x80 Size=0x8
};

struct _URB_CONTROL_TRANSFER_EX// Size=0x88 (Id=438)
{
    struct _URB_HEADER Hdr;// Offset=0x0 Size=0x18
    void * PipeHandle;// Offset=0x18 Size=0x8
    unsigned long TransferFlags;// Offset=0x20 Size=0x4
    unsigned long TransferBufferLength;// Offset=0x24 Size=0x4
    void * TransferBuffer;// Offset=0x28 Size=0x8
    struct _MDL * TransferBufferMDL;// Offset=0x30 Size=0x8
    unsigned long Timeout;// Offset=0x38 Size=0x4
    struct _URB_HCD_AREA hca;// Offset=0x40 Size=0x40
    unsigned char SetupPacket[8];// Offset=0x80 Size=0x8
};

struct _URB_BULK_OR_INTERRUPT_TRANSFER// Size=0x80 (Id=668)
{
    struct _URB_HEADER Hdr;// Offset=0x0 Size=0x18
    void * PipeHandle;// Offset=0x18 Size=0x8
    unsigned long TransferFlags;// Offset=0x20 Size=0x4
    unsigned long TransferBufferLength;// Offset=0x24 Size=0x4
    void * TransferBuffer;// Offset=0x28 Size=0x8
    struct _MDL * TransferBufferMDL;// Offset=0x30 Size=0x8
    struct _URB * UrbLink;// Offset=0x38 Size=0x8
    struct _URB_HCD_AREA hca;// Offset=0x40 Size=0x40
};

struct _USBD_ISO_PACKET_DESCRIPTOR// Size=0xc (Id=695)
{
    unsigned long Offset;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    long Status;// Offset=0x8 Size=0x4
};

struct _URB_ISOCH_TRANSFER// Size=0x98 (Id=769)
{
    struct _URB_HEADER Hdr;// Offset=0x0 Size=0x18
    void * PipeHandle;// Offset=0x18 Size=0x8
    unsigned long TransferFlags;// Offset=0x20 Size=0x4
    unsigned long TransferBufferLength;// Offset=0x24 Size=0x4
    void * TransferBuffer;// Offset=0x28 Size=0x8
    struct _MDL * TransferBufferMDL;// Offset=0x30 Size=0x8
    struct _URB * UrbLink;// Offset=0x38 Size=0x8
    struct _URB_HCD_AREA hca;// Offset=0x40 Size=0x40
    unsigned long StartFrame;// Offset=0x80 Size=0x4
    unsigned long NumberOfPackets;// Offset=0x84 Size=0x4
    unsigned long ErrorCount;// Offset=0x88 Size=0x4
    struct _USBD_ISO_PACKET_DESCRIPTOR IsoPacket[1];// Offset=0x8c Size=0xc
};

struct _URB_CONTROL_DESCRIPTOR_REQUEST// Size=0x88 (Id=581)
{
    struct _URB_HEADER Hdr;// Offset=0x0 Size=0x18
    void * Reserved;// Offset=0x18 Size=0x8
    unsigned long Reserved0;// Offset=0x20 Size=0x4
    unsigned long TransferBufferLength;// Offset=0x24 Size=0x4
    void * TransferBuffer;// Offset=0x28 Size=0x8
    struct _MDL * TransferBufferMDL;// Offset=0x30 Size=0x8
    struct _URB * UrbLink;// Offset=0x38 Size=0x8
    struct _URB_HCD_AREA hca;// Offset=0x40 Size=0x40
    unsigned short Reserved1;// Offset=0x80 Size=0x2
    unsigned char Index;// Offset=0x82 Size=0x1
    unsigned char DescriptorType;// Offset=0x83 Size=0x1
    unsigned short LanguageId;// Offset=0x84 Size=0x2
    unsigned short Reserved2;// Offset=0x86 Size=0x2
};

struct _URB_CONTROL_GET_STATUS_REQUEST// Size=0x88 (Id=622)
{
    struct _URB_HEADER Hdr;// Offset=0x0 Size=0x18
    void * Reserved;// Offset=0x18 Size=0x8
    unsigned long Reserved0;// Offset=0x20 Size=0x4
    unsigned long TransferBufferLength;// Offset=0x24 Size=0x4
    void * TransferBuffer;// Offset=0x28 Size=0x8
    struct _MDL * TransferBufferMDL;// Offset=0x30 Size=0x8
    struct _URB * UrbLink;// Offset=0x38 Size=0x8
    struct _URB_HCD_AREA hca;// Offset=0x40 Size=0x40
    unsigned char Reserved1[4];// Offset=0x80 Size=0x4
    unsigned short Index;// Offset=0x84 Size=0x2
    unsigned short Reserved2;// Offset=0x86 Size=0x2
};

struct _URB_CONTROL_FEATURE_REQUEST// Size=0x88 (Id=455)
{
    struct _URB_HEADER Hdr;// Offset=0x0 Size=0x18
    void * Reserved;// Offset=0x18 Size=0x8
    unsigned long Reserved2;// Offset=0x20 Size=0x4
    unsigned long Reserved3;// Offset=0x24 Size=0x4
    void * Reserved4;// Offset=0x28 Size=0x8
    struct _MDL * Reserved5;// Offset=0x30 Size=0x8
    struct _URB * UrbLink;// Offset=0x38 Size=0x8
    struct _URB_HCD_AREA hca;// Offset=0x40 Size=0x40
    unsigned short Reserved0;// Offset=0x80 Size=0x2
    unsigned short FeatureSelector;// Offset=0x82 Size=0x2
    unsigned short Index;// Offset=0x84 Size=0x2
    unsigned short Reserved1;// Offset=0x86 Size=0x2
};

struct _URB_CONTROL_VENDOR_OR_CLASS_REQUEST// Size=0x88 (Id=416)
{
    struct _URB_HEADER Hdr;// Offset=0x0 Size=0x18
    void * Reserved;// Offset=0x18 Size=0x8
    unsigned long TransferFlags;// Offset=0x20 Size=0x4
    unsigned long TransferBufferLength;// Offset=0x24 Size=0x4
    void * TransferBuffer;// Offset=0x28 Size=0x8
    struct _MDL * TransferBufferMDL;// Offset=0x30 Size=0x8
    struct _URB * UrbLink;// Offset=0x38 Size=0x8
    struct _URB_HCD_AREA hca;// Offset=0x40 Size=0x40
    unsigned char RequestTypeReservedBits;// Offset=0x80 Size=0x1
    unsigned char Request;// Offset=0x81 Size=0x1
    unsigned short Value;// Offset=0x82 Size=0x2
    unsigned short Index;// Offset=0x84 Size=0x2
    unsigned short Reserved1;// Offset=0x86 Size=0x2
};

struct _URB_CONTROL_GET_INTERFACE_REQUEST// Size=0x88 (Id=713)
{
    struct _URB_HEADER Hdr;// Offset=0x0 Size=0x18
    void * Reserved;// Offset=0x18 Size=0x8
    unsigned long Reserved0;// Offset=0x20 Size=0x4
    unsigned long TransferBufferLength;// Offset=0x24 Size=0x4
    void * TransferBuffer;// Offset=0x28 Size=0x8
    struct _MDL * TransferBufferMDL;// Offset=0x30 Size=0x8
    struct _URB * UrbLink;// Offset=0x38 Size=0x8
    struct _URB_HCD_AREA hca;// Offset=0x40 Size=0x40
    unsigned char Reserved1[4];// Offset=0x80 Size=0x4
    unsigned short Interface;// Offset=0x84 Size=0x2
    unsigned short Reserved2;// Offset=0x86 Size=0x2
};

struct _URB_CONTROL_GET_CONFIGURATION_REQUEST// Size=0x88 (Id=744)
{
    struct _URB_HEADER Hdr;// Offset=0x0 Size=0x18
    void * Reserved;// Offset=0x18 Size=0x8
    unsigned long Reserved0;// Offset=0x20 Size=0x4
    unsigned long TransferBufferLength;// Offset=0x24 Size=0x4
    void * TransferBuffer;// Offset=0x28 Size=0x8
    struct _MDL * TransferBufferMDL;// Offset=0x30 Size=0x8
    struct _URB * UrbLink;// Offset=0x38 Size=0x8
    struct _URB_HCD_AREA hca;// Offset=0x40 Size=0x40
    unsigned char Reserved1[8];// Offset=0x80 Size=0x8
};

struct _URB_OS_FEATURE_DESCRIPTOR_REQUEST// Size=0x88 (Id=724)
{
    struct _URB_HEADER Hdr;// Offset=0x0 Size=0x18
    void * Reserved;// Offset=0x18 Size=0x8
    unsigned long Reserved0;// Offset=0x20 Size=0x4
    unsigned long TransferBufferLength;// Offset=0x24 Size=0x4
    void * TransferBuffer;// Offset=0x28 Size=0x8
    struct _MDL * TransferBufferMDL;// Offset=0x30 Size=0x8
    struct _URB * UrbLink;// Offset=0x38 Size=0x8
    struct _URB_HCD_AREA hca;// Offset=0x40 Size=0x40
    struct // Size=0x1 (Id=0)
    {
        unsigned char Recipient:5;// Offset=0x80 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Reserved1:3;// Offset=0x80 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved2;// Offset=0x81 Size=0x1
    unsigned char InterfaceNumber;// Offset=0x82 Size=0x1
    unsigned char MS_PageIndex;// Offset=0x83 Size=0x1
    unsigned short MS_FeatureDescriptorIndex;// Offset=0x84 Size=0x2
    unsigned short Reserved3;// Offset=0x86 Size=0x2
};

struct _URB_OPEN_STATIC_STREAMS// Size=0x30 (Id=570)
{
    struct _URB_HEADER Hdr;// Offset=0x0 Size=0x18
    void * PipeHandle;// Offset=0x18 Size=0x8
    unsigned long NumberOfStreams;// Offset=0x20 Size=0x4
    unsigned short StreamInfoVersion;// Offset=0x24 Size=0x2
    unsigned short StreamInfoSize;// Offset=0x26 Size=0x2
    struct _USBD_STREAM_INFORMATION * Streams;// Offset=0x28 Size=0x8
};

struct _GUID// Size=0x10 (Id=66)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _URB_SECURE_BULK_OR_INTERRUPT_TRANSFER// Size=0x80 (Id=660)
{
    struct _URB_HEADER Hdr;// Offset=0x0 Size=0x18
    void * PipeHandle;// Offset=0x18 Size=0x8
    unsigned long TransferFlags;// Offset=0x20 Size=0x4
    struct _GUID SecureTransferBufferGuid;// Offset=0x24 Size=0x10
    unsigned long SecureTransferBufferLength;// Offset=0x34 Size=0x4
    struct _URB * UrbLink;// Offset=0x38 Size=0x8
    struct _URB_HCD_AREA hca;// Offset=0x40 Size=0x40
};

struct _URB_SECURE_ISOCH_TRANSFER// Size=0x98 (Id=618)
{
    struct _URB_HEADER Hdr;// Offset=0x0 Size=0x18
    void * PipeHandle;// Offset=0x18 Size=0x8
    unsigned long TransferFlags;// Offset=0x20 Size=0x4
    struct _GUID SecureTransferBufferGuid;// Offset=0x24 Size=0x10
    unsigned long SecureTransferBufferLength;// Offset=0x34 Size=0x4
    struct _URB * UrbLink;// Offset=0x38 Size=0x8
    struct _URB_HCD_AREA hca;// Offset=0x40 Size=0x40
    unsigned long StartFrame;// Offset=0x80 Size=0x4
    unsigned long NumberOfPackets;// Offset=0x84 Size=0x4
    unsigned long ErrorCount;// Offset=0x88 Size=0x4
    struct _USBD_ISO_PACKET_DESCRIPTOR IsoPacket[1];// Offset=0x8c Size=0xc
};

struct _URB_SELECT_INTERFACE_WITH_ENDPOINT_OFFLOAD// Size=0x60 (Id=738)
{
    struct _URB_HEADER Hdr;// Offset=0x0 Size=0x18
    void * ConfigurationHandle;// Offset=0x18 Size=0x8
    unsigned long NumberOfEndpointsToOffload;// Offset=0x20 Size=0x4
    void * InternalEndpointInformationArray;// Offset=0x28 Size=0x8
    struct _USBD_INTERFACE_INFORMATION Interface;// Offset=0x30 Size=0x30
};

enum _ENDPOINT_OFFLOAD_NOTIFICATION_EVENT_TYPE
{
    EndpointOffload_NoEvent=0,
    EndpointOffload_StopDueToPendingControllerResetRecovery=1
};

enum _ENDPOINT_OFFLOAD_RESPONSE_EVENT_TYPE
{
    EndpointOffload_NoPendingResponse=0,
    EndpointOffload_Stopped=1
};

struct _URB_ASYNC_NOTIFICATION_REQUEST_DURING_ENDPOINT_OFFLOAD// Size=0x28 (Id=760)
{
    struct _URB_HEADER Hdr;// Offset=0x0 Size=0x18
    void * PipeHandle;// Offset=0x18 Size=0x8
    enum _ENDPOINT_OFFLOAD_NOTIFICATION_EVENT_TYPE Event;// Offset=0x20 Size=0x4
    enum _ENDPOINT_OFFLOAD_RESPONSE_EVENT_TYPE Response;// Offset=0x24 Size=0x4
};

struct _URB_GET_ISOCH_PIPE_TRANSFER_PATH_DELAYS// Size=0x28 (Id=453)
{
    struct _URB_HEADER Hdr;// Offset=0x0 Size=0x18
    void * PipeHandle;// Offset=0x18 Size=0x8
    unsigned long MaximumSendPathDelayInMilliSeconds;// Offset=0x20 Size=0x4
    unsigned long MaximumCompletionPathDelayInMilliSeconds;// Offset=0x24 Size=0x4
};

struct _URB// Size=0x98 (Id=306)
{
    union // Size=0x98 (Id=0)
    {
        struct _URB_HEADER UrbHeader;// Offset=0x0 Size=0x18
        struct _URB_SELECT_INTERFACE UrbSelectInterface;// Offset=0x0 Size=0x50
        struct _URB_SELECT_CONFIGURATION UrbSelectConfiguration;// Offset=0x0 Size=0x58
        struct _URB_PIPE_REQUEST UrbPipeRequest;// Offset=0x0 Size=0x28
        struct _URB_FRAME_LENGTH_CONTROL UrbFrameLengthControl;// Offset=0x0 Size=0x18
        struct _URB_GET_FRAME_LENGTH UrbGetFrameLength;// Offset=0x0 Size=0x20
        struct _URB_SET_FRAME_LENGTH UrbSetFrameLength;// Offset=0x0 Size=0x20
        struct _URB_GET_CURRENT_FRAME_NUMBER UrbGetCurrentFrameNumber;// Offset=0x0 Size=0x20
        struct _URB_CONTROL_TRANSFER UrbControlTransfer;// Offset=0x0 Size=0x88
        struct _URB_CONTROL_TRANSFER_EX UrbControlTransferEx;// Offset=0x0 Size=0x88
        struct _URB_BULK_OR_INTERRUPT_TRANSFER UrbBulkOrInterruptTransfer;// Offset=0x0 Size=0x80
        struct _URB_ISOCH_TRANSFER UrbIsochronousTransfer;// Offset=0x0 Size=0x98
        struct _URB_CONTROL_DESCRIPTOR_REQUEST UrbControlDescriptorRequest;// Offset=0x0 Size=0x88
        struct _URB_CONTROL_GET_STATUS_REQUEST UrbControlGetStatusRequest;// Offset=0x0 Size=0x88
        struct _URB_CONTROL_FEATURE_REQUEST UrbControlFeatureRequest;// Offset=0x0 Size=0x88
        struct _URB_CONTROL_VENDOR_OR_CLASS_REQUEST UrbControlVendorClassRequest;// Offset=0x0 Size=0x88
        struct _URB_CONTROL_GET_INTERFACE_REQUEST UrbControlGetInterfaceRequest;// Offset=0x0 Size=0x88
        struct _URB_CONTROL_GET_CONFIGURATION_REQUEST UrbControlGetConfigurationRequest;// Offset=0x0 Size=0x88
        struct _URB_OS_FEATURE_DESCRIPTOR_REQUEST UrbOSFeatureDescriptorRequest;// Offset=0x0 Size=0x88
        struct _URB_OPEN_STATIC_STREAMS UrbOpenStaticStreams;// Offset=0x0 Size=0x30
        struct _URB_SECURE_BULK_OR_INTERRUPT_TRANSFER UrbSecureBulkOrInterruptTransfer;// Offset=0x0 Size=0x80
        struct _URB_SECURE_ISOCH_TRANSFER UrbSecureIsochronousTransfer;// Offset=0x0 Size=0x98
        struct _URB_SELECT_INTERFACE_WITH_ENDPOINT_OFFLOAD UrbSelectInterfaceWithEndpointOffload;// Offset=0x0 Size=0x60
        struct _URB_ASYNC_NOTIFICATION_REQUEST_DURING_ENDPOINT_OFFLOAD UrbAsyncNotificationRequestDuringEndpointOffload;// Offset=0x0 Size=0x28
        struct _URB_GET_ISOCH_PIPE_TRANSFER_PATH_DELAYS UrbGetIsochPipeTransferPathDelays;// Offset=0x0 Size=0x28
    };
};
