struct DXGK_DIAG_BLACK_SCREEN_PACKET_AVAILABILITY// Size=0x24 (Id=214)
{
    void InitializeForBlackScreenPacketV1();
    void InitializeForBlackScreenPacketV2();
    bool IsBeforeDisplayResetAvailable;// Offset=0x0 Size=0x1
    bool IsNumAdaptersAvailable;// Offset=0x1 Size=0x1
    bool IsBlackScreenInstanceGUIDAvailable;// Offset=0x2 Size=0x1
    bool IsAdapterLuidAvailable;// Offset=0x3 Size=0x1
    bool IsAdapterNumOfSourcesAvailable;// Offset=0x4 Size=0x1
    bool IsAdapterNumOfTargetsAvailable;// Offset=0x5 Size=0x1
    bool IsAdapterVendorIdAvailable;// Offset=0x6 Size=0x1
    bool IsAdapterBddFallbackDriverAvailable;// Offset=0x7 Size=0x1
    bool IsAdapterDWMCrashBddFallbackAvailable;// Offset=0x8 Size=0x1
    bool IsAdapterRunningTSDDAvailable;// Offset=0x9 Size=0x1
    bool IsAdapterDriverBlackboxInfoValidAvailable;// Offset=0xa Size=0x1
    bool IsAdapterDriverWhiteboxInfoValidAvailable;// Offset=0xb Size=0x1
    bool IsSourceVidPnSourceIdAvailable;// Offset=0xc Size=0x1
    bool IsSourceVidPnTargetIdAvailable;// Offset=0xd Size=0x1
    bool IsSourcePartOfDesktopAvailable;// Offset=0xe Size=0x1
    bool IsSourcePoweredOnAvailable;// Offset=0xf Size=0x1
    bool IsSourceVisibleAvailable;// Offset=0x10 Size=0x1
    bool IsSourcePrimaryContentStateAvailable;// Offset=0x11 Size=0x1
    bool IsSourceHWCursorAvailable;// Offset=0x12 Size=0x1
    bool IsSourceHighColorAvailable;// Offset=0x13 Size=0x1
    bool IsSourceHWDRMAvailable;// Offset=0x14 Size=0x1
    bool IsSourceDWMAvailable;// Offset=0x15 Size=0x1
    bool IsSourceIndirectDisplayAvailable;// Offset=0x16 Size=0x1
    bool IsSourceLDAAvailable;// Offset=0x17 Size=0x1
    bool IsSourceMPOActiveAvailable;// Offset=0x18 Size=0x1
    bool IsSourceIndpendentFlipAvailable;// Offset=0x19 Size=0x1
    bool IsSourceDirectFlipAvailable;// Offset=0x1a Size=0x1
    bool IsSourceDWMOwnershipFailedAsAlreadyOwnerAvailable;// Offset=0x1b Size=0x1
    bool IsSourceEmulatedVidPnSourceOwnerAvailable;// Offset=0x1c Size=0x1
    bool IsOwnerAppNameAvailable;// Offset=0x1d Size=0x1
    bool IsTargetVidPnTargetIdAvailable;// Offset=0x1e Size=0x1
    bool IsTargetMonitorConnectedAvailable;// Offset=0x1f Size=0x1
    bool IsTargetPresentInClientVidPnAvailable;// Offset=0x20 Size=0x1
    bool IsTargetMonitorSimulatedAvailable;// Offset=0x21 Size=0x1
    bool IsTargetMonitorInternalAvailable;// Offset=0x22 Size=0x1
    bool IsTargetSampledGammaAvailable;// Offset=0x23 Size=0x1
    void DXGK_DIAG_BLACK_SCREEN_PACKET_AVAILABILITY();
};
