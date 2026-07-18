enum FxDeviceInfoFlags
{
    DeviceInfoLineBasedLevelTriggeredInterrupt=1,
    DeviceInfoLineBasedEdgeTriggeredInterrupt=2,
    DeviceInfoMsiXOrSingleMsi22Interrupt=4,
    DeviceInfoMsi22MultiMessageInterrupt=8,
    DeviceInfoPassiveLevelInterrupt=16,
    DeviceInfoDmaBusMaster=32,
    DeviceInfoDmaSystem=64,
    DeviceInfoDmaSystemDuplex=128,
    DeviceInfoHasStaticChildren=256,
    DeviceInfoHasDynamicChildren=512,
    DeviceInfoIsUsingDriverWppRecorder=1024
};
