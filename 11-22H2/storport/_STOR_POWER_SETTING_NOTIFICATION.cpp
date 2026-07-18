struct _STOR_POWER_SETTING_NOTIFICATION// Size=0x18 (Id=870)
{
    unsigned long GuidsCount;// Offset=0x0 Size=0x4
    struct _GUID * Guid;// Offset=0x8 Size=0x8
    void ** Handle;// Offset=0x10 Size=0x8
};
