struct _DISPATCHER_CONTEXT// Size=0x50 (Id=314)
{
    unsigned long long ControlPc;// Offset=0x0 Size=0x8
    unsigned long long ImageBase;// Offset=0x8 Size=0x8
    struct _IMAGE_RUNTIME_FUNCTION_ENTRY * FunctionEntry;// Offset=0x10 Size=0x8
    unsigned long long EstablisherFrame;// Offset=0x18 Size=0x8
    unsigned long long TargetIp;// Offset=0x20 Size=0x8
    struct _CONTEXT * ContextRecord;// Offset=0x28 Size=0x8
    enum _EXCEPTION_DISPOSITION  ( * LanguageHandler)(struct _EXCEPTION_RECORD * ,void * ,struct _CONTEXT * ,void * );// Offset=0x30 Size=0x8
    void * HandlerData;// Offset=0x38 Size=0x8
    struct _UNWIND_HISTORY_TABLE * HistoryTable;// Offset=0x40 Size=0x8
    unsigned long ScopeIndex;// Offset=0x48 Size=0x4
    unsigned long Fill0;// Offset=0x4c Size=0x4
};
