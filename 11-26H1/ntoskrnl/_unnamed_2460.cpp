struct _GUID// Size=0x10 (Id=112)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _unnamed_2451// Size=0x14 (Id=2451)
{
    struct _GUID ClassGuid;// Offset=0x0 Size=0x10
    wchar_t SymbolicLinkName[1];// Offset=0x10 Size=0x2
};

struct _unnamed_2452// Size=0x2 (Id=2452)
{
    wchar_t DeviceId[1];// Offset=0x0 Size=0x2
};

struct _unnamed_2453// Size=0x10 (Id=2453)
{
    void * NotificationStructure;// Offset=0x0 Size=0x8
    wchar_t DeviceId[1];// Offset=0x8 Size=0x2
};

struct _unnamed_2454// Size=0x8 (Id=2454)
{
    void * Notification;// Offset=0x0 Size=0x8
};

struct _unnamed_2455// Size=0x8 (Id=2455)
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

struct _unnamed_2456// Size=0x8 (Id=2456)
{
    enum _PNP_VETO_TYPE VetoType;// Offset=0x0 Size=0x4
    wchar_t DeviceIdVetoNameBuffer[1];// Offset=0x4 Size=0x2
};

struct _unnamed_2457// Size=0x10 (Id=2457)
{
    struct _GUID BlockedDriverGuid;// Offset=0x0 Size=0x10
};

struct _unnamed_2458// Size=0x2 (Id=2458)
{
    wchar_t ParentId[1];// Offset=0x0 Size=0x2
};

struct _unnamed_2459// Size=0x20 (Id=2459)
{
    struct _GUID PowerSettingGuid;// Offset=0x0 Size=0x10
    unsigned long Flags;// Offset=0x10 Size=0x4
    unsigned long SessionId;// Offset=0x14 Size=0x4
    unsigned long DataLength;// Offset=0x18 Size=0x4
    unsigned char Data[1];// Offset=0x1c Size=0x1
};

union _unnamed_2460// Size=0x20 (Id=2460)
{
    union // Size=0x20 (Id=0)
    {
        struct _unnamed_2451 DeviceClass;// Offset=0x0 Size=0x14
        struct _unnamed_2452 TargetDevice;// Offset=0x0 Size=0x2
        struct _unnamed_2452 InstallDevice;// Offset=0x0 Size=0x2
        struct _unnamed_2453 CustomNotification;// Offset=0x0 Size=0x10
        struct _unnamed_2454 ProfileNotification;// Offset=0x0 Size=0x8
        struct _unnamed_2455 PowerNotification;// Offset=0x0 Size=0x8
        struct _unnamed_2456 VetoNotification;// Offset=0x0 Size=0x8
        struct _unnamed_2457 BlockedDriverNotification;// Offset=0x0 Size=0x10
        struct _unnamed_2458 InvalidIDNotification;// Offset=0x0 Size=0x2
        struct _unnamed_2459 PowerSettingNotification;// Offset=0x0 Size=0x20
        struct _unnamed_2452 PropertyChangeNotification;// Offset=0x0 Size=0x2
        struct _unnamed_2452 DeviceInstanceNotification;// Offset=0x0 Size=0x2
    };
};
