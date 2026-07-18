enum _WDF_REQUEST_TYPE
{
    WdfRequestTypeCreate=0,
    WdfRequestTypeCreateNamedPipe=1,
    WdfRequestTypeClose=2,
    WdfRequestTypeRead=3,
    WdfRequestTypeWrite=4,
    WdfRequestTypeQueryInformation=5,
    WdfRequestTypeSetInformation=6,
    WdfRequestTypeQueryEA=7,
    WdfRequestTypeSetEA=8,
    WdfRequestTypeFlushBuffers=9,
    WdfRequestTypeQueryVolumeInformation=10,
    WdfRequestTypeSetVolumeInformation=11,
    WdfRequestTypeDirectoryControl=12,
    WdfRequestTypeFileSystemControl=13,
    WdfRequestTypeDeviceControl=14,
    WdfRequestTypeDeviceControlInternal=15,
    WdfRequestTypeShutdown=16,
    WdfRequestTypeLockControl=17,
    WdfRequestTypeCleanup=18,
    WdfRequestTypeCreateMailSlot=19,
    WdfRequestTypeQuerySecurity=20,
    WdfRequestTypeSetSecurity=21,
    WdfRequestTypePower=22,
    WdfRequestTypeSystemControl=23,
    WdfRequestTypeDeviceChange=24,
    WdfRequestTypeQueryQuota=25,
    WdfRequestTypeSetQuota=26,
    WdfRequestTypePnp=27,
    WdfRequestTypeOther=28,
    WdfRequestTypeUsb=64,
    WdfRequestTypeNoFormat=255,
    WdfRequestTypeMax=256
};

struct _IO_STATUS_BLOCK// Size=0x10 (Id=62)
{
    union // Size=0x4 (Id=0)
    {
        long Status;// Offset=0x0 Size=0x4
        void * Pointer;// Offset=0x0 Size=0x8
    };
    unsigned long long Information;// Offset=0x8 Size=0x8
};

struct _unnamed_287// Size=0x18 (Id=287)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Length;// Offset=0x8 Size=0x8
    unsigned long long Offset;// Offset=0x10 Size=0x8
};

struct _unnamed_288// Size=0x10 (Id=288)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _unnamed_289// Size=0x18 (Id=289)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _unnamed_290// Size=0x30 (Id=290)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _unnamed_288 Input;// Offset=0x8 Size=0x10
    struct _unnamed_289 Output;// Offset=0x18 Size=0x18
};

union _unnamed_291// Size=0x8 (Id=291)
{
    void * Ptr;// Offset=0x0 Size=0x8
    unsigned long long Value;// Offset=0x0 Size=0x8
};

struct _unnamed_292// Size=0x20 (Id=292)
{
    union _unnamed_291 Argument1;// Offset=0x0 Size=0x8
    union _unnamed_291 Argument2;// Offset=0x8 Size=0x8
    union _unnamed_291 Argument3;// Offset=0x10 Size=0x8
    union _unnamed_291 Argument4;// Offset=0x18 Size=0x8
};

struct _unnamed_294// Size=0x8 (Id=294)
{
    struct _WDF_USB_REQUEST_COMPLETION_PARAMS * Completion;// Offset=0x0 Size=0x8
};

union _unnamed_295// Size=0x30 (Id=295)
{
    union // Size=0x30 (Id=0)
    {
        struct _unnamed_287 Write;// Offset=0x0 Size=0x18
        struct _unnamed_287 Read;// Offset=0x0 Size=0x18
        struct _unnamed_290 Ioctl;// Offset=0x0 Size=0x30
        struct _unnamed_292 Others;// Offset=0x0 Size=0x20
        struct _unnamed_294 Usb;// Offset=0x0 Size=0x8
    };
};

struct _WDF_REQUEST_COMPLETION_PARAMS// Size=0x48 (Id=296)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    enum _WDF_REQUEST_TYPE Type;// Offset=0x4 Size=0x4
    struct _IO_STATUS_BLOCK IoStatus;// Offset=0x8 Size=0x10
    union _unnamed_295 Parameters;// Offset=0x18 Size=0x30
};
