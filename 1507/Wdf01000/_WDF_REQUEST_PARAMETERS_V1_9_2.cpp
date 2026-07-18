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

struct _WDF_REQUEST_PARAMETERS_V1_9// Size=0x28 (Id=1913)
{
    union // Size=0x8 (Id=0)
    {
        unsigned short Size;// Offset=0x0 Size=0x2
        unsigned char MinorFunction;// Offset=0x2 Size=0x1
        enum _WDF_REQUEST_TYPE Type;// Offset=0x4 Size=0x4
        union <unnamed-type-Parameters>// Size=0x20 (Id=18355)
        {
            struct <unnamed-type-Create>// Size=0x20 (Id=18356)
            {
                struct _IO_SECURITY_CONTEXT * SecurityContext;// Offset=0x0 Size=0x8
                unsigned long Options;// Offset=0x8 Size=0x4
                unsigned short FileAttributes;// Offset=0x10 Size=0x2
                unsigned short ShareAccess;// Offset=0x12 Size=0x2
                unsigned long EaLength;// Offset=0x18 Size=0x4
            };
            struct _WDF_REQUEST_PARAMETERS_V1_9::<unnamed-type-Parameters>::<unnamed-type-Create> Create;// Offset=0x0 Size=0x20
            struct <unnamed-type-Read>// Size=0x18 (Id=18363)
            {
                unsigned long long Length;// Offset=0x0 Size=0x8
                unsigned long Key;// Offset=0x8 Size=0x4
                long long DeviceOffset;// Offset=0x10 Size=0x8
            };
            struct _WDF_REQUEST_PARAMETERS_V1_9::<unnamed-type-Parameters>::<unnamed-type-Read> Read;// Offset=0x0 Size=0x18
            struct <unnamed-type-Write>// Size=0x18 (Id=18368)
            {
                unsigned long long Length;// Offset=0x0 Size=0x8
                unsigned long Key;// Offset=0x8 Size=0x4
                long long DeviceOffset;// Offset=0x10 Size=0x8
            };
            struct _WDF_REQUEST_PARAMETERS_V1_9::<unnamed-type-Parameters>::<unnamed-type-Write> Write;// Offset=0x0 Size=0x18
            struct <unnamed-type-DeviceIoControl>// Size=0x20 (Id=18373)
            {
                unsigned long long OutputBufferLength;// Offset=0x0 Size=0x8
                unsigned long long InputBufferLength;// Offset=0x8 Size=0x8
                unsigned long IoControlCode;// Offset=0x10 Size=0x4
                void * Type3InputBuffer;// Offset=0x18 Size=0x8
            };
            struct _WDF_REQUEST_PARAMETERS_V1_9::<unnamed-type-Parameters>::<unnamed-type-DeviceIoControl> DeviceIoControl;// Offset=0x0 Size=0x20
            struct <unnamed-type-Others>// Size=0x20 (Id=18379)
            {
                void * Arg1;// Offset=0x0 Size=0x8
                void * Arg2;// Offset=0x8 Size=0x8
                unsigned long IoControlCode;// Offset=0x10 Size=0x4
                void * Arg4;// Offset=0x18 Size=0x8
            };
            struct _WDF_REQUEST_PARAMETERS_V1_9::<unnamed-type-Parameters>::<unnamed-type-Others> Others;// Offset=0x0 Size=0x20
        };
    };
    union _WDF_REQUEST_PARAMETERS_V1_9::<unnamed-type-Parameters> Parameters;// Offset=0x8 Size=0x20
};
