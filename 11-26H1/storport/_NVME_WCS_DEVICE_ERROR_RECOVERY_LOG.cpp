struct _NVME_WCS_DEVICE_RESET_ACTION// Size=0x1 (Id=1082)
{
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char ControllerReset:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char NVMeSubsystemReset:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char PCIeFLR:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char PERST:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char PowerCycle:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char PCIeConventionalHotReset:1;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char Reserved:2;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x2
        };
        unsigned char AsUCHAR;// Offset=0x0 Size=0x1
    };
};

struct _NVME_WCS_DEVICE_CAPABILITIES// Size=0x4 (Id=874)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long PanicAEN:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long PanicCFS:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long Reserved:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
        };
        unsigned long AsULONG;// Offset=0x0 Size=0x4
    };
};

struct _GUID// Size=0x10 (Id=756)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _NVME_WCS_DEVICE_ERROR_RECOVERY_LOG// Size=0x200 (Id=523)
{
    unsigned short PanicResetWaitTime;// Offset=0x0 Size=0x2
    struct _NVME_WCS_DEVICE_RESET_ACTION PanicResetAction;// Offset=0x2 Size=0x1
    unsigned char DriveRecoveryAction;// Offset=0x3 Size=0x1
    unsigned long long PanicId;// Offset=0x4 Size=0x8
    struct _NVME_WCS_DEVICE_CAPABILITIES DeviceCapabilities;// Offset=0xc Size=0x4
    unsigned char VendorSpecificRecoveryCode;// Offset=0x10 Size=0x1
    unsigned char Reserved0[3];// Offset=0x11 Size=0x3
    unsigned long VendorSpecificCommandCDW12;// Offset=0x14 Size=0x4
    unsigned long VendorSpecificCommandCDW13;// Offset=0x18 Size=0x4
    unsigned char Reserved1[466];// Offset=0x1c Size=0x1d2
    unsigned short LogPageVersionNumber;// Offset=0x1ee Size=0x2
    struct _GUID LogPageGUID;// Offset=0x1f0 Size=0x10
};
