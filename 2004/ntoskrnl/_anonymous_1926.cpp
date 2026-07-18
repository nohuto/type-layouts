struct _GUID// Size=0x10 (Id=63)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _anonymous_1917// Size=0x14 (Id=1917)
{
    struct _GUID ClassGuid;// Offset=0x0 Size=0x10
    wchar_t SymbolicLinkName[1];// Offset=0x10 Size=0x2
};

struct _anonymous_1918// Size=0x2 (Id=1918)
{
    wchar_t DeviceId[1];// Offset=0x0 Size=0x2
};

struct _anonymous_1919// Size=0x10 (Id=1919)
{
    void * NotificationStructure;// Offset=0x0 Size=0x8
    wchar_t DeviceId[1];// Offset=0x8 Size=0x2
};

struct _anonymous_1920// Size=0x8 (Id=1920)
{
    void * Notification;// Offset=0x0 Size=0x8
};

struct _anonymous_1921// Size=0x8 (Id=1921)
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

struct _anonymous_1922// Size=0x8 (Id=1922)
{
    enum _PNP_VETO_TYPE VetoType;// Offset=0x0 Size=0x4
    wchar_t DeviceIdVetoNameBuffer[1];// Offset=0x4 Size=0x2
};

struct _anonymous_1923// Size=0x10 (Id=1923)
{
    struct _GUID BlockedDriverGuid;// Offset=0x0 Size=0x10
};

struct _anonymous_1924// Size=0x2 (Id=1924)
{
    wchar_t ParentId[1];// Offset=0x0 Size=0x2
};

struct _anonymous_1925// Size=0x20 (Id=1925)
{
    struct _GUID PowerSettingGuid;// Offset=0x0 Size=0x10
    unsigned long Flags;// Offset=0x10 Size=0x4
    unsigned long SessionId;// Offset=0x14 Size=0x4
    unsigned long DataLength;// Offset=0x18 Size=0x4
    unsigned char Data[1];// Offset=0x1c Size=0x1
};

union _anonymous_1926// Size=0x20 (Id=1926)
{
    union // Size=0x20 (Id=0)
    {
        struct _anonymous_1917 DeviceClass;// Offset=0x0 Size=0x14
        struct _anonymous_1918 TargetDevice;// Offset=0x0 Size=0x2
        struct _anonymous_1918 InstallDevice;// Offset=0x0 Size=0x2
        struct _anonymous_1919 CustomNotification;// Offset=0x0 Size=0x10
        struct _anonymous_1920 ProfileNotification;// Offset=0x0 Size=0x8
        struct _anonymous_1921 PowerNotification;// Offset=0x0 Size=0x8
        struct _anonymous_1922 VetoNotification;// Offset=0x0 Size=0x8
        struct _anonymous_1923 BlockedDriverNotification;// Offset=0x0 Size=0x10
        struct _anonymous_1924 InvalidIDNotification;// Offset=0x0 Size=0x2
        struct _anonymous_1925 PowerSettingNotification;// Offset=0x0 Size=0x20
        struct _anonymous_1918 PropertyChangeNotification;// Offset=0x0 Size=0x2
        struct _anonymous_1918 DeviceInstanceNotification;// Offset=0x0 Size=0x2
    };
};
