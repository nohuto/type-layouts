enum _PEP_WORK_TYPE
{
    PepWorkActiveComplete=0,
    PepWorkRequestIdleState=1,
    PepWorkDevicePower=2,
    PepWorkRequestPowerControl=3,
    PepWorkDeviceIdle=4,
    PepWorkCompleteIdleState=5,
    PepWorkCompletePerfState=6,
    PepWorkAcpiNotify=7,
    PepWorkAcpiEvaluateControlMethodComplete=8,
    PepWorkMax=9
};

struct _PEP_WORK_ACTIVE_COMPLETE// Size=0x10 (Id=2035)
{
    struct POHANDLE__ * DeviceHandle;// Offset=0x0 Size=0x8
    unsigned long Component;// Offset=0x8 Size=0x4
};

struct _PEP_WORK_IDLE_STATE// Size=0x10 (Id=2005)
{
    struct POHANDLE__ * DeviceHandle;// Offset=0x0 Size=0x8
    unsigned long Component;// Offset=0x8 Size=0x4
    unsigned long State;// Offset=0xc Size=0x4
};

struct _PEP_WORK_DEVICE_POWER// Size=0x10 (Id=2022)
{
    struct POHANDLE__ * DeviceHandle;// Offset=0x0 Size=0x8
    unsigned char PowerRequired;// Offset=0x8 Size=0x1
};

struct _PEP_WORK_POWER_CONTROL// Size=0x38 (Id=2021)
{
    struct POHANDLE__ * DeviceHandle;// Offset=0x0 Size=0x8
    struct _GUID * PowerControlCode;// Offset=0x8 Size=0x8
    void * RequestContext;// Offset=0x10 Size=0x8
    void * InBuffer;// Offset=0x18 Size=0x8
    unsigned long long InBufferSize;// Offset=0x20 Size=0x8
    void * OutBuffer;// Offset=0x28 Size=0x8
    unsigned long long OutBufferSize;// Offset=0x30 Size=0x8
};

struct _PEP_WORK_DEVICE_IDLE// Size=0x10 (Id=2056)
{
    struct POHANDLE__ * DeviceHandle;// Offset=0x0 Size=0x8
    unsigned char IgnoreIdleTimeout;// Offset=0x8 Size=0x1
};

struct _PEP_WORK_COMPLETE_IDLE_STATE// Size=0x10 (Id=2033)
{
    struct POHANDLE__ * DeviceHandle;// Offset=0x0 Size=0x8
    unsigned long Component;// Offset=0x8 Size=0x4
};

struct _PEP_WORK_COMPLETE_PERF_STATE// Size=0x10 (Id=2000)
{
    struct POHANDLE__ * DeviceHandle;// Offset=0x0 Size=0x8
    unsigned long Component;// Offset=0x8 Size=0x4
    unsigned char Succeeded;// Offset=0xc Size=0x1
};

struct _PEP_WORK_ACPI_NOTIFY// Size=0x10 (Id=1979)
{
    struct POHANDLE__ * DeviceHandle;// Offset=0x0 Size=0x8
    unsigned long NotifyCode;// Offset=0x8 Size=0x4
};

struct _PEP_WORK_ACPI_EVALUATE_CONTROL_METHOD_COMPLETE// Size=0x28 (Id=1970)
{
    struct POHANDLE__ * DeviceHandle;// Offset=0x0 Size=0x8
    unsigned long CompletionFlags;// Offset=0x8 Size=0x4
    long MethodStatus;// Offset=0xc Size=0x4
    void * CompletionContext;// Offset=0x10 Size=0x8
    unsigned long long OutputArgumentSize;// Offset=0x18 Size=0x8
    struct _ACPI_METHOD_ARGUMENT_V1 * OutputArguments;// Offset=0x20 Size=0x8
};

struct _PEP_WORK_INFORMATION// Size=0x40 (Id=1963)
{
    enum _PEP_WORK_TYPE WorkType;// Offset=0x0 Size=0x4
    union // Size=0x40 (Id=0)
    {
        struct _PEP_WORK_ACTIVE_COMPLETE ActiveComplete;// Offset=0x8 Size=0x10
        struct _PEP_WORK_IDLE_STATE IdleState;// Offset=0x8 Size=0x10
        struct _PEP_WORK_DEVICE_POWER DevicePower;// Offset=0x8 Size=0x10
        struct _PEP_WORK_POWER_CONTROL PowerControl;// Offset=0x8 Size=0x38
        struct _PEP_WORK_DEVICE_IDLE DeviceIdle;// Offset=0x8 Size=0x10
        struct _PEP_WORK_COMPLETE_IDLE_STATE CompleteIdleState;// Offset=0x8 Size=0x10
        struct _PEP_WORK_COMPLETE_PERF_STATE CompletePerfState;// Offset=0x8 Size=0x10
        struct _PEP_WORK_ACPI_NOTIFY AcpiNotify;// Offset=0x8 Size=0x10
        struct _PEP_WORK_ACPI_EVALUATE_CONTROL_METHOD_COMPLETE ControlMethodComplete;// Offset=0x8 Size=0x28
    };
};
