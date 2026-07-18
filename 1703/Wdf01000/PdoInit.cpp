struct _WDF_PDO_EVENT_CALLBACKS// Size=0x40 (Id=923)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    long  ( * EvtDeviceResourcesQuery)(struct WDFDEVICE__ * ,struct WDFCMRESLIST__ * );// Offset=0x8 Size=0x8
    long  ( * EvtDeviceResourceRequirementsQuery)(struct WDFDEVICE__ * ,struct WDFIORESREQLIST__ * );// Offset=0x10 Size=0x8
    long  ( * EvtDeviceEject)(struct WDFDEVICE__ * );// Offset=0x18 Size=0x8
    long  ( * EvtDeviceSetLock)(struct WDFDEVICE__ * ,unsigned char );// Offset=0x20 Size=0x8
    long  ( * EvtDeviceEnableWakeAtBus)(struct WDFDEVICE__ * ,enum _SYSTEM_POWER_STATE );// Offset=0x28 Size=0x8
    void  ( * EvtDeviceDisableWakeAtBus)(struct WDFDEVICE__ * );// Offset=0x30 Size=0x8
    void  ( * EvtDeviceReportedMissing)(struct WDFDEVICE__ * );// Offset=0x38 Size=0x8
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=130)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct PdoInit// Size=0xb0 (Id=1305)
{
    void PdoInit();
    struct _WDF_PDO_EVENT_CALLBACKS EventCallbacks;// Offset=0x0 Size=0x40
    class FxDevice * Parent;// Offset=0x40 Size=0x8
    class FxString * DeviceID;// Offset=0x48 Size=0x8
    class FxString * InstanceID;// Offset=0x50 Size=0x8
    struct FxCollectionInternal HardwareIDs;// Offset=0x58 Size=0x18
    struct FxCollectionInternal CompatibleIDs;// Offset=0x70 Size=0x18
    class FxString * ContainerID;// Offset=0x88 Size=0x8
    struct _SINGLE_LIST_ENTRY DeviceText;// Offset=0x90 Size=0x8
    struct _SINGLE_LIST_ENTRY ** LastDeviceTextEntry;// Offset=0x98 Size=0x8
    struct FxDeviceDescriptionEntry * DescriptionEntry;// Offset=0xa0 Size=0x8
    unsigned long DefaultLocale;// Offset=0xa8 Size=0x4
    unsigned char Raw;// Offset=0xac Size=0x1
    unsigned char Static;// Offset=0xad Size=0x1
    unsigned char ForwardRequestToParent;// Offset=0xae Size=0x1
    void ~PdoInit();
    void * __vecDelDtor(unsigned int );
};
