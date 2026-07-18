struct FxTraceInfo// Size=0x18 (Id=2541)
{
    struct _DRIVER_OBJECT * DriverObject;// Offset=0x0 Size=0x8
    long  ( * Callback)(unsigned char ,void * ,unsigned long ,void * ,void * ,unsigned long * );// Offset=0x8 Size=0x8
    void * Context;// Offset=0x10 Size=0x8
};
