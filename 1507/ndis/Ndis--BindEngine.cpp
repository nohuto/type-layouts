struct Ndis::BindEngine// Size=0x88 (Id=415)
{
    void BindEngine(struct Ndis::BindEngine & );
    void BindEngine();
    void ~BindEngine();
    struct Ndis::BindEngine operator=(struct Ndis::BindEngine & );
    void Initialize(struct _NDIS_MINIPORT_BLOCK * );
    void BeginPolicyUpdates();
    union // Size=0xda7 (Id=0)
    {
        void EndPolicyUpdates();// Offset=0x0 Size=0xf9
        void ApplyBindChanges(enum CallRunMode );// Offset=0x0 Size=0x105
        void SetDirty();
        struct NDIS_BIND_LINK_BASE * GetCurrentLink();
        void BeginBindOperation();
        void EndBindOperation();
        void LockBindings();
        void UnlockBindings();
        void UpdateBindings();// Offset=0x0 Size=0x9b
        bool Iterate();// Offset=0x0 Size=0xda7
        void ApplyRules();// Offset=0x0 Size=0x1c0
        void UpdateBindingsWorkItem();
        void DispatchPendingWork(enum CallRunMode ,class KLockThisExclusive & );
        struct _NDIS_MINIPORT_BLOCK * m_miniport;// Offset=0x0 Size=0x8
        struct _KTHREAD * m_bindThread;// Offset=0x8 Size=0x8
        struct NDIS_BIND_LINK_BASE * m_currentOperation;// Offset=0x10 Size=0x8
        class KPushLock m_lock;// Offset=0x18 Size=0x8
        class KWaitEvent m_bindCompleteEvent;// Offset=0x20 Size=0x18
        class KWorkItem<Ndis::BindEngine> m_asyncBindWorkItem;// Offset=0x38 Size=0x30
        bool m_isDirty;// Offset=0x68 Size=0x1
        bool m_isBeingDestroyed;// Offset=0x69 Size=0x1
        class KWaitEvent m_backgroundWorkFinishedEvent;// Offset=0x70 Size=0x18
        unsigned long s_NumBindOperationsInProgress;// Offset=0x0 Size=0x4
        void * __vecDelDtor(unsigned int );
    };
};
