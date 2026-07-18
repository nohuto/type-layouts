struct KSEVENTDATA// Size=0x20 (Id=1130)
{
    unsigned long NotificationType;// Offset=0x0 Size=0x4
    union // Size=0x20 (Id=0)
    {
        struct KSEVENTDATA::_unnamed_1187::<unnamed-type-EventHandle> EventHandle;// Offset=0x8 Size=0x18
        struct KSEVENTDATA::_unnamed_1188::<unnamed-type-SemaphoreHandle> SemaphoreHandle;// Offset=0x8 Size=0x10
        struct KSEVENTDATA::_unnamed_1189::<unnamed-type-EventObject> EventObject;// Offset=0x8 Size=0x18
        struct KSEVENTDATA::_unnamed_1190::<unnamed-type-SemaphoreObject> SemaphoreObject;// Offset=0x8 Size=0x10
        struct KSEVENTDATA::_unnamed_1191::<unnamed-type-Dpc> Dpc;// Offset=0x8 Size=0x18
        struct KSEVENTDATA::_unnamed_1193::<unnamed-type-WorkItem> WorkItem;// Offset=0x8 Size=0x18
        struct KSEVENTDATA::_unnamed_1194::<unnamed-type-KsWorkItem> KsWorkItem;// Offset=0x8 Size=0x18
        struct KSEVENTDATA::_unnamed_1195::<unnamed-type-Alignment> Alignment;// Offset=0x8 Size=0x18
    };
};
