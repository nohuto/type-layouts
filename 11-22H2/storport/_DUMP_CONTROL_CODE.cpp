enum _DUMP_CONTROL_CODE
{
    DumpControlUnknown=0,
    DumpControlPowerOn=1,
    DumpControlPrepare=2,
    DumpControlPrepareComplete=3,
    DumpControlStart=4,
    DumpControlStartComplete=5,
    DumpControlGetIoSize=6,
    DumpControlCleanup=7,
    DumpControlGetDeviceInternalLog=8,
    DumpControlPrepareEarlyDumpData=9,
    DumpControlRestoreEarlyDumpData=10,
    DumpControlMax=11
};
