struct _UNICODE_STRING// Size=0x10 (Id=537)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _PLUGPLAY_CONTROL_STATUS_DATA// Size=0x28 (Id=1755)
{
    struct _UNICODE_STRING DeviceInstance;// Offset=0x0 Size=0x10
    unsigned long Operation;// Offset=0x10 Size=0x4
    unsigned long DeviceStatus;// Offset=0x14 Size=0x4
    unsigned long DeviceProblem;// Offset=0x18 Size=0x4
    unsigned long Flags;// Offset=0x1c Size=0x4
    long ProblemStatus;// Offset=0x20 Size=0x4
};
