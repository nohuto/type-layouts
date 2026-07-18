enum FxObjectState
{
    FxObjectStateInvalid=0,
    FxObjectStateCreated=1,
    FxObjectStateDisposed=2,
    FxObjectStateDisposingEarly=3,
    FxObjectStateDisposingDisposeChildren=4,
    FxObjectStateDeferedDisposing=5,
    FxObjectStateDeferedDeleting=6,
    FxObjectStateWaitingForEarlyDispose=7,
    FxObjectStateWaitingForParentDeleteAndDisposed=8,
    FxObjectStateDeletedDisposing=9,
    FxObjectStateDeletedAndDisposed=10,
    FxObjectStateDeferedDestroy=11,
    FxObjectStateDestroyed=12,
    FxObjectStateMaximum=13
};
