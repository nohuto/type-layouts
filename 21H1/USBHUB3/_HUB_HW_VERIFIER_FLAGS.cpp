enum _HUB_HW_VERIFIER_FLAGS
{
    HubHwVerifierTooManyResets=1,
    HubHwVerifierControlTransferFailure=2,
    HubHwVerifierInterruptTransferFailure=4,
    HubHwVerifierNoSelectiveSuspendSupport=8,
    HubHwVerifierInvalidPortStatus=16,
    HubHwVerifierPortLinkStateSSInactive=32,
    HubHwVerifierPortResetTimeout=64,
    HubHwVerifierControllerOperationFailure=128,
    HubHwVerifierPortLinkStateCompliance=256,
    HubHwVerifierPortOverCurrent=512,
    HubHwVerifierPortDeviceDisconnected=1024,
    HubHwVerifierPortLinkStateErrorResetWatchdog=2048,
    HubHwVerifierDeviceFailedEnumeration=4096,
    HubHwVerifierDeviceEnumerationRetry=8192
};
