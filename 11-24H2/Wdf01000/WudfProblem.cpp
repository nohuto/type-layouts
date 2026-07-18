enum WudfProblem
{
    WudfProblem_None=0,
    WudfProblem_Cancelled=1,
    WudfProblem_SendFailure=2,
    WudfProblem_Timeout=3,
    WudfProblem_InvalidRequest=4,
    WudfProblem_InvalidReply=5,
    WudfProblem_FailedCriticalOperation=6,
    WudfProblem_FailedToExit=7,
    WudfProblem_Disconnect=8,
    WudfProblem_LeakingHandle=9,
    WudfProblem_InvalidInterruptState=10,
    WudfProblem_IsrTimedOut=11,
    WudfProblem_PowerWatchdogTimeout=12,
    WudfProblem_DmaFault=13,
    WudfProblem_Max=14
};
