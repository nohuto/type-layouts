enum _PNP_WATCHDOG_TYPE
{
    PNP_WATCHDOG_NONE=0,
    PNP_EVENT_WORKER_WATCHDOG=1,
    PNP_DEVICE_COMPLETION_QUEUE_WATCHDOG=2,
    PNP_DELAYED_REMOVE_WORKER_WATCHDOG=3,
    PNP_ADD_DEVICE_WATCHDOG=4,
    PNP_DRIVER_ENTRY_WATCHDOG=5
};

struct _UNICODE_STRING// Size=0x10 (Id=510)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _PNP_WATCHDOG// Size=0x40 (Id=2135)
{
    unsigned long long WatchdogStart;// Offset=0x0 Size=0x8
    struct _WDT_HANDLE * WatchdogTimer;// Offset=0x8 Size=0x8
    enum _PNP_WATCHDOG_TYPE WatchdogContextType;// Offset=0x10 Size=0x4
    void * WatchdogContext;// Offset=0x18 Size=0x8
    unsigned char FirstChanceTriggered;// Offset=0x20 Size=0x1
    unsigned char TelemetryGenerated;// Offset=0x21 Size=0x1
    struct _UNICODE_STRING DriverToBlame;// Offset=0x28 Size=0x10
    wchar_t DriverToBlameBuffer[1];// Offset=0x38 Size=0x2
};
