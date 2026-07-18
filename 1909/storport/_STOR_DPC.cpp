struct _DPC_BUFFER// Size=0x40 (Id=401)
{
    short Type;// Offset=0x0 Size=0x2
    unsigned char Number;// Offset=0x2 Size=0x1
    unsigned char Importance;// Offset=0x3 Size=0x1
    void * F;// Offset=0x8 Size=0x8
    void * B;// Offset=0x10 Size=0x8
    void * DeferredRoutine;// Offset=0x18 Size=0x8
    void * DeferredContext;// Offset=0x20 Size=0x8
    void * SystemArgument1;// Offset=0x28 Size=0x8
    void * SystemArgument2;// Offset=0x30 Size=0x8
    void * DpcData;// Offset=0x38 Size=0x8
};

struct _STOR_DPC// Size=0x48 (Id=136)
{
    struct _DPC_BUFFER Dpc;// Offset=0x0 Size=0x40
    unsigned long long Lock;// Offset=0x40 Size=0x8
};
