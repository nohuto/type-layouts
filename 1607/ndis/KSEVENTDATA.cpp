struct KSEVENTDATA// Size=0x20 (Id=1091)
{
    unsigned long NotificationType;// Offset=0x0 Size=0x4
    union // Size=0x20 (Id=0)
    {
        struct KSEVENTDATA::_unnamed_1151::<unnamed-type-EventHandle> EventHandle;// Offset=0x8 Size=0x18
        struct KSEVENTDATA::_unnamed_1152::<unnamed-type-SemaphoreHandle> SemaphoreHandle;// Offset=0x8 Size=0x10
        struct KSEVENTDATA::_unnamed_1153::<unnamed-type-EventObject> EventObject;// Offset=0x8 Size=0x18
        struct KSEVENTDATA::_unnamed_1154::<unnamed-type-SemaphoreObject> SemaphoreObject;// Offset=0x8 Size=0x10
        struct KSEVENTDATA::_unnamed_1155::<unnamed-type-Dpc> Dpc;// Offset=0x8 Size=0x18
        struct KSEVENTDATA::_unnamed_1157::<unnamed-type-WorkItem> WorkItem;// Offset=0x8 Size=0x18
        struct KSEVENTDATA::_unnamed_1158::<unnamed-type-KsWorkItem> KsWorkItem;// Offset=0x8 Size=0x18
        struct KSEVENTDATA::_unnamed_1159::<unnamed-type-Alignment> Alignment;// Offset=0x8 Size=0x18
    };
};
