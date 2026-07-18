struct _unnamed_10// Size=0x8 (Id=10)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_10 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _USB_DUMP_CONTROLLER_INFO// Size=0x58 (Id=651)
{
    unsigned long MajorVersion;// Offset=0x0 Size=0x4
    unsigned long MinorVersion;// Offset=0x4 Size=0x4
    void * ControllerContext;// Offset=0x8 Size=0x8
    long  ( * ControllerInitialize)(void * );// Offset=0x10 Size=0x8
    long  ( * ControllerSendURB)(void * ,struct _URB * ,union _LARGE_INTEGER * );// Offset=0x18 Size=0x8
    long  ( * ControllerSendURBAsync)(void * ,struct _URB * ,union _LARGE_INTEGER * );// Offset=0x20 Size=0x8
    long  ( * ControllerPollForCompletion)(void * ,struct _URB ** );// Offset=0x28 Size=0x8
    long  ( * ControllerResetDevice)(void * );// Offset=0x30 Size=0x8
    long  ( * ControllerCleanUp)(void * );// Offset=0x38 Size=0x8
    void * ControllerCommonBufferVA;// Offset=0x40 Size=0x8
    union _LARGE_INTEGER ControllerCommonBufferPA;// Offset=0x48 Size=0x8
    unsigned long ControllerCommonBufferSize;// Offset=0x50 Size=0x4
    unsigned char ControllerSupportsMultistageResume;// Offset=0x54 Size=0x1
};
