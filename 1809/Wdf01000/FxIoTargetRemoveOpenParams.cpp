struct _UNICODE_STRING// Size=0x10 (Id=460)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

enum _WDF_IO_TARGET_OPEN_TYPE
{
    WdfIoTargetOpenUndefined=0,
    WdfIoTargetOpenUseExistingDevice=1,
    WdfIoTargetOpenByName=2,
    WdfIoTargetOpenReopen=3,
    WdfIoTargetOpenLocalTargetByFile=4
};

union _LARGE_INTEGER// Size=0x8 (Id=258)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=11990)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct FxIoTargetRemoveOpenParams// Size=0x48 (Id=1058)
{
    void FxIoTargetRemoveOpenParams();
    union // Size=0x52 (Id=0)
    {
        void Set(struct _WDF_IO_TARGET_OPEN_PARAMS * ,struct _UNICODE_STRING * ,void * ,unsigned long );// Offset=0x0 Size=0x52
        void Clear();// Offset=0x0 Size=0x39
        struct _UNICODE_STRING TargetDeviceName;// Offset=0x0 Size=0x10
        enum _WDF_IO_TARGET_OPEN_TYPE OpenType;// Offset=0x10 Size=0x4
        unsigned long DesiredAccess;// Offset=0x14 Size=0x4
        unsigned long ShareAccess;// Offset=0x18 Size=0x4
        unsigned long FileAttributes;// Offset=0x1c Size=0x4
        unsigned long CreateDisposition;// Offset=0x20 Size=0x4
        unsigned long CreateOptions;// Offset=0x24 Size=0x4
        void * EaBuffer;// Offset=0x28 Size=0x8
        unsigned long EaBufferLength;// Offset=0x30 Size=0x4
        union _LARGE_INTEGER AllocationSize;// Offset=0x38 Size=0x8
        union _LARGE_INTEGER * AllocationSizePointer;// Offset=0x40 Size=0x8
    };
};
