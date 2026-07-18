union _WDF_REQUEST_PARAMETERS_V1_5::<unnamed-type-Parameters>// Size=0x20 (Id=5083)
{
    struct <unnamed-type-Create>// Size=0x20 (Id=24515)
    {
        struct _IO_SECURITY_CONTEXT * SecurityContext;// Offset=0x0 Size=0x8
        unsigned long Options;// Offset=0x8 Size=0x4
        unsigned short FileAttributes;// Offset=0x10 Size=0x2
        unsigned short ShareAccess;// Offset=0x12 Size=0x2
        unsigned long EaLength;// Offset=0x18 Size=0x4
    };
    struct _WDF_REQUEST_PARAMETERS_V1_5::<unnamed-type-Parameters>::<unnamed-type-Create> Create;// Offset=0x0 Size=0x20
    struct <unnamed-type-Read>// Size=0x18 (Id=24522)
    {
        unsigned long long Length;// Offset=0x0 Size=0x8
        unsigned long Key;// Offset=0x8 Size=0x4
        long long DeviceOffset;// Offset=0x10 Size=0x8
    };
    struct _WDF_REQUEST_PARAMETERS_V1_5::<unnamed-type-Parameters>::<unnamed-type-Read> Read;// Offset=0x0 Size=0x18
    struct <unnamed-type-Write>// Size=0x18 (Id=24527)
    {
        unsigned long long Length;// Offset=0x0 Size=0x8
        unsigned long Key;// Offset=0x8 Size=0x4
        long long DeviceOffset;// Offset=0x10 Size=0x8
    };
    struct _WDF_REQUEST_PARAMETERS_V1_5::<unnamed-type-Parameters>::<unnamed-type-Write> Write;// Offset=0x0 Size=0x18
    struct <unnamed-type-DeviceIoControl>// Size=0x20 (Id=24532)
    {
        unsigned long long OutputBufferLength;// Offset=0x0 Size=0x8
        unsigned long long InputBufferLength;// Offset=0x8 Size=0x8
        unsigned long IoControlCode;// Offset=0x10 Size=0x4
        void * Type3InputBuffer;// Offset=0x18 Size=0x8
    };
    struct _WDF_REQUEST_PARAMETERS_V1_5::<unnamed-type-Parameters>::<unnamed-type-DeviceIoControl> DeviceIoControl;// Offset=0x0 Size=0x20
    struct <unnamed-type-Others>// Size=0x20 (Id=24538)
    {
        void * Arg1;// Offset=0x0 Size=0x8
        void * Arg2;// Offset=0x8 Size=0x8
        unsigned long IoControlCode;// Offset=0x10 Size=0x4
        void * Arg4;// Offset=0x18 Size=0x8
    };
    struct _WDF_REQUEST_PARAMETERS_V1_5::<unnamed-type-Parameters>::<unnamed-type-Others> Others;// Offset=0x0 Size=0x20
};
