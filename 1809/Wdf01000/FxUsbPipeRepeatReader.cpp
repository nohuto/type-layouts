struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=132)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _KDPC// Size=0x40 (Id=1153)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long TargetInfoAsUlong;// Offset=0x0 Size=0x4
        unsigned char Type;// Offset=0x0 Size=0x1
        unsigned char Importance;// Offset=0x1 Size=0x1
        unsigned short Number;// Offset=0x2 Size=0x2
    };
    struct _SINGLE_LIST_ENTRY DpcListEntry;// Offset=0x8 Size=0x8
    unsigned long long ProcessorHistory;// Offset=0x10 Size=0x8
    void  ( * DeferredRoutine)(struct _KDPC * ,void * ,void * ,void * );// Offset=0x18 Size=0x8
    void * DeferredContext;// Offset=0x20 Size=0x8
    void * SystemArgument1;// Offset=0x28 Size=0x8
    void * SystemArgument2;// Offset=0x30 Size=0x8
    void * DpcData;// Offset=0x38 Size=0x8
    void _KDPC(struct _KDPC * );
    void _KDPC(struct _KDPC & );
    struct _KDPC & operator=(struct _KDPC * );
    struct _KDPC & operator=(struct _KDPC & );
};

struct FxUsbPipeRepeatReader// Size=0x78 (Id=992)
{
    union // Size=0x78 (Id=0)
    {
        class FxRequest * Request;// Offset=0x0 Size=0x8
        struct _IRP * RequestIrp;// Offset=0x8 Size=0x8
        struct FxUsbPipeContinuousReader * Parent;// Offset=0x10 Size=0x8
        struct _KDPC Dpc;// Offset=0x18 Size=0x40
        class MxEvent ReadCompletedEvent;// Offset=0x58 Size=0x20
        void FxUsbPipeRepeatReader(struct FxUsbPipeRepeatReader * );
        void FxUsbPipeRepeatReader(struct FxUsbPipeRepeatReader & );
        void FxUsbPipeRepeatReader();// Offset=0x0 Size=0x8
        void ~FxUsbPipeRepeatReader();// Offset=0x0 Size=0x3
        struct FxUsbPipeRepeatReader & operator=(struct FxUsbPipeRepeatReader * );
        struct FxUsbPipeRepeatReader & operator=(struct FxUsbPipeRepeatReader & );
        void * __vecDelDtor(unsigned int );
    };
};
