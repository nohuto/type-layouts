struct KSEVENTDATA// Size=0x20 (Id=1228)
{
    unsigned long NotificationType;// Offset=0x0 Size=0x4
    union // Size=0x20 (Id=0)
    {
        struct KSEVENTDATA::_unnamed_1286::<unnamed-type-EventHandle> EventHandle;// Offset=0x8 Size=0x18
        struct KSEVENTDATA::_unnamed_1287::<unnamed-type-SemaphoreHandle> SemaphoreHandle;// Offset=0x8 Size=0x10
        struct KSEVENTDATA::_unnamed_1288::<unnamed-type-EventObject> EventObject;// Offset=0x8 Size=0x18
        struct KSEVENTDATA::_unnamed_1289::<unnamed-type-SemaphoreObject> SemaphoreObject;// Offset=0x8 Size=0x10
        struct KSEVENTDATA::_unnamed_1290::<unnamed-type-Dpc> Dpc;// Offset=0x8 Size=0x18
        struct KSEVENTDATA::_unnamed_1291::<unnamed-type-WorkItem> WorkItem;// Offset=0x8 Size=0x18
        struct KSEVENTDATA::_unnamed_1292::<unnamed-type-KsWorkItem> KsWorkItem;// Offset=0x8 Size=0x18
        struct KSEVENTDATA::_unnamed_1293::<unnamed-type-Alignment> Alignment;// Offset=0x8 Size=0x18
    };
};
