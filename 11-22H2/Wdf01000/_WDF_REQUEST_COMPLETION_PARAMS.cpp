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

struct _IO_STATUS_BLOCK// Size=0x10 (Id=103)
{
    union // Size=0x4 (Id=0)
    {
        long Status;// Offset=0x0 Size=0x4
        void * Pointer;// Offset=0x0 Size=0x8
    };
    unsigned long long Information;// Offset=0x8 Size=0x8
};

struct _WDF_REQUEST_COMPLETION_PARAMS// Size=0x48 (Id=2384)
{
    union // Size=0x18 (Id=0)
    {
        unsigned long Size;// Offset=0x0 Size=0x4
        enum _WDF_REQUEST_TYPE Type;// Offset=0x4 Size=0x4
        struct _IO_STATUS_BLOCK IoStatus;// Offset=0x8 Size=0x10
        union <unnamed-type-Parameters>// Size=0x30 (Id=21778)
        {
            struct <unnamed-type-Write>// Size=0x18 (Id=21779)
            {
                struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
                unsigned long long Length;// Offset=0x8 Size=0x8
                unsigned long long Offset;// Offset=0x10 Size=0x8
            };
            struct _WDF_REQUEST_COMPLETION_PARAMS::<unnamed-type-Parameters>::<unnamed-type-Write> Write;// Offset=0x0 Size=0x18
            struct <unnamed-type-Read>// Size=0x18 (Id=21784)
            {
                struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
                unsigned long long Length;// Offset=0x8 Size=0x8
                unsigned long long Offset;// Offset=0x10 Size=0x8
            };
            struct _WDF_REQUEST_COMPLETION_PARAMS::<unnamed-type-Parameters>::<unnamed-type-Read> Read;// Offset=0x0 Size=0x18
            struct <unnamed-type-Ioctl>// Size=0x30 (Id=21789)
            {
                unsigned long IoControlCode;// Offset=0x0 Size=0x4
                struct <unnamed-type-Input>// Size=0x10 (Id=21791)
                {
                    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
                    unsigned long long Offset;// Offset=0x8 Size=0x8
                };
                struct _WDF_REQUEST_COMPLETION_PARAMS::<unnamed-type-Parameters>::<unnamed-type-Ioctl>::<unnamed-type-Input> Input;// Offset=0x8 Size=0x10
                struct <unnamed-type-Output>// Size=0x18 (Id=21795)
                {
                    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
                    unsigned long long Offset;// Offset=0x8 Size=0x8
                    unsigned long long Length;// Offset=0x10 Size=0x8
                };
                struct _WDF_REQUEST_COMPLETION_PARAMS::<unnamed-type-Parameters>::<unnamed-type-Ioctl>::<unnamed-type-Output> Output;// Offset=0x18 Size=0x18
            };
            struct _WDF_REQUEST_COMPLETION_PARAMS::<unnamed-type-Parameters>::<unnamed-type-Ioctl> Ioctl;// Offset=0x0 Size=0x30
            struct <unnamed-type-Others>// Size=0x20 (Id=21801)
            {
                union <unnamed-type-Argument1>// Size=0x8 (Id=21802)
                {
                    void * Ptr;// Offset=0x0 Size=0x8
                    unsigned long long Value;// Offset=0x0 Size=0x8
                };
                union _WDF_REQUEST_COMPLETION_PARAMS::<unnamed-type-Parameters>::<unnamed-type-Others>::<unnamed-type-Argument1> Argument1;// Offset=0x0 Size=0x8
                union <unnamed-type-Argument2>// Size=0x8 (Id=21806)
                {
                    void * Ptr;// Offset=0x0 Size=0x8
                    unsigned long long Value;// Offset=0x0 Size=0x8
                };
                union _WDF_REQUEST_COMPLETION_PARAMS::<unnamed-type-Parameters>::<unnamed-type-Others>::<unnamed-type-Argument2> Argument2;// Offset=0x8 Size=0x8
                union <unnamed-type-Argument3>// Size=0x8 (Id=21810)
                {
                    void * Ptr;// Offset=0x0 Size=0x8
                    unsigned long long Value;// Offset=0x0 Size=0x8
                };
                union _WDF_REQUEST_COMPLETION_PARAMS::<unnamed-type-Parameters>::<unnamed-type-Others>::<unnamed-type-Argument3> Argument3;// Offset=0x10 Size=0x8
                union <unnamed-type-Argument4>// Size=0x8 (Id=21814)
                {
                    void * Ptr;// Offset=0x0 Size=0x8
                    unsigned long long Value;// Offset=0x0 Size=0x8
                };
                union _WDF_REQUEST_COMPLETION_PARAMS::<unnamed-type-Parameters>::<unnamed-type-Others>::<unnamed-type-Argument4> Argument4;// Offset=0x18 Size=0x8
            };
            struct _WDF_REQUEST_COMPLETION_PARAMS::<unnamed-type-Parameters>::<unnamed-type-Others> Others;// Offset=0x0 Size=0x20
            struct <unnamed-type-Usb>// Size=0x8 (Id=21819)
            {
                struct _WDF_USB_REQUEST_COMPLETION_PARAMS * Completion;// Offset=0x0 Size=0x8
            };
            struct _WDF_REQUEST_COMPLETION_PARAMS::<unnamed-type-Parameters>::<unnamed-type-Usb> Usb;// Offset=0x0 Size=0x8
        };
    };
    union _WDF_REQUEST_COMPLETION_PARAMS::<unnamed-type-Parameters> Parameters;// Offset=0x18 Size=0x30
};
