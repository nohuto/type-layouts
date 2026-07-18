struct _IRP::<unnamed-type-Overlay>::<unnamed-type-AsynchronousParameters>// Size=0x8 (Id=427)
{
    union // Size=0x4 (Id=0)
    {
        void  ( * UserApcRoutine)(void * ,struct _IO_STATUS_BLOCK * ,unsigned long );// Offset=0x0 Size=0x4
        void * IssuingProcess;// Offset=0x0 Size=0x4
    };
    void * UserApcContext;// Offset=0x4 Size=0x4
};
