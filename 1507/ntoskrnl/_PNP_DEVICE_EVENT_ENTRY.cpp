struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _GUID// Size=0x10 (Id=92)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

enum _PLUGPLAY_EVENT_CATEGORY
{
    HardwareProfileChangeEvent=0,
    TargetDeviceChangeEvent=1,
    DeviceClassChangeEvent=2,
    CustomDeviceEvent=3,
    DeviceInstallEvent=4,
    DeviceArrivalEvent=5,
    VetoEvent=6,
    BlockedDriverEvent=7,
    InvalidIDEvent=8,
    DevicePropertyChangeEvent=9,
    DeviceInstanceRemovalEvent=10,
    DeviceInstanceStartedEvent=11,
    MaxPlugEventCategory=12
};

struct _unnamed_797// Size=0x14 (Id=797)
{
    struct _GUID ClassGuid;// Offset=0x0 Size=0x10
    wchar_t SymbolicLinkName[1];// Offset=0x10 Size=0x2
};

struct _unnamed_798// Size=0x2 (Id=798)
{
    wchar_t DeviceId[1];// Offset=0x0 Size=0x2
};

struct _unnamed_799// Size=0x10 (Id=799)
{
    void * NotificationStructure;// Offset=0x0 Size=0x8
    wchar_t DeviceId[1];// Offset=0x8 Size=0x2
};

struct _unnamed_800// Size=0x8 (Id=800)
{
    void * Notification;// Offset=0x0 Size=0x8
};

struct _unnamed_801// Size=0x8 (Id=801)
{
    unsigned long NotificationCode;// Offset=0x0 Size=0x4
    unsigned long NotificationData;// Offset=0x4 Size=0x4
};

enum _PNP_VETO_TYPE
{
    PNP_VetoTypeUnknown=0,
    PNP_VetoLegacyDevice=1,
    PNP_VetoPendingClose=2,
    PNP_VetoWindowsApp=3,
    PNP_VetoWindowsService=4,
    PNP_VetoOutstandingOpen=5,
    PNP_VetoDevice=6,
    PNP_VetoDriver=7,
    PNP_VetoIllegalDeviceRequest=8,
    PNP_VetoInsufficientPower=9,
    PNP_VetoNonDisableable=10,
    PNP_VetoLegacyDriver=11,
    PNP_VetoInsufficientRights=12
};

struct _unnamed_802// Size=0x8 (Id=802)
{
    enum _PNP_VETO_TYPE VetoType;// Offset=0x0 Size=0x4
    wchar_t DeviceIdVetoNameBuffer[1];// Offset=0x4 Size=0x2
};

struct _unnamed_803// Size=0x10 (Id=803)
{
    struct _GUID BlockedDriverGuid;// Offset=0x0 Size=0x10
};

struct _unnamed_804// Size=0x2 (Id=804)
{
    wchar_t ParentId[1];// Offset=0x0 Size=0x2
};

struct _unnamed_805// Size=0x20 (Id=805)
{
    struct _GUID PowerSettingGuid;// Offset=0x0 Size=0x10
    unsigned long Flags;// Offset=0x10 Size=0x4
    unsigned long SessionId;// Offset=0x14 Size=0x4
    unsigned long DataLength;// Offset=0x18 Size=0x4
    unsigned char Data[1];// Offset=0x1c Size=0x1
};

union _unnamed_806// Size=0x20 (Id=806)
{
    union // Size=0x20 (Id=0)
    {
        struct _unnamed_797 DeviceClass;// Offset=0x0 Size=0x14
        struct _unnamed_798 TargetDevice;// Offset=0x0 Size=0x2
        struct _unnamed_798 InstallDevice;// Offset=0x0 Size=0x2
        struct _unnamed_799 CustomNotification;// Offset=0x0 Size=0x10
        struct _unnamed_800 ProfileNotification;// Offset=0x0 Size=0x8
        struct _unnamed_801 PowerNotification;// Offset=0x0 Size=0x8
        struct _unnamed_802 VetoNotification;// Offset=0x0 Size=0x8
        struct _unnamed_803 BlockedDriverNotification;// Offset=0x0 Size=0x10
        struct _unnamed_804 InvalidIDNotification;// Offset=0x0 Size=0x2
        struct _unnamed_805 PowerSettingNotification;// Offset=0x0 Size=0x20
        struct _unnamed_798 PropertyChangeNotification;// Offset=0x0 Size=0x2
        struct _unnamed_798 DeviceInstanceNotification;// Offset=0x0 Size=0x2
    };
};

struct _PLUGPLAY_EVENT_BLOCK// Size=0x50 (Id=807)
{
    struct _GUID EventGuid;// Offset=0x0 Size=0x10
    enum _PLUGPLAY_EVENT_CATEGORY EventCategory;// Offset=0x10 Size=0x4
    unsigned long * Result;// Offset=0x18 Size=0x8
    unsigned long Flags;// Offset=0x20 Size=0x4
    unsigned long TotalSize;// Offset=0x24 Size=0x4
    void * DeviceObject;// Offset=0x28 Size=0x8
    union _unnamed_806 u;// Offset=0x30 Size=0x20
};

struct _PNP_DEVICE_EVENT_ENTRY// Size=0xb8 (Id=637)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    unsigned long Argument;// Offset=0x10 Size=0x4
    struct _KEVENT * CallerEvent;// Offset=0x18 Size=0x8
    void  ( * Callback)(void * );// Offset=0x20 Size=0x8
    void * Context;// Offset=0x28 Size=0x8
    enum _PNP_VETO_TYPE * VetoType;// Offset=0x30 Size=0x8
    struct _UNICODE_STRING * VetoName;// Offset=0x38 Size=0x8
    unsigned long RefCount;// Offset=0x40 Size=0x4
    unsigned long Lock;// Offset=0x44 Size=0x4
    unsigned char Cancel;// Offset=0x48 Size=0x1
    struct _PNP_DEVICE_EVENT_ENTRY * Parent;// Offset=0x50 Size=0x8
    struct _GUID ActivityId;// Offset=0x58 Size=0x10
    struct _PLUGPLAY_EVENT_BLOCK Data;// Offset=0x68 Size=0x50
};
