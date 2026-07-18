struct _COMMANDFILTER_DATA_HEADER// Size=0x28 (Id=452)
{
    void * WdfCommandFilter;// Offset=0x0 Size=0x8
    void * ControllerHandle;// Offset=0x8 Size=0x8
    enum _CRB_COMPLETION_STATUS  ( * FilterCommand)(void * ,struct _CRB * );// Offset=0x10 Size=0x8
    void  ( * FilterCommandCompletion)(void * ,struct _CRB * );// Offset=0x18 Size=0x8
    void  ( * FilterPostReset)(void * );// Offset=0x20 Size=0x8
};
