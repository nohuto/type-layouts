struct _GUID// Size=0x10 (Id=198)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _unnamed_1433// Size=0x14 (Id=1433)
{
    struct _GUID ClassGuid;// Offset=0x0 Size=0x10
    wchar_t SymbolicLinkName[1];// Offset=0x10 Size=0x2
};

struct _unnamed_1434// Size=0x2 (Id=1434)
{
    wchar_t DeviceId[1];// Offset=0x0 Size=0x2
};

struct _unnamed_1435// Size=0x10 (Id=1435)
{
    void * NotificationStructure;// Offset=0x0 Size=0x8
    wchar_t DeviceId[1];// Offset=0x8 Size=0x2
};

struct _unnamed_1436// Size=0x8 (Id=1436)
{
    void * Notification;// Offset=0x0 Size=0x8
};

struct _unnamed_1437// Size=0x8 (Id=1437)
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

struct _unnamed_1438// Size=0x8 (Id=1438)
{
    enum _PNP_VETO_TYPE VetoType;// Offset=0x0 Size=0x4
    wchar_t DeviceIdVetoNameBuffer[1];// Offset=0x4 Size=0x2
};

struct _unnamed_1439// Size=0x10 (Id=1439)
{
    struct _GUID BlockedDriverGuid;// Offset=0x0 Size=0x10
};

struct _unnamed_1440// Size=0x2 (Id=1440)
{
    wchar_t ParentId[1];// Offset=0x0 Size=0x2
};

struct _unnamed_1441// Size=0x20 (Id=1441)
{
    struct _GUID PowerSettingGuid;// Offset=0x0 Size=0x10
    unsigned long Flags;// Offset=0x10 Size=0x4
    unsigned long SessionId;// Offset=0x14 Size=0x4
    unsigned long DataLength;// Offset=0x18 Size=0x4
    unsigned char Data[1];// Offset=0x1c Size=0x1
};

union _unnamed_1442// Size=0x20 (Id=1442)
{
    union // Size=0x20 (Id=0)
    {
        struct _unnamed_1433 DeviceClass;// Offset=0x0 Size=0x14
        struct _unnamed_1434 TargetDevice;// Offset=0x0 Size=0x2
        struct _unnamed_1434 InstallDevice;// Offset=0x0 Size=0x2
        struct _unnamed_1435 CustomNotification;// Offset=0x0 Size=0x10
        struct _unnamed_1436 ProfileNotification;// Offset=0x0 Size=0x8
        struct _unnamed_1437 PowerNotification;// Offset=0x0 Size=0x8
        struct _unnamed_1438 VetoNotification;// Offset=0x0 Size=0x8
        struct _unnamed_1439 BlockedDriverNotification;// Offset=0x0 Size=0x10
        struct _unnamed_1440 InvalidIDNotification;// Offset=0x0 Size=0x2
        struct _unnamed_1441 PowerSettingNotification;// Offset=0x0 Size=0x20
        struct _unnamed_1434 PropertyChangeNotification;// Offset=0x0 Size=0x2
        struct _unnamed_1434 DeviceInstanceNotification;// Offset=0x0 Size=0x2
    };
};
