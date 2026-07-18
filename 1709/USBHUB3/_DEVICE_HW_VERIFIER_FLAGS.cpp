enum _DEVICE_HW_VERIFIER_FLAGS
{
    DeviceHwVerifierControlTransferFailure=1,
    DeviceHwVerifierDescriptorValidationFailure=2,
    DeviceHwVerifierSetSelFailure=4,
    DeviceHwVerifierSetIsochDelayFailure=8,
    DeviceHwVerifierInterfaceWakeCapabilityMismatch=16,
    DeviceHwVerifierSerialNumberMismatchOnRenumeration=32,
    DeviceHwVerifierBusRenumeration=64,
    DeviceHwVerifierClientInitiatedResetPipe=256,
    DeviceHwVerifierClientInitiatedResetPort=512,
    DeviceHwVerifierClientInitiatedCyclePort=1024,
    DeviceHwVerifierSuperSpeedDeviceWorkingAtLowerSpeed=2048,
    DeviceHwVerifierSetConfigTooMuchPowerRequired=4096,
    DeviceHwVerifierSetU1EnableFailure=8192,
    DeviceHwVerifierSetU2EnableFailure=16384
};
