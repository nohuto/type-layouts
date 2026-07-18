enum _PNP_WATCHDOG_TYPE
{
    PNP_EVENT_WORKER_WATCHDOG=1,
    PNP_DEVICE_COMPLETION_QUEUE_WATCHDOG=2,
    PNP_DELAYED_REMOVE_WORKER_WATCHDOG=3,
    PNP_ADD_DEVICE_WATCHDOG=4,
    PNP_DRIVER_ENTRY_WATCHDOG=5
};

struct _PNP_WATCHDOG// Size=0x28 (Id=1912)
{
    unsigned long long WatchdogStart;// Offset=0x0 Size=0x8
    struct _WDT_HANDLE * WatchdogTimer;// Offset=0x8 Size=0x8
    enum _PNP_WATCHDOG_TYPE WatchdogContextType;// Offset=0x10 Size=0x4
    void * WatchdogContext;// Offset=0x18 Size=0x8
    unsigned char TriggerEventLogged;// Offset=0x20 Size=0x1
};
