struct _PROCESS_WS_WATCH_INFORMATION// Size=0x10 (Id=2571)
{
    void * FaultingPc;// Offset=0x0 Size=0x8
    void * FaultingVa;// Offset=0x8 Size=0x8
};

struct _PSP_WS_WATCH_INFORMATION// Size=0x18 (Id=2372)
{
    struct _PROCESS_WS_WATCH_INFORMATION BasicInfo;// Offset=0x0 Size=0x10
    unsigned long long ThreadId;// Offset=0x10 Size=0x8
};
