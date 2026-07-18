struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct NDIS_BIND_DRIVER_BASE// Size=0x18 (Id=215)
{
    void NDIS_BIND_DRIVER_BASE();
    void ~NDIS_BIND_DRIVER_BASE();
    void ForEachLink(void  ( * )(struct NDIS_BIND_LINK_BASE * ));
    class KPushLock & GetRunningDriverLock();
    void SetRunningDriverIsReady(bool ,enum CallRunMode );
    bool DriverReady;// Offset=0x0 Size=0x1
    bool NeedsBindCompleteEvent;// Offset=0x1 Size=0x1
    struct _LIST_ENTRY BindLinks;// Offset=0x8 Size=0x10
    void * __vecDelDtor(unsigned int );
};
