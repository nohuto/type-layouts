struct FxUsageWorkitemParameters// Size=0x48 (Id=4896)
{
    void FxUsageWorkitemParameters(struct FxUsageWorkitemParameters * );
    void FxUsageWorkitemParameters(struct FxUsageWorkitemParameters & );
    void FxUsageWorkitemParameters();
    class MxDeviceObject * RelatedDevice;// Offset=0x0 Size=0x8
    class FxIrp * RelatedIrp;// Offset=0x8 Size=0x8
    class FxIrp * OriginalIrp;// Offset=0x10 Size=0x8
    unsigned char Revert;// Offset=0x18 Size=0x1
    struct FxCREvent Event;// Offset=0x20 Size=0x20
    long Status;// Offset=0x40 Size=0x4
    void ~FxUsageWorkitemParameters();
    struct FxUsageWorkitemParameters & operator=(struct FxUsageWorkitemParameters * );
    struct FxUsageWorkitemParameters & operator=(struct FxUsageWorkitemParameters & );
    void * __vecDelDtor(unsigned int );
};
