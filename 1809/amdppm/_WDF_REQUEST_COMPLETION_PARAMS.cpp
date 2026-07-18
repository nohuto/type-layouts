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

struct _IO_STATUS_BLOCK// Size=0x10 (Id=66)
{
    union // Size=0x4 (Id=0)
    {
        long Status;// Offset=0x0 Size=0x4
        void * Pointer;// Offset=0x0 Size=0x8
    };
    unsigned long long Information;// Offset=0x8 Size=0x8
};

struct _unnamed_300// Size=0x18 (Id=300)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Length;// Offset=0x8 Size=0x8
    unsigned long long Offset;// Offset=0x10 Size=0x8
};

struct _unnamed_301// Size=0x10 (Id=301)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _unnamed_302// Size=0x18 (Id=302)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _unnamed_303// Size=0x30 (Id=303)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _unnamed_301 Input;// Offset=0x8 Size=0x10
    struct _unnamed_302 Output;// Offset=0x18 Size=0x18
};

union _unnamed_304// Size=0x8 (Id=304)
{
    void * Ptr;// Offset=0x0 Size=0x8
    unsigned long long Value;// Offset=0x0 Size=0x8
};

struct _unnamed_305// Size=0x20 (Id=305)
{
    union _unnamed_304 Argument1;// Offset=0x0 Size=0x8
    union _unnamed_304 Argument2;// Offset=0x8 Size=0x8
    union _unnamed_304 Argument3;// Offset=0x10 Size=0x8
    union _unnamed_304 Argument4;// Offset=0x18 Size=0x8
};

struct _unnamed_307// Size=0x8 (Id=307)
{
    struct _WDF_USB_REQUEST_COMPLETION_PARAMS * Completion;// Offset=0x0 Size=0x8
};

union _unnamed_308// Size=0x30 (Id=308)
{
    union // Size=0x30 (Id=0)
    {
        struct _unnamed_300 Write;// Offset=0x0 Size=0x18
        struct _unnamed_300 Read;// Offset=0x0 Size=0x18
        struct _unnamed_303 Ioctl;// Offset=0x0 Size=0x30
        struct _unnamed_305 Others;// Offset=0x0 Size=0x20
        struct _unnamed_307 Usb;// Offset=0x0 Size=0x8
    };
};

struct _WDF_REQUEST_COMPLETION_PARAMS// Size=0x48 (Id=309)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    enum _WDF_REQUEST_TYPE Type;// Offset=0x4 Size=0x4
    struct _IO_STATUS_BLOCK IoStatus;// Offset=0x8 Size=0x10
    union _unnamed_308 Parameters;// Offset=0x18 Size=0x30
};
