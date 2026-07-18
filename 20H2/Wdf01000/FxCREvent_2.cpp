struct FxCREvent// Size=0x20 (Id=677)
{
    void FxCREvent(struct FxCREvent * );
    void FxCREvent(struct FxCREvent & );
    void FxCREvent(enum _EVENT_TYPE ,unsigned char );
    union // Size=0x2e (Id=0)
    {
        void FxCREvent(unsigned char );// Offset=0x0 Size=0x2e
        long Initialize(enum _EVENT_TYPE ,unsigned char );
        long Initialize(unsigned char );
        long EnterCRAndWait(long long * );
        long EnterCRAndWait();
        long EnterCRAndWaitAndLeave(long long * );
        long EnterCRAndWaitAndLeave();
        void LeaveCR();
        void Set();
        void Clear();
        long ReadState();
        void * GetEvent();
        struct FxCREvent * GetSelfPointer();
        struct FxCREvent * operator&();
        class MxEvent m_Event;// Offset=0x0 Size=0x20
        void ~FxCREvent();
        struct FxCREvent & operator=(struct FxCREvent * );
        struct FxCREvent & operator=(struct FxCREvent & );
        void __dflt_ctor_closure();
        void * __vecDelDtor(unsigned int );
    };
};
