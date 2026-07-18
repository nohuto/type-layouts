struct _LOADER_FEATURE_CONFIGURATION_INFORMATION2// Size=0x30 (Id=2579)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    void * DelayedFeatureUsageDataBuffer;// Offset=0x8 Size=0x8
    unsigned long long DelayedFeatureUsageDataBufferSize;// Offset=0x10 Size=0x8
    unsigned char ExperimentationClientPresent;// Offset=0x18 Size=0x1
    void * GovernedFeatureInfoTable;// Offset=0x20 Size=0x8
    unsigned long long GovernedFeatureInfoTableSize;// Offset=0x28 Size=0x8
};
