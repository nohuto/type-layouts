struct _STORPORT_EXTENDED_FUNCTIONS// Size=0x58 (Id=498)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned char  ( * GetMessageInterruptInformation)(void * ,unsigned long ,struct _MESSAGE_INTERRUPT_INFORMATION * );// Offset=0x8 Size=0x8
    void  ( * PutScatterGatherList)(void * ,struct _STOR_SCATTER_GATHER_LIST * ,unsigned char );// Offset=0x10 Size=0x8
    enum _GETSGSTATUS  ( * BuildScatterGatherList)(void * ,void * ,void * ,unsigned long ,void  ( * )(void ** ,void ** ,struct _STOR_SCATTER_GATHER_LIST * ,void * ),void * ,unsigned char ,void * ,unsigned long );// Offset=0x18 Size=0x8
    void  ( * FreePool)(void * ,void * ,void * );// Offset=0x20 Size=0x8
    void *  ( * AllocatePool)(unsigned long ,unsigned long ,void * ,void ** );// Offset=0x28 Size=0x8
    void *  ( * GetSystemAddress)(struct _SCSI_REQUEST_BLOCK * );// Offset=0x30 Size=0x8
    unsigned long  ( * AcquireMSISpinLock)(void * ,unsigned long );// Offset=0x38 Size=0x8
    void  ( * ReleaseMSISpinLock)(void * ,unsigned long ,unsigned long );// Offset=0x40 Size=0x8
    void  ( * CompleteServiceIrp)(void * ,void * );// Offset=0x48 Size=0x8
    void *  ( * GetOriginalMdl)(struct _SCSI_REQUEST_BLOCK * );// Offset=0x50 Size=0x8
};
