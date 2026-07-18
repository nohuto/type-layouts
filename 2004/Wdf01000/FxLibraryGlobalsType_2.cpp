struct _OSVERSIONINFOEXW// Size=0x11c (Id=232)
{
    unsigned long dwOSVersionInfoSize;// Offset=0x0 Size=0x4
    unsigned long dwMajorVersion;// Offset=0x4 Size=0x4
    unsigned long dwMinorVersion;// Offset=0x8 Size=0x4
    unsigned long dwBuildNumber;// Offset=0xc Size=0x4
    unsigned long dwPlatformId;// Offset=0x10 Size=0x4
    wchar_t szCSDVersion[128];// Offset=0x14 Size=0x100
    unsigned short wServicePackMajor;// Offset=0x114 Size=0x2
    unsigned short wServicePackMinor;// Offset=0x116 Size=0x2
    unsigned short wSuiteMask;// Offset=0x118 Size=0x2
    unsigned char wProductType;// Offset=0x11a Size=0x1
    unsigned char wReserved;// Offset=0x11b Size=0x1
};

struct _LIST_ENTRY// Size=0x10 (Id=111)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

enum _KBUGCHECK_CALLBACK_REASON
{
    KbCallbackInvalid=0,
    KbCallbackReserved1=1,
    KbCallbackSecondaryDumpData=2,
    KbCallbackDumpIo=3,
    KbCallbackAddPages=4,
    KbCallbackSecondaryMultiPartDumpData=5,
    KbCallbackRemovePages=6,
    KbCallbackTriageDumpData=7
};

struct _KBUGCHECK_REASON_CALLBACK_RECORD// Size=0x30 (Id=723)
{
    struct _LIST_ENTRY Entry;// Offset=0x0 Size=0x10
    void  ( * CallbackRoutine)(enum _KBUGCHECK_CALLBACK_REASON ,struct _KBUGCHECK_REASON_CALLBACK_RECORD * ,void * ,unsigned long );// Offset=0x10 Size=0x8
    unsigned char * Component;// Offset=0x18 Size=0x8
    unsigned long long Checksum;// Offset=0x20 Size=0x8
    enum _KBUGCHECK_CALLBACK_REASON Reason;// Offset=0x28 Size=0x4
    unsigned char State;// Offset=0x2c Size=0x1
};

struct _FX_DRIVER_TRACKER_CACHE_AWARE// Size=0x18 (Id=1371)
{
    union // Size=0x1ee (Id=0)
    {
        struct _FX_DRIVER_TRACKER_ENTRY// Size=0x8 (Id=7936)
        {
            struct _FX_DRIVER_GLOBALS * FxDriverGlobals;// Offset=0x0 Size=0x8
            void _FX_DRIVER_TRACKER_ENTRY(struct _FX_DRIVER_TRACKER_CACHE_AWARE::_FX_DRIVER_TRACKER_ENTRY * );
            void _FX_DRIVER_TRACKER_ENTRY(struct _FX_DRIVER_TRACKER_CACHE_AWARE::_FX_DRIVER_TRACKER_ENTRY & );
            struct _FX_DRIVER_TRACKER_CACHE_AWARE::_FX_DRIVER_TRACKER_ENTRY & operator=(struct _FX_DRIVER_TRACKER_CACHE_AWARE::_FX_DRIVER_TRACKER_ENTRY * );
            struct _FX_DRIVER_TRACKER_CACHE_AWARE::_FX_DRIVER_TRACKER_ENTRY & operator=(struct _FX_DRIVER_TRACKER_CACHE_AWARE::_FX_DRIVER_TRACKER_ENTRY & );
        };
        struct FX_DRIVER_TRACKER_ENTRY// Size=0x8 (Id=7950)
        {
        };// Offset=0x0 Size=0x8
        long Initialize();
        void Uninitialize();
        long Register(struct _FX_DRIVER_GLOBALS * );// Offset=0x0 Size=0x1ee
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

struct _WMI_WDF_NOTIFY_ROUTINES// Size=0x20 (Id=1082)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    void  ( * DpcNotifyRoutine)(void * ,unsigned long ,unsigned long ,unsigned short ,unsigned char );// Offset=0x8 Size=0x8
    void  ( * InterruptNotifyRoutine)(void * ,unsigned long ,unsigned long ,unsigned short ,unsigned char );// Offset=0x10 Size=0x8
    void  ( * WorkItemNotifyRoutine)(void * ,unsigned long ,unsigned long ,unsigned short ,unsigned char );// Offset=0x18 Size=0x8
};

struct FxLibraryGlobalsType// Size=0x2a8 (Id=229)
{
    struct _DRIVER_OBJECT * DriverObject;// Offset=0x0 Size=0x8
    struct _DEVICE_OBJECT * LibraryDeviceObject;// Offset=0x8 Size=0x8
    long  ( * IoConnectInterruptEx)(struct _IO_CONNECT_INTERRUPT_PARAMETERS * );// Offset=0x10 Size=0x8
    long  ( * IoDisconnectInterruptEx)(struct _IO_DISCONNECT_INTERRUPT_PARAMETERS * );// Offset=0x18 Size=0x8
    unsigned long long  ( * KeQueryActiveProcessors)();// Offset=0x20 Size=0x8
    void  ( * KeSetTargetProcessorDpc)(struct _KDPC * ,char );// Offset=0x28 Size=0x8
    unsigned char  ( * KeSetCoalescableTimer)(struct _KTIMER * ,union _LARGE_INTEGER ,unsigned long ,unsigned long ,struct _KDPC * );// Offset=0x30 Size=0x8
    long  ( * IoUnregisterPlugPlayNotificationEx)(void * );// Offset=0x38 Size=0x8
    long  ( * PoxRegisterDevice)(struct _DEVICE_OBJECT * ,struct _PO_FX_DEVICE_V1 * ,struct POHANDLE__ ** );// Offset=0x40 Size=0x8
    void  ( * PoxStartDevicePowerManagement)(struct POHANDLE__ * );// Offset=0x48 Size=0x8
    void  ( * PoxUnregisterDevice)(struct POHANDLE__ * );// Offset=0x50 Size=0x8
    int  ( * PoxActivateComponent)(struct POHANDLE__ * ,unsigned long ,unsigned long );// Offset=0x58 Size=0x8
    int  ( * PoxIdleComponent)(struct POHANDLE__ * ,unsigned long ,unsigned long );// Offset=0x60 Size=0x8
    void  ( * PoxReportDevicePoweredOn)(struct POHANDLE__ * );// Offset=0x68 Size=0x8
    void  ( * PoxCompleteIdleState)(struct POHANDLE__ * ,unsigned long );// Offset=0x70 Size=0x8
    void  ( * PoxCompleteIdleCondition)(struct POHANDLE__ * ,unsigned long );// Offset=0x78 Size=0x8
    void  ( * PoxCompleteDevicePowerNotRequired)(struct POHANDLE__ * );// Offset=0x80 Size=0x8
    void  ( * PoxSetDeviceIdleTimeout)(struct POHANDLE__ * ,unsigned long long );// Offset=0x88 Size=0x8
    void  ( * IoReportInterruptActive)(struct _IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS * );// Offset=0x90 Size=0x8
    void  ( * IoReportInterruptInactive)(struct _IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS * );// Offset=0x98 Size=0x8
    void  ( * VfCheckNxPoolType)(enum _POOL_TYPE ,void * ,unsigned long );// Offset=0xa0 Size=0x8
    unsigned char  ( * VfIsRuleClassEnabled)(unsigned long );// Offset=0xa8 Size=0x8
    struct _OSVERSIONINFOEXW OsVersionInfo;// Offset=0xb0 Size=0x11c
    class MxLockNoDynam FxDriverGlobalsListLock;// Offset=0x1d0 Size=0x10
    struct _LIST_ENTRY FxDriverGlobalsList;// Offset=0x1e0 Size=0x10
    unsigned long BugCheckDriverInfoIndex;// Offset=0x1f0 Size=0x4
    unsigned long BugCheckDriverInfoCount;// Offset=0x1f4 Size=0x4
    struct _FX_DUMP_DRIVER_INFO_ENTRY * BugCheckDriverInfo;// Offset=0x1f8 Size=0x8
    struct _KBUGCHECK_REASON_CALLBACK_RECORD BugCheckCallbackRecord;// Offset=0x200 Size=0x30
    unsigned char ProcessorGroupSupport;// Offset=0x230 Size=0x1
    unsigned char InternalTracingInitialized;// Offset=0x231 Size=0x1
    struct _FX_DRIVER_TRACKER_CACHE_AWARE DriverTracker;// Offset=0x238 Size=0x18
    struct _FX_DRIVER_GLOBALS * BestDriverForDumpLog;// Offset=0x250 Size=0x8
    unsigned char PassiveLevelInterruptSupport;// Offset=0x258 Size=0x1
    unsigned char IsUserModeFramework;// Offset=0x259 Size=0x1
    unsigned char StaticallyLinked;// Offset=0x25a Size=0x1
    unsigned char MachineSleepStates[3];// Offset=0x25b Size=0x3
    void * VerifierSectionHandle;// Offset=0x260 Size=0x8
    long VerifierSectionHandleRefCount;// Offset=0x268 Size=0x4
    struct _WMI_WDF_NOTIFY_ROUTINES * PerfTraceRoutines;// Offset=0x270 Size=0x8
    struct _WMI_WDF_NOTIFY_ROUTINES DummyPerfTraceRoutines;// Offset=0x278 Size=0x20
    class FxCompanionLibrary * CompanionLibrary;// Offset=0x298 Size=0x8
    unsigned char IfrDisabled;// Offset=0x2a0 Size=0x1
    unsigned char SleepStudyDisabled;// Offset=0x2a1 Size=0x1
    unsigned char WdfDirectedPowerTransitionEnabled;// Offset=0x2a2 Size=0x1
    unsigned char AllowBindToPreReleaseVersion;// Offset=0x2a3 Size=0x1
    void FxLibraryGlobalsType(struct FxLibraryGlobalsType * );
    void FxLibraryGlobalsType(struct FxLibraryGlobalsType & );
    struct FxLibraryGlobalsType & operator=(struct FxLibraryGlobalsType * );
    struct FxLibraryGlobalsType & operator=(struct FxLibraryGlobalsType & );
};
