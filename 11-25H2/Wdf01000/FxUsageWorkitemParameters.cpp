struct FxUsageWorkitemParameters// Size=0x48 (Id=1347)
{
    void FxUsageWorkitemParameters();
    class MxDeviceObject * RelatedDevice;// Offset=0x0 Size=0x8
    class FxIrp * RelatedIrp;// Offset=0x8 Size=0x8
    class FxIrp * OriginalIrp;// Offset=0x10 Size=0x8
    unsigned char Revert;// Offset=0x18 Size=0x1
    struct FxCREvent Event;// Offset=0x20 Size=0x20
    long Status;// Offset=0x40 Size=0x4
    void ~FxUsageWorkitemParameters();
    void * __vecDelDtor(unsigned int );
};
