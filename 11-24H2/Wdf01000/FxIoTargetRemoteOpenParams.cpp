struct _UNICODE_STRING// Size=0x10 (Id=250)
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

struct _unnamed_119// Size=0x8 (Id=119)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=120)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_119 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct FxIoTargetRemoteOpenParams// Size=0x48 (Id=1462)
{
    void FxIoTargetRemoteOpenParams();
    void Set(struct _WDF_IO_TARGET_OPEN_PARAMS * ,struct _UNICODE_STRING * ,void * ,unsigned long );
    union // Size=0x3e (Id=0)
    {
        void Clear();// Offset=0x0 Size=0x3e
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
    };
    union _LARGE_INTEGER * AllocationSizePointer;// Offset=0x40 Size=0x8
};
