struct _PPM_WPS_UPDATE_KERNEL_CONFIG// Size=0x10 (Id=581)
{
    unsigned long WPSState;// Offset=0x0 Size=0x4
    unsigned long WorkloadClassCount;// Offset=0x4 Size=0x4
    void  ( * UpdateHandle)();// Offset=0x8 Size=0x8
};
