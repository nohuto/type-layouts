enum _WDF_STATE_NOTIFICATION_TYPE
{
    StateNotificationInvalid=0,
    StateNotificationEnterState=1,
    StateNotificationPostProcessState=2,
    StateNotificationLeaveState=4,
    StateNotificationAllStates=7
};

enum _WDF_DEVICE_PNP_STATE
{
    WdfDevStatePnpInvalid=0,
    WdfDevStatePnpObjectCreated=256,
    WdfDevStatePnpCheckForDevicePresence=257,
    WdfDevStatePnpEjectFailed=258,
    WdfDevStatePnpEjectHardware=259,
    WdfDevStatePnpEjectedWaitingForRemove=260,
    WdfDevStatePnpInit=261,
    WdfDevStatePnpInitStarting=262,
    WdfDevStatePnpInitSurpriseRemoved=263,
    WdfDevStatePnpHardwareAvailable=264,
    WdfDevStatePnpEnableInterfaces=265,
    WdfDevStatePnpHardwareAvailablePowerPolicyFailed=266,
    WdfDevStatePnpQueryRemoveAskDriver=267,
    WdfDevStatePnpQueryRemovePending=268,
    WdfDevStatePnpQueryRemoveStaticCheck=269,
    WdfDevStatePnpQueriedRemoving=270,
    WdfDevStatePnpQueryStopAskDriver=271,
    WdfDevStatePnpQueryStopPending=272,
    WdfDevStatePnpQueryStopStaticCheck=273,
    WdfDevStatePnpQueryCanceled=274,
    WdfDevStatePnpRemoved=275,
    WdfDevStatePnpPdoRemoved=276,
    WdfDevStatePnpRemovedPdoWait=277,
    WdfDevStatePnpRemovedPdoSurpriseRemoved=278,
    WdfDevStatePnpRemovingDisableInterfaces=279,
    WdfDevStatePnpRestarting=280,
    WdfDevStatePnpStarted=281,
    WdfDevStatePnpStartedCancelStop=282,
    WdfDevStatePnpStartedCancelRemove=283,
    WdfDevStatePnpStartedRemoving=284,
    WdfDevStatePnpStartingFromStopped=285,
    WdfDevStatePnpStopped=286,
    WdfDevStatePnpStoppedWaitForStartCompletion=287,
    WdfDevStatePnpStartedStopping=288,
    WdfDevStatePnpSurpriseRemove=289,
    WdfDevStatePnpInitQueryRemove=290,
    WdfDevStatePnpInitQueryRemoveCanceled=291,
    WdfDevStatePnpFdoRemoved=292,
    WdfDevStatePnpRemovedWaitForChildren=293,
    WdfDevStatePnpQueriedSurpriseRemove=294,
    WdfDevStatePnpSurpriseRemoveIoStarted=295,
    WdfDevStatePnpFailedPowerDown=296,
    WdfDevStatePnpFailedIoStarting=297,
    WdfDevStatePnpFailedOwnHardware=298,
    WdfDevStatePnpFailed=299,
    WdfDevStatePnpFailedSurpriseRemoved=300,
    WdfDevStatePnpFailedStarted=301,
    WdfDevStatePnpFailedWaitForRemove=302,
    WdfDevStatePnpFailedInit=303,
    WdfDevStatePnpPdoInitFailed=304,
    WdfDevStatePnpRestart=305,
    WdfDevStatePnpRestartReleaseHardware=306,
    WdfDevStatePnpRestartHardwareAvailable=307,
    WdfDevStatePnpPdoRestart=308,
    WdfDevStatePnpFinal=309,
    WdfDevStatePnpRemovedChildrenRemoved=310,
    WdfDevStatePnpQueryRemoveEnsureDeviceAwake=311,
    WdfDevStatePnpQueryStopEnsureDeviceAwake=312,
    WdfDevStatePnpFailedPowerPolicyRemoved=313,
    WdfDevStatePnpNull=314
};

struct _unnamed_380// Size=0x8 (Id=380)
{
    enum _WDF_DEVICE_PNP_STATE CurrentState;// Offset=0x0 Size=0x4
    enum _WDF_DEVICE_PNP_STATE NewState;// Offset=0x4 Size=0x4
};

struct _unnamed_381// Size=0x4 (Id=381)
{
    enum _WDF_DEVICE_PNP_STATE CurrentState;// Offset=0x0 Size=0x4
};

union _unnamed_382// Size=0x8 (Id=382)
{
    struct _unnamed_380 EnterState;// Offset=0x0 Size=0x8
    struct _unnamed_381 PostProcessState;// Offset=0x0 Size=0x4
    struct _unnamed_380 LeaveState;// Offset=0x0 Size=0x8
};

struct _WDF_DEVICE_PNP_NOTIFICATION_DATA// Size=0xc (Id=236)
{
    enum _WDF_STATE_NOTIFICATION_TYPE Type;// Offset=0x0 Size=0x4
    union _unnamed_382 Data;// Offset=0x4 Size=0x8
};
