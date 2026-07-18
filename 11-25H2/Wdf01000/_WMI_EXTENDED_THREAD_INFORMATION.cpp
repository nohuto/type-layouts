struct _WMI_EXTENDED_THREAD_INFORMATION// Size=0x50 (Id=3393)
{
    unsigned long ProcessId;// Offset=0x0 Size=0x4
    unsigned long ThreadId;// Offset=0x4 Size=0x4
    void * StackBase;// Offset=0x8 Size=0x8
    void * StackLimit;// Offset=0x10 Size=0x8
    void * UserStackBase;// Offset=0x18 Size=0x8
    void * UserStackLimit;// Offset=0x20 Size=0x8
    union // Size=0x8 (Id=0)
    {
        void * StartAddr;// Offset=0x28 Size=0x8
        unsigned long long Affinity;// Offset=0x28 Size=0x8
    };
    void * Win32StartAddr;// Offset=0x30 Size=0x8
    void * TebBase;// Offset=0x38 Size=0x8
    unsigned long SubProcessTag;// Offset=0x40 Size=0x4
    char BasePriority;// Offset=0x44 Size=0x1
    unsigned char PagePriority;// Offset=0x45 Size=0x1
    unsigned char IoPriority;// Offset=0x46 Size=0x1
    unsigned char Flags;// Offset=0x47 Size=0x1
    wchar_t ThreadName[1];// Offset=0x48 Size=0x2
};
