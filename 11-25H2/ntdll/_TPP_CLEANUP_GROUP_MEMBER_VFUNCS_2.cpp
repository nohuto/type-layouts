struct _TPP_CLEANUP_GROUP_MEMBER_VFUNCS// Size=0x20 (Id=351)
{
    void  ( * Free)(struct _TPP_CLEANUP_GROUP_MEMBER * );// Offset=0x0 Size=0x8
    void  ( * CallbackEpilog)(struct _TPP_CLEANUP_GROUP_MEMBER * );// Offset=0x8 Size=0x8
    void  ( * StopCallbackGeneration)(struct _TPP_CLEANUP_GROUP_MEMBER * ,unsigned long );// Offset=0x10 Size=0x8
    void  ( * CancelPendingCallbacks)(struct _TPP_CLEANUP_GROUP_MEMBER * );// Offset=0x18 Size=0x8
};
