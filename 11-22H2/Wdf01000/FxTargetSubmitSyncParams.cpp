struct FxTargetSubmitSyncParams// Size=0x38 (Id=588)
{
    struct FxCREvent SynchEvent;// Offset=0x0 Size=0x20
    long Status;// Offset=0x20 Size=0x4
    void  ( * OrigTargetCompletionRoutine)(struct WDFREQUEST__ * ,struct WDFIOTARGET__ * ,struct _WDF_REQUEST_COMPLETION_PARAMS * ,void * );// Offset=0x28 Size=0x8
    void * OrigTargetCompletionContext;// Offset=0x30 Size=0x8
    void FxTargetSubmitSyncParams();
    void ~FxTargetSubmitSyncParams();
    void * __vecDelDtor(unsigned int );
};
