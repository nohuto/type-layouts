struct _PROCESSOR_NUMBER// Size=0x4 (Id=467)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned char Number;// Offset=0x2 Size=0x1
    unsigned char Reserved;// Offset=0x3 Size=0x1
};

struct _KE_PROCESSOR_CHANGE_NOTIFY_CONTEXT// Size=0x10 (Id=3028)
{
    enum KE_PROCESSOR_CHANGE_NOTIFY_STATE State;// Offset=0x0 Size=0x4
    unsigned long NtNumber;// Offset=0x4 Size=0x4
    long Status;// Offset=0x8 Size=0x4
    struct _PROCESSOR_NUMBER ProcNumber;// Offset=0xc Size=0x4
};
