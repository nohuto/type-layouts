enum _UCX_CONTROLLER_PARENT_BUS_TYPE
{
    UcxControllerParentBusTypeCustom=0,
    UcxControllerParentBusTypePci=1,
    UcxControllerParentBusTypeAcpi=2,
    UcxControllerParentBusTypeMaUsb=3
};

struct _UCX_CONTROLLER_PCI_INFORMATION// Size=0x18 (Id=827)
{
    unsigned long VendorId;// Offset=0x0 Size=0x4
    unsigned long DeviceId;// Offset=0x4 Size=0x4
    unsigned short RevisionId;// Offset=0x8 Size=0x2
    unsigned long BusNumber;// Offset=0xc Size=0x4
    unsigned long DeviceNumber;// Offset=0x10 Size=0x4
    unsigned long FunctionNumber;// Offset=0x14 Size=0x4
};

struct _UCX_CONTROLLER_ACPI_INFORMATION// Size=0xf (Id=484)
{
    char VendorId[5];// Offset=0x0 Size=0x5
    char DeviceId[5];// Offset=0x5 Size=0x5
    char RevisionId[5];// Offset=0xa Size=0x5
};

struct _UNICODE_STRING// Size=0x10 (Id=153)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _UCX_CONTROLLER_CONFIG// Size=0xf8 (Id=383)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    unsigned long NumberOfPresentedDeviceMgmtEvtCallbacks;// Offset=0x4 Size=0x4
    long  ( * EvtControllerQueryUsbCapability)(struct UCXCONTROLLER__ * ,struct _GUID * ,unsigned long ,void * ,unsigned long * );// Offset=0x8 Size=0x8
    long  ( * EvtControllerGetBandwidthInformation)(struct UCXCONTROLLER__ * );// Offset=0x10 Size=0x8
    long  ( * EvtControllerGetCurrentFrameNumber)(struct UCXCONTROLLER__ * ,unsigned long * );// Offset=0x18 Size=0x8
    long  ( * EvtControllerUsbDeviceAdd)(struct UCXCONTROLLER__ * ,struct _UCXUSBDEVICE_INFO * ,struct _UCXUSBDEVICE_INIT * );// Offset=0x20 Size=0x8
    void  ( * EvtControllerReset)(struct UCXCONTROLLER__ * );// Offset=0x28 Size=0x8
    long  ( * EvtControllerEnableForwardProgress)(struct UCXCONTROLLER__ * );// Offset=0x30 Size=0x8
    long  ( * EvtControllerGetDumpData)(struct UCXCONTROLLER__ * ,struct UCXUSBDEVICE__ * ,struct _USB_DUMP_DEVICE_INFO * ,struct _USB_DUMP_CONTROLLER_INFO * );// Offset=0x38 Size=0x8
    void  ( * EvtControllerFreeDumpData)(struct UCXCONTROLLER__ * ,struct _USB_DUMP_CONTROLLER_INFO * );// Offset=0x40 Size=0x8
    enum _UCX_CONTROLLER_PARENT_BUS_TYPE ParentBusType;// Offset=0x48 Size=0x4
    struct _UCX_CONTROLLER_PCI_INFORMATION PciDeviceInfo;// Offset=0x4c Size=0x18
    struct _UCX_CONTROLLER_ACPI_INFORMATION AcpiDeviceInfo;// Offset=0x64 Size=0xf
    unsigned char DeviceDescription[40];// Offset=0x73 Size=0x28
    struct _UNICODE_STRING ManufacturerNameString;// Offset=0xa0 Size=0x10
    struct _UNICODE_STRING ModelNameString;// Offset=0xb0 Size=0x10
    struct _UNICODE_STRING ModelNumberString;// Offset=0xc0 Size=0x10
    long  ( * EvtControllerGetTransportCharacteristics)(struct UCXCONTROLLER__ * ,struct _UCX_CONTROLLER_TRANSPORT_CHARACTERISTICS * );// Offset=0xd0 Size=0x8
    void  ( * EvtControllerSetTransportCharacteristicsChangeNotification)(struct UCXCONTROLLER__ * ,union _UCX_CONTROLLER_TRANSPORT_CHARACTERISTICS_CHANGE_FLAGS );// Offset=0xd8 Size=0x8
    void  ( * EvtControllerStartTrackingForTimeSync)(struct UCXCONTROLLER__ * ,struct WDFREQUEST__ * ,unsigned long long ,unsigned long long );// Offset=0xe0 Size=0x8
    void  ( * EvtControllerStopTrackingForTimeSync)(struct UCXCONTROLLER__ * ,struct WDFREQUEST__ * ,unsigned long long ,unsigned long long );// Offset=0xe8 Size=0x8
    void  ( * EvtControllerGetFrameNumberAndQpcForTimeSync)(struct UCXCONTROLLER__ * ,struct WDFREQUEST__ * ,unsigned long long ,unsigned long long );// Offset=0xf0 Size=0x8
};
