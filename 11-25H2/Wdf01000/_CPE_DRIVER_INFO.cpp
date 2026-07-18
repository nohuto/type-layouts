struct _CPE_DRIVER_INFO// Size=0x18 (Id=2914)
{
    void  ( * ExceptionCallback)(void * ,struct _MCA_EXCEPTION * );// Offset=0x0 Size=0x8
    void  ( * DpcCallback)(struct _KDPC * ,void * ,void * ,void * );// Offset=0x8 Size=0x8
    void * DeviceContext;// Offset=0x10 Size=0x8
};
