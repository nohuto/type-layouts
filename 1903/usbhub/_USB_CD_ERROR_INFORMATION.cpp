enum _USBPORT_CREATEDEV_ERROR
{
    CreateDevErrNotSet=0,
    CreateDevBadHubDevHandle=1,
    CreateDevFailedAllocDevHandle=2,
    CreateDevFailedOpenEndpoint=3,
    CreateDevFailedAllocDsBuff=4,
    CreateDevFailedGetDs=5,
    CreateDevTtNotFound=6,
    CreateDevBadDevHandlePtr=7
};

struct _USB_CD_ERROR_INFORMATION// Size=0x54 (Id=245)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    enum _USBPORT_CREATEDEV_ERROR PathError;// Offset=0x4 Size=0x4
    unsigned long UlongArg1;// Offset=0x8 Size=0x4
    unsigned long UlongArg2;// Offset=0xc Size=0x4
    long NtStatus;// Offset=0x10 Size=0x4
    unsigned char XtraInfo[64];// Offset=0x14 Size=0x40
};
