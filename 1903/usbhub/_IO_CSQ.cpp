struct _IO_CSQ// Size=0x40 (Id=260)
{
    unsigned long Type;// Offset=0x0 Size=0x4
    void  ( * CsqInsertIrp)(struct _IO_CSQ * ,struct _IRP * );// Offset=0x8 Size=0x8
    void  ( * CsqRemoveIrp)(struct _IO_CSQ * ,struct _IRP * );// Offset=0x10 Size=0x8
    struct _IRP *  ( * CsqPeekNextIrp)(struct _IO_CSQ * ,struct _IRP * ,void * );// Offset=0x18 Size=0x8
    void  ( * CsqAcquireLock)(struct _IO_CSQ * ,unsigned char * );// Offset=0x20 Size=0x8
    void  ( * CsqReleaseLock)(struct _IO_CSQ * ,unsigned char );// Offset=0x28 Size=0x8
    void  ( * CsqCompleteCanceledIrp)(struct _IO_CSQ * ,struct _IRP * );// Offset=0x30 Size=0x8
    void * ReservePointer;// Offset=0x38 Size=0x8
};
