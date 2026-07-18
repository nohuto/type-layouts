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

struct _WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_9// Size=0xc (Id=2123)
{
    union // Size=0x4 (Id=0)
    {
        enum _WDF_STATE_NOTIFICATION_TYPE Type;// Offset=0x0 Size=0x4
        union <unnamed-type-Data>// Size=0x8 (Id=19850)
        {
            struct <unnamed-type-EnterState>// Size=0x8 (Id=19851)
            {
                enum _WDF_DEVICE_PNP_STATE CurrentState;// Offset=0x0 Size=0x4
                enum _WDF_DEVICE_PNP_STATE NewState;// Offset=0x4 Size=0x4
            };
            struct _WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_9::<unnamed-type-Data>::<unnamed-type-EnterState> EnterState;// Offset=0x0 Size=0x8
            struct <unnamed-type-PostProcessState>// Size=0x4 (Id=19855)
            {
                enum _WDF_DEVICE_PNP_STATE CurrentState;// Offset=0x0 Size=0x4
            };
            struct _WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_9::<unnamed-type-Data>::<unnamed-type-PostProcessState> PostProcessState;// Offset=0x0 Size=0x4
            struct <unnamed-type-LeaveState>// Size=0x8 (Id=19858)
            {
                enum _WDF_DEVICE_PNP_STATE CurrentState;// Offset=0x0 Size=0x4
                enum _WDF_DEVICE_PNP_STATE NewState;// Offset=0x4 Size=0x4
            };
            struct _WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_9::<unnamed-type-Data>::<unnamed-type-LeaveState> LeaveState;// Offset=0x0 Size=0x8
        };
    };
    union _WDF_DEVICE_PNP_NOTIFICATION_DATA_V1_9::<unnamed-type-Data> Data;// Offset=0x4 Size=0x8
};
