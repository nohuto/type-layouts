enum _REQUESTER_TYPE
{
    KernelRequester=0,
    UserProcessRequester=1,
    UserSharedServiceRequester=2
};

struct _UNICODE_STRING// Size=0x10 (Id=539)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _DIAGNOSTIC_CONTEXT// Size=0x38 (Id=1527)
{
    enum _REQUESTER_TYPE CallerType;// Offset=0x0 Size=0x4
    union // Size=0x2c (Id=0)
    {
        struct _EPROCESS * Process;// Offset=0x8 Size=0x8
        struct _UNICODE_STRING ProcessImageName;// Offset=0x10 Size=0x10
        unsigned long ProcessId;// Offset=0x20 Size=0x4
        unsigned long SessionId;// Offset=0x24 Size=0x4
        unsigned long ServiceTag;// Offset=0x28 Size=0x4
        struct _DEVICE_OBJECT * DeviceObject;// Offset=0x8 Size=0x8
        unsigned long long ReasonSize;// Offset=0x30 Size=0x8
    };
};
