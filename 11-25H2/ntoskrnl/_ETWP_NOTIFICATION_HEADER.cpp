enum _ETW_NOTIFICATION_TYPE
{
    EtwNotificationTypeNoReply=1,
    EtwNotificationTypeLegacyEnable=2,
    EtwNotificationTypeEnable=3,
    EtwNotificationTypePrivateLogger=4,
    EtwNotificationTypePerflib=5,
    EtwNotificationTypeAudio=6,
    EtwNotificationTypeSession=7,
    EtwNotificationTypeReserved=8,
    EtwNotificationTypeCredentialUI=9,
    EtwNotificationTypeInProcSession=10,
    EtwNotificationTypeFilteredPrivateLogger=11,
    EtwNotificationTypeMax=12
};

struct _GUID// Size=0x10 (Id=647)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _ETWP_NOTIFICATION_HEADER// Size=0x48 (Id=2472)
{
    enum _ETW_NOTIFICATION_TYPE NotificationType;// Offset=0x0 Size=0x4
    unsigned long NotificationSize;// Offset=0x4 Size=0x4
    long RefCount;// Offset=0x8 Size=0x4
    unsigned char ReplyRequested;// Offset=0xc Size=0x1
    union // Size=0x4 (Id=0)
    {
        unsigned long ReplyIndex;// Offset=0x10 Size=0x4
        unsigned long Timeout;// Offset=0x10 Size=0x4
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long ReplyCount;// Offset=0x14 Size=0x4
        unsigned long NotifyeeCount;// Offset=0x14 Size=0x4
    };
    union // Size=0x20 (Id=0)
    {
        unsigned long long ReplyHandle;// Offset=0x18 Size=0x8
        void * ReplyObject;// Offset=0x18 Size=0x8
        unsigned long RegIndex;// Offset=0x18 Size=0x4
        unsigned long TargetPID;// Offset=0x20 Size=0x4
    };
    unsigned long SourcePID;// Offset=0x24 Size=0x4
    struct _GUID DestinationGuid;// Offset=0x28 Size=0x10
    struct _GUID SourceGuid;// Offset=0x38 Size=0x10
};
