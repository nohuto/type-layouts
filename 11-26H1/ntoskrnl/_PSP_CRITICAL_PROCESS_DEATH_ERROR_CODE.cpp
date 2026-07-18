enum _PSP_CRITICAL_PROCESS_DEATH_ERROR_CODE
{
    PspCriticalProcessDeathErrorNone=0,
    PspCriticalProcessDeathErrorDataMismatch=1,
    PspCriticalProcessDeathErrorInvalidTid=2,
    PspCriticalProcessDeathErrorNotCritical=3,
    PspCriticalProcessDeathErrorNoTib=4,
    PspCriticalProcessDeathErrorApcNotInserted=5,
    PspCriticalProcessDeathErrorApcRemoved=6,
    PspCriticalProcessDeathErrorWoWProcess=7,
    PspCriticalProcessDeathErrorCount=8
};
