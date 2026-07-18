struct _LIST_ENTRY// Size=0x10 (Id=127)
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

struct _KBUGCHECK_REASON_CALLBACK_RECORD// Size=0x30 (Id=702)
{
    struct _LIST_ENTRY Entry;// Offset=0x0 Size=0x10
    void  ( * CallbackRoutine)(enum _KBUGCHECK_CALLBACK_REASON ,struct _KBUGCHECK_REASON_CALLBACK_RECORD * ,void * ,unsigned long );// Offset=0x10 Size=0x8
    unsigned char * Component;// Offset=0x18 Size=0x8
    unsigned long long Checksum;// Offset=0x20 Size=0x8
    enum _KBUGCHECK_CALLBACK_REASON Reason;// Offset=0x28 Size=0x4
    unsigned char State;// Offset=0x2c Size=0x1
};

struct _WDF_DRIVER_GLOBALS// Size=0x38 (Id=1244)
{
    struct WDFDRIVER__ * Driver;// Offset=0x0 Size=0x8
    unsigned long DriverFlags;// Offset=0x8 Size=0x4
    unsigned long DriverTag;// Offset=0xc Size=0x4
    char DriverName[32];// Offset=0x10 Size=0x20
    unsigned char DisplaceDriverUnload;// Offset=0x30 Size=0x1
};

struct _FX_DRIVER_GLOBALS// Size=0x1f0 (Id=817)
{
    unsigned long AddRef(void * ,long ,char * );
    union // Size=0x2fb (Id=0)
    {
        unsigned long Release(void * ,long ,char * );// Offset=0x0 Size=0x30
        unsigned char IsPoolTrackingOn();
        unsigned char IsObjectDebugOn();
        void SetVerifierState(unsigned char );// Offset=0x0 Size=0x3d
        unsigned char IsVersionGreaterThanOrEqualTo(unsigned long ,unsigned long );// Offset=0x0 Size=0x1d
        unsigned char IsCorrectVersionRegistered(struct _UNICODE_STRING * );// Offset=0x0 Size=0x1df
        void RegisterClientVersion(struct _UNICODE_STRING * );// Offset=0x0 Size=0x2fb
        unsigned char IsVerificationEnabled(unsigned long ,unsigned long ,enum FxVerifierDownlevelOption );
        unsigned char IsDownlevelVerificationEnabled();
        void WaitForSignal(class MxEvent * ,char * ,void * ,unsigned long ,unsigned long );// Offset=0x0 Size=0xe1
        unsigned char IsDebuggerAttached();
        unsigned char IsCompanion();
        struct _LIST_ENTRY Linkage;// Offset=0x0 Size=0x10
        long Refcnt;// Offset=0x10 Size=0x4
        class MxEvent DestroyEvent;// Offset=0x18 Size=0x20
        unsigned long long WdfHandleMask;// Offset=0x38 Size=0x8
        long WdfVerifierAllocateFailCount;// Offset=0x40 Size=0x4
        unsigned long Tag;// Offset=0x44 Size=0x4
        class FxDriver * Driver;// Offset=0x48 Size=0x8
        struct FxDriverGlobalsDebugExtension * DebugExtension;// Offset=0x50 Size=0x8
        struct FxLibraryGlobalsType * LibraryGlobals;// Offset=0x58 Size=0x8
        void * WdfLogHeader;// Offset=0x60 Size=0x8
        struct FX_POOL FxPoolFrameworks;// Offset=0x68 Size=0xa0
        unsigned char FxPoolTrackingOn;// Offset=0x108 Size=0x1
        class MxLock ThreadTableLock;// Offset=0x110 Size=0x10
        struct _LIST_ENTRY * ThreadTable;// Offset=0x120 Size=0x8
        struct _WDF_BIND_INFO * WdfBindInfo;// Offset=0x128 Size=0x8
        void * ImageAddress;// Offset=0x130 Size=0x8
        unsigned long ImageSize;// Offset=0x138 Size=0x4
        unsigned char FxVerifierOn;// Offset=0x13c Size=0x1
        unsigned char FxVerifyDownlevel;// Offset=0x13d Size=0x1
        unsigned char FxVerifierDbgBreakOnError;// Offset=0x13e Size=0x1
        unsigned char FxVerifierDbgBreakOnDeviceStateError;// Offset=0x13f Size=0x1
        unsigned char FxVerifierHandle;// Offset=0x140 Size=0x1
        unsigned char FxVerifierIO;// Offset=0x141 Size=0x1
        unsigned char FxVerifierLock;// Offset=0x142 Size=0x1
        unsigned char FxVerifyOn;// Offset=0x143 Size=0x1
        unsigned char FxVerboseOn;// Offset=0x144 Size=0x1
        struct FxObjectDebugLeakDetection * FxVerifyLeakDetection;// Offset=0x148 Size=0x8
        unsigned char FxVerifyTagTrackingEnabled;// Offset=0x150 Size=0x1
        unsigned char FxRequestParentOptimizationOn;// Offset=0x151 Size=0x1
        unsigned char FxDsfOn;// Offset=0x152 Size=0x1
        unsigned char FxForceLogsInMiniDump;// Offset=0x153 Size=0x1
        unsigned char FxTrackDriverForMiniDumpLog;// Offset=0x154 Size=0x1
        unsigned char IsUserModeDriver;// Offset=0x155 Size=0x1
        unsigned long RemoveLockOptionFlags;// Offset=0x158 Size=0x4
        unsigned long BugCheckDriverInfoIndex;// Offset=0x15c Size=0x4
        struct _KBUGCHECK_REASON_CALLBACK_RECORD BugCheckCallbackRecord;// Offset=0x160 Size=0x30
        long WdfLogHeaderRefCount;// Offset=0x190 Size=0x4
        unsigned long FxEnhancedVerifierOptions;// Offset=0x194 Size=0x4
        unsigned long FxVerifierDbgWaitForSignalTimeoutInSec;// Offset=0x198 Size=0x4
        unsigned long DbgWaitForWakeInterruptIsrTimeoutInSec;// Offset=0x19c Size=0x4
        struct _FX_TELEMETRY_CONTEXT * TelemetryContext;// Offset=0x1a0 Size=0x8
        unsigned char IsDriverCompanion;// Offset=0x1a8 Size=0x1
        struct _WDF_DRIVER_GLOBALS Public;// Offset=0x1b0 Size=0x38
        void _FX_DRIVER_GLOBALS(struct _FX_DRIVER_GLOBALS * );
        void _FX_DRIVER_GLOBALS(struct _FX_DRIVER_GLOBALS & );
        void _FX_DRIVER_GLOBALS();
        void ~_FX_DRIVER_GLOBALS();
        struct _FX_DRIVER_GLOBALS & operator=(struct _FX_DRIVER_GLOBALS * );
        struct _FX_DRIVER_GLOBALS & operator=(struct _FX_DRIVER_GLOBALS & );
        void * __vecDelDtor(unsigned int );
    };
};
