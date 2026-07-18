enum _SRBEXDATATYPE
{
    SrbExDataTypeUnknown=0,
    SrbExDataTypeBidirectional=1,
    SrbExDataTypeScsiCdb16=64,
    SrbExDataTypeScsiCdb32=65,
    SrbExDataTypeScsiCdbVar=66,
    SrbExDataTypeNvmeCommand=67,
    SrbExDataTypeNvmeofOperation=68,
    SrbExDataTypeMiniportPassthrough=69,
    SrbExDataTypeWmi=96,
    SrbExDataTypePower=97,
    SrbExDataTypePnP=98,
    SrbExDataTypeIoInfo=128,
    SrbExDataTypePassthroughDirect=160,
    SrbExDataTypeMSReservedStart=-268435456,
    SrbExDataTypeReserved=-1
};
