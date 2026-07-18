enum _HAL_PMU_NOTIFICATION_TYPE
{
    HalPmuAvailableNotification=0,
    HalPmuReleaseNotification=1
};

struct HAL_PMU_NOTIFICATION// Size=0x8 (Id=3873)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    enum _HAL_PMU_NOTIFICATION_TYPE NotificationType;// Offset=0x4 Size=0x4
};
