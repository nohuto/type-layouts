struct FxIrpDynamicDispatchInfo::Info// Size=0x10 (Id=2075)
{
    union // Size=0x14 (Id=0)
    {
        void Info();// Offset=0x0 Size=0x14
        void ~Info();// Offset=0x0 Size=0x4
        long  ( * EvtDeviceDynamicDispatch)(struct WDFDEVICE__ * ,unsigned char ,unsigned char ,unsigned long ,void * ,struct _IRP * ,void * );// Offset=0x0 Size=0x8
        void * DriverContext;// Offset=0x8 Size=0x8
        void * __vecDelDtor(unsigned int );
    };
};
