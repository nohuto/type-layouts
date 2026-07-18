struct _ROOTHUB_PORT_ERROR// Size=0x14 (Id=917)
{
    unsigned long RootHubPortInComplianceModeCount;// Offset=0x0 Size=0x4
    unsigned long RootHubPortLinkInactiveCount;// Offset=0x4 Size=0x4
    unsigned char PortErrorReported;// Offset=0x8 Size=0x1
    unsigned long PortErrorToBeTreatedAsChange;// Offset=0xc Size=0x4
    unsigned char PortErrorRecoveryAttempted;// Offset=0x10 Size=0x1
};
