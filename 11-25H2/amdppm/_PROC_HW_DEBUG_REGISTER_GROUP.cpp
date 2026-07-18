struct _LIST_ENTRY// Size=0x10 (Id=36)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _KAFFINITY_EX// Size=0x108 (Id=65)
{
    unsigned short Count;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned long Reserved;// Offset=0x4 Size=0x4
    union // Size=0x8 (Id=0)
    {
        unsigned long long Bitmap[1];// Offset=0x8 Size=0x8
        unsigned long long StaticBitmap[32];// Offset=0x8 Size=0x100
    };
};

enum _PROC_HW_DEBUG_REGISTER_SCOPE
{
    ProcHwDebugRegisterPackage=0,
    ProcHwDebugRegisterLp=1,
    ProcHwDebugRegisterMax=2
};

struct _PROC_HW_DEBUG_REGISTER// Size=0x18 (Id=734)
{
    struct _PROC_HW_DEBUG_REGISTER_DEFINITION * Definition;// Offset=0x0 Size=0x8
    unsigned long long ParameterMask;// Offset=0x8 Size=0x8
    unsigned long long Value;// Offset=0x10 Size=0x8
};

struct _PROC_HW_DEBUG_REGISTER_GROUP// Size=0x150 (Id=645)
{
    struct _LIST_ENTRY Link;// Offset=0x0 Size=0x10
    struct _KAFFINITY_EX Affinity;// Offset=0x10 Size=0x108
    struct WDFSPINLOCK__ * Lock;// Offset=0x118 Size=0x8
    unsigned long long LastReadTime;// Offset=0x120 Size=0x8
    unsigned long long RefreshTime;// Offset=0x128 Size=0x8
    enum _PROC_HW_DEBUG_REGISTER_SCOPE Scope;// Offset=0x130 Size=0x4
    unsigned char Count;// Offset=0x134 Size=0x1
    struct _PROC_HW_DEBUG_REGISTER Registers[1];// Offset=0x138 Size=0x18
};
