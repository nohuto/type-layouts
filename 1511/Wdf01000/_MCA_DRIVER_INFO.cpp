struct _MCA_DRIVER_INFO// Size=0x18 (Id=1586)
{
    unsigned char  ( * ExceptionCallback)(void * ,struct _KTRAP_FRAME * ,struct _KEXCEPTION_FRAME * ,struct _MCA_EXCEPTION * );// Offset=0x0 Size=0x8
    void  ( * DpcCallback)(struct _KDPC * ,void * ,void * ,void * );// Offset=0x8 Size=0x8
    void * DeviceContext;// Offset=0x10 Size=0x8
};
