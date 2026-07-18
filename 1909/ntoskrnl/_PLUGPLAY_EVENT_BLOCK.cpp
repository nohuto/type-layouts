struct _GUID// Size=0x10 (Id=41)
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

struct _anonymous_1783// Size=0x14 (Id=1783)
{
    struct _GUID ClassGuid;// Offset=0x0 Size=0x10
    wchar_t SymbolicLinkName[1];// Offset=0x10 Size=0x2
};

struct _anonymous_1784// Size=0x2 (Id=1784)
{
    wchar_t DeviceId[1];// Offset=0x0 Size=0x2
};

struct _anonymous_1785// Size=0x10 (Id=1785)
{
    void * NotificationStructure;// Offset=0x0 Size=0x8
    wchar_t DeviceId[1];// Offset=0x8 Size=0x2
};

struct _anonymous_1786// Size=0x8 (Id=1786)
{
    void * Notification;// Offset=0x0 Size=0x8
};

struct _anonymous_1787// Size=0x8 (Id=1787)
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
    PNP_VetoInsufficientRights=12,
    PNP_VetoAlreadyRemoved=13
};

struct _anonymous_1788// Size=0x8 (Id=1788)
{
    enum _PNP_VETO_TYPE VetoType;// Offset=0x0 Size=0x4
    wchar_t DeviceIdVetoNameBuffer[1];// Offset=0x4 Size=0x2
};

struct _anonymous_1789// Size=0x10 (Id=1789)
{
    struct _GUID BlockedDriverGuid;// Offset=0x0 Size=0x10
};

struct _anonymous_1790// Size=0x2 (Id=1790)
{
    wchar_t ParentId[1];// Offset=0x0 Size=0x2
};

struct _anonymous_1791// Size=0x20 (Id=1791)
{
    struct _GUID PowerSettingGuid;// Offset=0x0 Size=0x10
    unsigned long Flags;// Offset=0x10 Size=0x4
    unsigned long SessionId;// Offset=0x14 Size=0x4
    unsigned long DataLength;// Offset=0x18 Size=0x4
    unsigned char Data[1];// Offset=0x1c Size=0x1
};

union _anonymous_1792// Size=0x20 (Id=1792)
{
    union // Size=0x20 (Id=0)
    {
        struct _anonymous_1783 DeviceClass;// Offset=0x0 Size=0x14
        struct _anonymous_1784 TargetDevice;// Offset=0x0 Size=0x2
        struct _anonymous_1784 InstallDevice;// Offset=0x0 Size=0x2
        struct _anonymous_1785 CustomNotification;// Offset=0x0 Size=0x10
        struct _anonymous_1786 ProfileNotification;// Offset=0x0 Size=0x8
        struct _anonymous_1787 PowerNotification;// Offset=0x0 Size=0x8
        struct _anonymous_1788 VetoNotification;// Offset=0x0 Size=0x8
        struct _anonymous_1789 BlockedDriverNotification;// Offset=0x0 Size=0x10
        struct _anonymous_1790 InvalidIDNotification;// Offset=0x0 Size=0x2
        struct _anonymous_1791 PowerSettingNotification;// Offset=0x0 Size=0x20
        struct _anonymous_1784 PropertyChangeNotification;// Offset=0x0 Size=0x2
        struct _anonymous_1784 DeviceInstanceNotification;// Offset=0x0 Size=0x2
    };
};

struct _PLUGPLAY_EVENT_BLOCK// Size=0x50 (Id=1793)
{
    struct _GUID EventGuid;// Offset=0x0 Size=0x10
    enum _PLUGPLAY_EVENT_CATEGORY EventCategory;// Offset=0x10 Size=0x4
    unsigned long * Result;// Offset=0x18 Size=0x8
    unsigned long Flags;// Offset=0x20 Size=0x4
    unsigned long TotalSize;// Offset=0x24 Size=0x4
    void * DeviceObject;// Offset=0x28 Size=0x8
    union _anonymous_1792 u;// Offset=0x30 Size=0x20
};
