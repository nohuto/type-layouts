struct _REQUEST_REMOTE_WAKE_NOTIFICATION// Size=0x18 (Id=567)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    struct USBD_FUNCTION_HANDLE__ * UsbdFunctionHandle;// Offset=0x8 Size=0x8
    unsigned long Interface;// Offset=0x10 Size=0x4
};
