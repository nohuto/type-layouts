struct _ISM_STATE_ENTRY// Size=0x10 (Id=423)
{
    unsigned long EtwName;// Offset=0x0 Size=0x4
    enum _ISM_EVENT  ( * EntryFunc)(struct _ISM_CONTEXT * ,struct _IRP * );// Offset=0x8 Size=0x8
    struct _ISM_STATE_TRANSITION Transitions[0];
};
