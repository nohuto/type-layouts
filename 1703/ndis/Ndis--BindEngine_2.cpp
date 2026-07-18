struct Ndis::BindEngine// Size=0x78 (Id=482)
{
    void BindEngine(struct Ndis::BindEngine & );
    void BindEngine();
    union // Size=0x7e2 (Id=0)
    {
        void ~BindEngine();// Offset=0x0 Size=0x6b
        struct Ndis::BindEngine operator=(struct Ndis::BindEngine & );
        void Initialize(struct _NDIS_MINIPORT_BLOCK * );
        void BeginPolicyUpdates();
        void EndPolicyUpdates();// Offset=0x0 Size=0xf9
        void ApplyBindChanges(enum CallRunMode ,bool );// Offset=0x0 Size=0xd7
        void SetDirty();
        struct NDIS_BIND_LINK_BASE * GetCurrentLink();
        void BeginBindOperation();
        void EndBindOperation();
        void LockBindings();
        void UnlockBindings();
        void UpdateBindings(class KLockThisExclusive & );
        bool Iterate();// Offset=0x0 Size=0x7e2
        void ApplyRules();// Offset=0x0 Size=0x1a3
        void UpdateBindingsWorkItem();// Offset=0x0 Size=0x70
        void DispatchPendingWork(enum CallRunMode ,class KLockThisExclusive & );
        struct _NDIS_MINIPORT_BLOCK * m_miniport;// Offset=0x0 Size=0x8
        struct _KTHREAD * m_bindThread;// Offset=0x8 Size=0x8
        struct NDIS_BIND_LINK_BASE * m_currentOperation;// Offset=0x10 Size=0x8
        class KPushLock m_lock;// Offset=0x18 Size=0x8
        class KWaitEvent m_bindCompleteEvent;// Offset=0x20 Size=0x18
        class KWorkItem<Ndis::BindEngine> m_asyncBindWorkItem;// Offset=0x38 Size=0x30
        bool m_isDirty;// Offset=0x68 Size=0x1
        class KWaitEvent * m_removeReadyEvent;// Offset=0x70 Size=0x8
        unsigned long s_NumBindOperationsInProgress;// Offset=0x0 Size=0x4
        void * __vecDelDtor(unsigned int );
    };
};
