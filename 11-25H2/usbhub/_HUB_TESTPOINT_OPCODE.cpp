enum _HUB_TESTPOINT_OPCODE
{
    TstPt_DriverReset=0,
    TstPt_DriverResetComplete=1,
    TstPt_DevicePdoStart=2,
    TstPt_SelctiveSuspend=3,
    TstPt_SelctiveSuspendComplete=4,
    TstPt_PnpRemoveDevice=5,
    TstPt_SetupDeviceFailureRetry=6,
    TstPt_ResetTimeoutDpc=7,
    TstPt_OvercurrentResetWorker=8,
    TstPt_AsyncStartTimeout=9
};
