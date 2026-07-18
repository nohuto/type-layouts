struct _SK_CRASH_MODULE// Size=0x48 (Id=1621)
{
    wchar_t ImageName[32];// Offset=0x0 Size=0x40
    unsigned long SizeOfImage;// Offset=0x40 Size=0x4
    unsigned long TimeDateStamp;// Offset=0x44 Size=0x4
};

struct _SK_CRASH_STACK_FRAME// Size=0x8 (Id=1196)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long ModuleId;// Offset=0x0 Size=0x4
        unsigned long Rva;// Offset=0x4 Size=0x4
        unsigned long long Pc;// Offset=0x0 Size=0x8
    };
};

struct _SK_CRASH_MINIDUMP// Size=0x1000 (Id=1192)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    unsigned long Version;// Offset=0x4 Size=0x4
    unsigned long ModuleCount;// Offset=0x8 Size=0x4
    unsigned long FrameCount;// Offset=0xc Size=0x4
    struct _SK_CRASH_MODULE Modules[16];// Offset=0x10 Size=0x480
    struct _SK_CRASH_STACK_FRAME StackFrames[366];// Offset=0x490 Size=0xb70
};
