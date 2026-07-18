struct KSEVENTDATA// Size=0x20 (Id=1238)
{
    unsigned long NotificationType;// Offset=0x0 Size=0x4
    union // Size=0x20 (Id=0)
    {
        struct KSEVENTDATA::_anonymous_1240::<unnamed-type-EventHandle> EventHandle;// Offset=0x8 Size=0x18
        struct KSEVENTDATA::_anonymous_1241::<unnamed-type-SemaphoreHandle> SemaphoreHandle;// Offset=0x8 Size=0x10
        struct KSEVENTDATA::_anonymous_1242::<unnamed-type-EventObject> EventObject;// Offset=0x8 Size=0x18
        struct KSEVENTDATA::_anonymous_1243::<unnamed-type-SemaphoreObject> SemaphoreObject;// Offset=0x8 Size=0x10
        struct KSEVENTDATA::_anonymous_1244::<unnamed-type-Dpc> Dpc;// Offset=0x8 Size=0x18
        struct KSEVENTDATA::_anonymous_1245::<unnamed-type-WorkItem> WorkItem;// Offset=0x8 Size=0x18
        struct KSEVENTDATA::_anonymous_1246::<unnamed-type-KsWorkItem> KsWorkItem;// Offset=0x8 Size=0x18
        struct KSEVENTDATA::_anonymous_1247::<unnamed-type-Alignment> Alignment;// Offset=0x8 Size=0x18
    };
};
