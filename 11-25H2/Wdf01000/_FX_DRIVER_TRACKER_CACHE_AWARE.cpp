struct _FX_DRIVER_TRACKER_CACHE_AWARE// Size=0x18 (Id=3053)
{
    union // Size=0x11c (Id=0)
    {
        struct _FX_DRIVER_TRACKER_ENTRY// Size=0x8 (Id=9552)
        {
            struct _FX_DRIVER_GLOBALS * FxDriverGlobals;// Offset=0x0 Size=0x8
        };
        struct FX_DRIVER_TRACKER_ENTRY// Size=0x8 (Id=9555)
        {
        };// Offset=0x0 Size=0x8
        long Initialize();
        void Uninitialize();
        long Register(struct _FX_DRIVER_GLOBALS * );// Offset=0x0 Size=0x11c
        void Deregister(struct _FX_DRIVER_GLOBALS * );
        void TrackDriver(struct _FX_DRIVER_GLOBALS * );
        struct _FX_DRIVER_GLOBALS * GetCurrentTrackedDriver();
        struct _FX_DRIVER_TRACKER_CACHE_AWARE::_FX_DRIVER_TRACKER_ENTRY * GetProcessorDriverEntryRef(unsigned long );
        struct _FX_DRIVER_TRACKER_CACHE_AWARE::_FX_DRIVER_TRACKER_ENTRY * m_DriverUsage;// Offset=0x0 Size=0x8
        void * m_PoolToFree;// Offset=0x8 Size=0x8
        unsigned long m_EntrySize;// Offset=0x10 Size=0x4
        unsigned long m_Number;// Offset=0x14 Size=0x4
    };
};
