struct _USBHUB_TRIAGE_INFO// Size=0x44 (Id=286)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned long HubPortDataSize;// Offset=0x4 Size=0x4
    unsigned long HubPortDataSigOffset;// Offset=0x8 Size=0x4
    unsigned long PortDataOffset;// Offset=0xc Size=0x4
    unsigned long NumberOfPortsOffset;// Offset=0x10 Size=0x4
    unsigned long PortChangeContextSize;// Offset=0x14 Size=0x4
    unsigned long PortChangeContextSigOffset;// Offset=0x18 Size=0x4
    unsigned long PortChangeListOffset;// Offset=0x1c Size=0x4
    unsigned long ChangeLinkOffset;// Offset=0x20 Size=0x4
    unsigned long HubWorkItemSize;// Offset=0x24 Size=0x4
    unsigned long HubWorkItemSigOffset;// Offset=0x28 Size=0x4
    unsigned long WorkItemListHeadOffset;// Offset=0x2c Size=0x4
    unsigned long WiLinkOffset;// Offset=0x30 Size=0x4
    unsigned long HubExceptionRecordSize;// Offset=0x34 Size=0x4
    unsigned long HubExceptionRecordSigOffset;// Offset=0x38 Size=0x4
    unsigned long ExceptionListOffset;// Offset=0x3c Size=0x4
    unsigned long ExrLinkOffset;// Offset=0x40 Size=0x4
};
