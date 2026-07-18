struct FxIrpDynamicDispatchInfo::Info// Size=0x10 (Id=776)
{
    union // Size=0xd (Id=0)
    {
        void Info();// Offset=0x0 Size=0xd
        void ~Info();// Offset=0x0 Size=0x3
        long  ( * EvtDeviceDynamicDispatch)(struct WDFDEVICE__ * ,unsigned char ,unsigned char ,unsigned long ,void * ,struct _IRP * ,void * );// Offset=0x0 Size=0x8
        void * DriverContext;// Offset=0x8 Size=0x8
    };
    void * __vecDelDtor(unsigned int );
};
