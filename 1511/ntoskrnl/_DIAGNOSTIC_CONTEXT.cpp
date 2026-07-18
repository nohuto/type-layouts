enum _REQUESTER_TYPE
{
    KernelRequester=0,
    UserProcessRequester=1,
    UserSharedServiceRequester=2
};

struct _DIAGNOSTIC_CONTEXT// Size=0x20 (Id=1151)
{
    enum _REQUESTER_TYPE CallerType;// Offset=0x0 Size=0x4
    union // Size=0x14 (Id=0)
    {
        struct _EPROCESS * Process;// Offset=0x8 Size=0x8
        unsigned long ServiceTag;// Offset=0x10 Size=0x4
        struct _DEVICE_OBJECT * DeviceObject;// Offset=0x8 Size=0x8
        unsigned long long ReasonSize;// Offset=0x18 Size=0x8
    };
};
