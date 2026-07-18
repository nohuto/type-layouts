enum FxCxCallbackProgress
{
    FxCxCallbackProgressInitialized=0,
    FxCxCallbackProgressFailedInPreCalls=0,
    FxCxCallbackProgressClientCalled=1,
    FxCxCallbackProgressFailedInClientCall=1,
    FxCxCallbackProgressClientSucceeded=2,
    FxCxCallbackProgressFailedInPostCalls=2,
    FxCxCallbackProgressMax=3
};
