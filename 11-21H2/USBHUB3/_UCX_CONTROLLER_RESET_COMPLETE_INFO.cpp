enum _UCX_CONTROLLER_STATE
{
    UcxControllerStateLost=0,
    UcxControllerStatePreserved=1
};

struct _UCX_CONTROLLER_RESET_COMPLETE_INFO// Size=0xc (Id=323)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    enum _UCX_CONTROLLER_STATE UcxControllerState;// Offset=0x4 Size=0x4
    unsigned char UcxCoordinated;// Offset=0x8 Size=0x1
};
