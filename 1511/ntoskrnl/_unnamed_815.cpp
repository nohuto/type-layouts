struct _GUID// Size=0x10 (Id=101)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _unnamed_806// Size=0x14 (Id=806)
{
    struct _GUID ClassGuid;// Offset=0x0 Size=0x10
    wchar_t SymbolicLinkName[1];// Offset=0x10 Size=0x2
};

struct _unnamed_807// Size=0x2 (Id=807)
{
    wchar_t DeviceId[1];// Offset=0x0 Size=0x2
};

struct _unnamed_808// Size=0x10 (Id=808)
{
    void * NotificationStructure;// Offset=0x0 Size=0x8
    wchar_t DeviceId[1];// Offset=0x8 Size=0x2
};

struct _unnamed_809// Size=0x8 (Id=809)
{
    void * Notification;// Offset=0x0 Size=0x8
};

struct _unnamed_810// Size=0x8 (Id=810)
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

struct _unnamed_811// Size=0x8 (Id=811)
{
    enum _PNP_VETO_TYPE VetoType;// Offset=0x0 Size=0x4
    wchar_t DeviceIdVetoNameBuffer[1];// Offset=0x4 Size=0x2
};

struct _unnamed_812// Size=0x10 (Id=812)
{
    struct _GUID BlockedDriverGuid;// Offset=0x0 Size=0x10
};

struct _unnamed_813// Size=0x2 (Id=813)
{
    wchar_t ParentId[1];// Offset=0x0 Size=0x2
};

struct _unnamed_814// Size=0x20 (Id=814)
{
    struct _GUID PowerSettingGuid;// Offset=0x0 Size=0x10
    unsigned long Flags;// Offset=0x10 Size=0x4
    unsigned long SessionId;// Offset=0x14 Size=0x4
    unsigned long DataLength;// Offset=0x18 Size=0x4
    unsigned char Data[1];// Offset=0x1c Size=0x1
};

union _unnamed_815// Size=0x20 (Id=815)
{
    union // Size=0x20 (Id=0)
    {
        struct _unnamed_806 DeviceClass;// Offset=0x0 Size=0x14
        struct _unnamed_807 TargetDevice;// Offset=0x0 Size=0x2
        struct _unnamed_807 InstallDevice;// Offset=0x0 Size=0x2
        struct _unnamed_808 CustomNotification;// Offset=0x0 Size=0x10
        struct _unnamed_809 ProfileNotification;// Offset=0x0 Size=0x8
        struct _unnamed_810 PowerNotification;// Offset=0x0 Size=0x8
        struct _unnamed_811 VetoNotification;// Offset=0x0 Size=0x8
        struct _unnamed_812 BlockedDriverNotification;// Offset=0x0 Size=0x10
        struct _unnamed_813 InvalidIDNotification;// Offset=0x0 Size=0x2
        struct _unnamed_814 PowerSettingNotification;// Offset=0x0 Size=0x20
        struct _unnamed_807 PropertyChangeNotification;// Offset=0x0 Size=0x2
        struct _unnamed_807 DeviceInstanceNotification;// Offset=0x0 Size=0x2
    };
};
