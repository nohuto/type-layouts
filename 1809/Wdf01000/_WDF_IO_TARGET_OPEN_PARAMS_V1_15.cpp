enum _WDF_IO_TARGET_OPEN_TYPE
{
    WdfIoTargetOpenUndefined=0,
    WdfIoTargetOpenUseExistingDevice=1,
    WdfIoTargetOpenByName=2,
    WdfIoTargetOpenReopen=3,
    WdfIoTargetOpenLocalTargetByFile=4
};

struct _UNICODE_STRING// Size=0x10 (Id=460)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _WDF_IO_TARGET_OPEN_PARAMS_V1_15// Size=0x88 (Id=1910)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    enum _WDF_IO_TARGET_OPEN_TYPE Type;// Offset=0x4 Size=0x4
    long  ( * EvtIoTargetQueryRemove)(struct WDFIOTARGET__ * );// Offset=0x8 Size=0x8
    void  ( * EvtIoTargetRemoveCanceled)(struct WDFIOTARGET__ * );// Offset=0x10 Size=0x8
    void  ( * EvtIoTargetRemoveComplete)(struct WDFIOTARGET__ * );// Offset=0x18 Size=0x8
    struct _DEVICE_OBJECT * TargetDeviceObject;// Offset=0x20 Size=0x8
    struct _FILE_OBJECT * TargetFileObject;// Offset=0x28 Size=0x8
    struct _UNICODE_STRING TargetDeviceName;// Offset=0x30 Size=0x10
    unsigned long DesiredAccess;// Offset=0x40 Size=0x4
    unsigned long ShareAccess;// Offset=0x44 Size=0x4
    unsigned long FileAttributes;// Offset=0x48 Size=0x4
    unsigned long CreateDisposition;// Offset=0x4c Size=0x4
    unsigned long CreateOptions;// Offset=0x50 Size=0x4
    void * EaBuffer;// Offset=0x58 Size=0x8
    unsigned long EaBufferLength;// Offset=0x60 Size=0x4
    long long * AllocationSize;// Offset=0x68 Size=0x8
    unsigned long FileInformation;// Offset=0x70 Size=0x4
    struct _UNICODE_STRING FileName;// Offset=0x78 Size=0x10
};
