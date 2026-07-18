struct FxIrpPreprocessInfo::Info// Size=0x18 (Id=1063)
{
    union // Size=0x18 (Id=0)
    {
        void Info();// Offset=0x0 Size=0x11
        void ~Info();// Offset=0x0 Size=0x18
        long  ( * EvtDevicePreprocess)(struct WDFDEVICE__ * ,struct _IRP * );// Offset=0x0 Size=0x8
        long  ( * EvtCxDevicePreprocess)(struct WDFDEVICE__ * ,struct _IRP * ,void * );// Offset=0x0 Size=0x8
        unsigned long NumMinorFunctions;// Offset=0x8 Size=0x4
        unsigned char * MinorFunctions;// Offset=0x10 Size=0x8
    };
    void * __vecDelDtor(unsigned int );
};
