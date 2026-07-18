struct _WDF_FDO_EVENT_CALLBACKS// Size=0x20 (Id=1829)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    long  ( * EvtDeviceFilterAddResourceRequirements)(struct WDFDEVICE__ * ,struct WDFIORESREQLIST__ * );// Offset=0x8 Size=0x8
    long  ( * EvtDeviceFilterRemoveResourceRequirements)(struct WDFDEVICE__ * ,struct WDFIORESREQLIST__ * );// Offset=0x10 Size=0x8
    long  ( * EvtDeviceRemoveAddedResources)(struct WDFDEVICE__ * ,struct WDFCMRESLIST__ * ,struct WDFCMRESLIST__ * );// Offset=0x18 Size=0x8
};
