struct _USBXHCI_TRIAGE_INFO// Size=0x90 (Id=780)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned long DeviceDataSize;// Offset=0x4 Size=0x4
    unsigned long DeviceData_ControllerDataOffset;// Offset=0x8 Size=0x4
    unsigned long ControllerDataSize;// Offset=0xc Size=0x4
    unsigned long ControllerData_WdfDeviceOffset;// Offset=0x10 Size=0x4
    unsigned long ControllerData_UcxControllerOffset;// Offset=0x14 Size=0x4
    unsigned long ControllerData_RecorderLogOffset;// Offset=0x18 Size=0x4
    unsigned long ControllerData_IoControlOffset;// Offset=0x1c Size=0x4
    unsigned long IoControlDataSize;// Offset=0x20 Size=0x4
    unsigned long ControllerData_RegisterOffset;// Offset=0x24 Size=0x4
    unsigned long RegisterDataSize;// Offset=0x28 Size=0x4
    unsigned long ControllerData_CommonBufferOffset;// Offset=0x2c Size=0x4
    unsigned long CommonBufferDataSize;// Offset=0x30 Size=0x4
    unsigned long ControllerData_InterrupterOffset;// Offset=0x34 Size=0x4
    unsigned long PrimaryInterrupterSize;// Offset=0x38 Size=0x4
    unsigned long ControllerData_DeviceSlotOffset;// Offset=0x3c Size=0x4
    unsigned long DeviceSlotDataSize;// Offset=0x40 Size=0x4
    unsigned long ControllerData_CommandOffset;// Offset=0x44 Size=0x4
    unsigned long CommandDataSize;// Offset=0x48 Size=0x4
    unsigned long ControllerData_RootHubOffset;// Offset=0x4c Size=0x4
    unsigned long RootHubDataSize;// Offset=0x50 Size=0x4
    unsigned long ControllerData_WdfTimerOffset;// Offset=0x54 Size=0x4
    unsigned long IfrLogHeaderSize;// Offset=0x58 Size=0x4
    unsigned long IfrLogSizeOffset;// Offset=0x5c Size=0x4
    unsigned long IfrSizeOfLogSizeField;// Offset=0x60 Size=0x4
    unsigned long IfrDriverContextOffset;// Offset=0x64 Size=0x4
    unsigned long IfrDriverContextSize;// Offset=0x68 Size=0x4
    void * WppGlobalControlPtr;// Offset=0x70 Size=0x8
    unsigned long WppGlobalControlSize;// Offset=0x78 Size=0x4
    void * WdfTriageInfoPtr;// Offset=0x80 Size=0x8
    void * GlobalDriverObjectPtr;// Offset=0x88 Size=0x8
};
