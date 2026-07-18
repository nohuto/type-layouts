struct _CDB6GENERIC// Size=0x6 (Id=380)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Immediate:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char CommandUniqueBits:4;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x4
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char CommandUniqueBytes[3];// Offset=0x2 Size=0x3
    struct // Size=0x1 (Id=0)
    {
        unsigned char Link:1;// Offset=0x5 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Flag:1;// Offset=0x5 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved:4;// Offset=0x5 Size=0x1 BitOffset=0x2 BitSize=0x4
        unsigned char VendorUnique:2;// Offset=0x5 Size=0x1 BitOffset=0x6 BitSize=0x2
    };
};

struct _CDB6READWRITE// Size=0x6 (Id=594)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char LogicalBlockMsb1:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char LogicalBlockMsb0;// Offset=0x2 Size=0x1
    unsigned char LogicalBlockLsb;// Offset=0x3 Size=0x1
    unsigned char TransferBlocks;// Offset=0x4 Size=0x1
    unsigned char Control;// Offset=0x5 Size=0x1
};

struct _CDB6INQUIRY// Size=0x6 (Id=424)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char PageCode;// Offset=0x2 Size=0x1
    unsigned char IReserved;// Offset=0x3 Size=0x1
    unsigned char AllocationLength;// Offset=0x4 Size=0x1
    unsigned char Control;// Offset=0x5 Size=0x1
};

struct _CDB6INQUIRY3// Size=0x6 (Id=447)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char EnableVitalProductData:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char CommandSupportData:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved1:6;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x6
    };
    unsigned char PageCode;// Offset=0x2 Size=0x1
    unsigned char Reserved2;// Offset=0x3 Size=0x1
    unsigned char AllocationLength;// Offset=0x4 Size=0x1
    unsigned char Control;// Offset=0x5 Size=0x1
};

struct _CDB6VERIFY// Size=0x6 (Id=534)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Fixed:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char ByteCompare:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Immediate:1;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char Reserved:2;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x2
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char VerificationLength[3];// Offset=0x2 Size=0x3
    unsigned char Control;// Offset=0x5 Size=0x1
};

struct _RECEIVE_DIAGNOSTIC// Size=0x6 (Id=575)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char PageCodeValid:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved:7;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x7
    };
    unsigned char PageCode;// Offset=0x2 Size=0x1
    unsigned char AllocationLength[2];// Offset=0x3 Size=0x2
    unsigned char Control;// Offset=0x5 Size=0x1
};

struct _SEND_DIAGNOSTIC// Size=0x6 (Id=518)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char UnitOffline:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char DeviceOffline:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char SelfTest:1;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char Reserved1:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char PageFormat:1;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char SelfTestCode:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved2;// Offset=0x2 Size=0x1
    unsigned char ParameterListLength[2];// Offset=0x3 Size=0x2
    unsigned char Control;// Offset=0x5 Size=0x1
};

struct _CDB6FORMAT// Size=0x6 (Id=409)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char FormatControl:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char FReserved1;// Offset=0x2 Size=0x1
    unsigned char InterleaveMsb;// Offset=0x3 Size=0x1
    unsigned char InterleaveLsb;// Offset=0x4 Size=0x1
    unsigned char FReserved2;// Offset=0x5 Size=0x1
};

struct _CDB10// Size=0xa (Id=542)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char RelativeAddress:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved1:2;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x2
        unsigned char ForceUnitAccess:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char DisablePageOut:1;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char LogicalBlockByte0;// Offset=0x2 Size=0x1
    unsigned char LogicalBlockByte1;// Offset=0x3 Size=0x1
    unsigned char LogicalBlockByte2;// Offset=0x4 Size=0x1
    unsigned char LogicalBlockByte3;// Offset=0x5 Size=0x1
    unsigned char Reserved2;// Offset=0x6 Size=0x1
    unsigned char TransferBlocksMsb;// Offset=0x7 Size=0x1
    unsigned char TransferBlocksLsb;// Offset=0x8 Size=0x1
    unsigned char Control;// Offset=0x9 Size=0x1
};

struct _CDB12// Size=0xc (Id=454)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char RelativeAddress:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved1:2;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x2
        unsigned char ForceUnitAccess:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char DisablePageOut:1;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char LogicalBlock[4];// Offset=0x2 Size=0x4
    unsigned char TransferLength[4];// Offset=0x6 Size=0x4
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Control;// Offset=0xb Size=0x1
};

struct _CDB16// Size=0x10 (Id=549)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:3;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x3
        unsigned char ForceUnitAccess:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char DisablePageOut:1;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char Protection:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char LogicalBlock[8];// Offset=0x2 Size=0x8
    unsigned char TransferLength[4];// Offset=0xa Size=0x4
    unsigned char Reserved2;// Offset=0xe Size=0x1
    unsigned char Control;// Offset=0xf Size=0x1
};

struct _READ_BUFFER_10// Size=0xa (Id=430)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Mode:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char ModeSpecific:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char BufferId;// Offset=0x2 Size=0x1
    unsigned char BufferOffset[3];// Offset=0x3 Size=0x3
    unsigned char AllocationLength[3];// Offset=0x6 Size=0x3
    unsigned char Control;// Offset=0x9 Size=0x1
};

struct _READ_BUFFER_16// Size=0x10 (Id=558)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Mode:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char ModeSpecific:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char BufferOffset[8];// Offset=0x2 Size=0x8
    unsigned char AllocationLength[4];// Offset=0xa Size=0x4
    unsigned char BufferId;// Offset=0xe Size=0x1
    unsigned char Control;// Offset=0xf Size=0x1
};

struct _SECURITY_PROTOCOL_IN// Size=0xc (Id=512)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    unsigned char SecurityProtocol;// Offset=0x1 Size=0x1
    unsigned char SecurityProtocolSpecific[2];// Offset=0x2 Size=0x2
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:7;// Offset=0x4 Size=0x1 BitOffset=0x0 BitSize=0x7
        unsigned char INC_512:1;// Offset=0x4 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    unsigned char Reserved2;// Offset=0x5 Size=0x1
    unsigned char AllocationLength[4];// Offset=0x6 Size=0x4
    unsigned char Reserved3;// Offset=0xa Size=0x1
    unsigned char Control;// Offset=0xb Size=0x1
};

struct _SECURITY_PROTOCOL_OUT// Size=0xc (Id=352)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    unsigned char SecurityProtocol;// Offset=0x1 Size=0x1
    unsigned char SecurityProtocolSpecific[2];// Offset=0x2 Size=0x2
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:7;// Offset=0x4 Size=0x1 BitOffset=0x0 BitSize=0x7
        unsigned char INC_512:1;// Offset=0x4 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    unsigned char Reserved2;// Offset=0x5 Size=0x1
    unsigned char AllocationLength[4];// Offset=0x6 Size=0x4
    unsigned char Reserved3;// Offset=0xa Size=0x1
    unsigned char Control;// Offset=0xb Size=0x1
};

struct _UNMAP// Size=0xa (Id=429)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Anchor:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved1:7;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x7
    };
    unsigned char Reserved2[4];// Offset=0x2 Size=0x4
    struct // Size=0x1 (Id=0)
    {
        unsigned char GroupNumber:5;// Offset=0x6 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Reserved3:3;// Offset=0x6 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char AllocationLength[2];// Offset=0x7 Size=0x2
    unsigned char Control;// Offset=0x9 Size=0x1
};

struct _SANITIZE// Size=0xa (Id=563)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char ServiceAction:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char AUSE:1;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char Reserved1:1;// Offset=0x1 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char Immediate:1;// Offset=0x1 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    unsigned char Reserved2[5];// Offset=0x2 Size=0x5
    unsigned char ParameterListLength[2];// Offset=0x7 Size=0x2
    unsigned char Control;// Offset=0x9 Size=0x1
};

struct _PAUSE_RESUME// Size=0xa (Id=511)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved2[6];// Offset=0x2 Size=0x6
    unsigned char Action;// Offset=0x8 Size=0x1
    unsigned char Control;// Offset=0x9 Size=0x1
};

struct _READ_TOC// Size=0xa (Id=456)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x2 (Id=0)
    {
        unsigned char Reserved0:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Msf:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved1:3;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x3
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
        unsigned char Format2:4;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x4
        unsigned char Reserved2:4;// Offset=0x2 Size=0x1 BitOffset=0x4 BitSize=0x4
    };
    unsigned char Reserved3[3];// Offset=0x3 Size=0x3
    unsigned char StartingTrack;// Offset=0x6 Size=0x1
    unsigned char AllocationLength[2];// Offset=0x7 Size=0x2
    struct // Size=0x1 (Id=0)
    {
        unsigned char Control:6;// Offset=0x9 Size=0x1 BitOffset=0x0 BitSize=0x6
        unsigned char Format:2;// Offset=0x9 Size=0x1 BitOffset=0x6 BitSize=0x2
    };
};

struct _READ_DISK_INFORMATION// Size=0xa (Id=350)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Lun:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved2[5];// Offset=0x2 Size=0x5
    unsigned char AllocationLength[2];// Offset=0x7 Size=0x2
    unsigned char Control;// Offset=0x9 Size=0x1
};

struct _READ_TRACK_INFORMATION// Size=0xa (Id=360)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Track:2;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char Reserved4:3;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x3
        unsigned char Lun:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char BlockAddress[4];// Offset=0x2 Size=0x4
    unsigned char Reserved3;// Offset=0x6 Size=0x1
    unsigned char AllocationLength[2];// Offset=0x7 Size=0x2
    unsigned char Control;// Offset=0x9 Size=0x1
};

struct _RESERVE_TRACK_RZONE// Size=0xa (Id=566)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    unsigned char Reserved1[4];// Offset=0x1 Size=0x4
    unsigned char ReservationSize[4];// Offset=0x5 Size=0x4
    unsigned char Control;// Offset=0x9 Size=0x1
};

struct _SEND_OPC_INFORMATION// Size=0xa (Id=342)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x2 (Id=0)
    {
        unsigned char DoOpc:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved1:7;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x7
        unsigned char Exclude0:1;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Exclude1:1;// Offset=0x2 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved2:6;// Offset=0x2 Size=0x1 BitOffset=0x2 BitSize=0x6
    };
    unsigned char Reserved3[4];// Offset=0x3 Size=0x4
    unsigned char ParameterListLength[2];// Offset=0x7 Size=0x2
    unsigned char Reserved4;// Offset=0x9 Size=0x1
};

struct _REPAIR_TRACK// Size=0xa (Id=388)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Immediate:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved1:7;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x7
    };
    unsigned char Reserved2[2];// Offset=0x2 Size=0x2
    unsigned char TrackNumber[2];// Offset=0x4 Size=0x2
    unsigned char Reserved3[3];// Offset=0x6 Size=0x3
    unsigned char Control;// Offset=0x9 Size=0x1
};

struct _CLOSE_TRACK// Size=0xa (Id=506)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x2 (Id=0)
    {
        unsigned char Immediate:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved1:7;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x7
        unsigned char Track:1;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Session:1;// Offset=0x2 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved2:6;// Offset=0x2 Size=0x1 BitOffset=0x2 BitSize=0x6
    };
    unsigned char Reserved3;// Offset=0x3 Size=0x1
    unsigned char TrackNumber[2];// Offset=0x4 Size=0x2
    unsigned char Reserved4[3];// Offset=0x6 Size=0x3
    unsigned char Control;// Offset=0x9 Size=0x1
};

struct _READ_BUFFER_CAPACITY// Size=0xa (Id=478)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char BlockInfo:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved1:7;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x7
    };
    unsigned char Reserved2[5];// Offset=0x2 Size=0x5
    unsigned char AllocationLength[2];// Offset=0x7 Size=0x2
    unsigned char Control;// Offset=0x9 Size=0x1
};

struct _SEND_CUE_SHEET// Size=0xa (Id=415)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    unsigned char Reserved[5];// Offset=0x1 Size=0x5
    unsigned char CueSheetSize[3];// Offset=0x6 Size=0x3
    unsigned char Control;// Offset=0x9 Size=0x1
};

struct _READ_HEADER// Size=0xa (Id=528)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Msf:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved2:3;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x3
        unsigned char Lun:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char LogicalBlockAddress[4];// Offset=0x2 Size=0x4
    unsigned char Reserved3;// Offset=0x6 Size=0x1
    unsigned char AllocationLength[2];// Offset=0x7 Size=0x2
    unsigned char Control;// Offset=0x9 Size=0x1
};

struct _PLAY_AUDIO// Size=0xa (Id=559)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char StartingBlockAddress[4];// Offset=0x2 Size=0x4
    unsigned char Reserved2;// Offset=0x6 Size=0x1
    unsigned char PlayLength[2];// Offset=0x7 Size=0x2
    unsigned char Control;// Offset=0x9 Size=0x1
};

struct _PLAY_AUDIO_MSF// Size=0xa (Id=544)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved2;// Offset=0x2 Size=0x1
    unsigned char StartingM;// Offset=0x3 Size=0x1
    unsigned char StartingS;// Offset=0x4 Size=0x1
    unsigned char StartingF;// Offset=0x5 Size=0x1
    unsigned char EndingM;// Offset=0x6 Size=0x1
    unsigned char EndingS;// Offset=0x7 Size=0x1
    unsigned char EndingF;// Offset=0x8 Size=0x1
    unsigned char Control;// Offset=0x9 Size=0x1
};

struct _BLANK_MEDIA// Size=0xc (Id=441)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char BlankType:3;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x3
        unsigned char Reserved1:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char Immediate:1;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char Reserved2:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char AddressOrTrack[4];// Offset=0x2 Size=0x4
    unsigned char Reserved3[5];// Offset=0x6 Size=0x5
    unsigned char Control;// Offset=0xb Size=0x1
};

struct _LBA// Size=0x8 (Id=622)
{
    unsigned char StartingBlockAddress[4];// Offset=0x0 Size=0x4
    unsigned char PlayLength[4];// Offset=0x4 Size=0x4
};

struct _MSF// Size=0x8 (Id=630)
{
    unsigned char Reserved1;// Offset=0x0 Size=0x1
    unsigned char StartingM;// Offset=0x1 Size=0x1
    unsigned char StartingS;// Offset=0x2 Size=0x1
    unsigned char StartingF;// Offset=0x3 Size=0x1
    unsigned char EndingM;// Offset=0x4 Size=0x1
    unsigned char EndingS;// Offset=0x5 Size=0x1
    unsigned char EndingF;// Offset=0x6 Size=0x1
    unsigned char Reserved2;// Offset=0x7 Size=0x1
};

struct _PLAY_CD// Size=0xc (Id=485)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char CMSF:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char ExpectedSectorType:3;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x3
        unsigned char Lun:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    union // Size=0x8 (Id=0)
    {
        struct _LBA LBA;// Offset=0x2 Size=0x8
        struct _MSF MSF;// Offset=0x2 Size=0x8
    };
    struct // Size=0x1 (Id=0)
    {
        unsigned char Audio:1;// Offset=0xa Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Composite:1;// Offset=0xa Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Port1:1;// Offset=0xa Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char Port2:1;// Offset=0xa Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char Reserved2:3;// Offset=0xa Size=0x1 BitOffset=0x4 BitSize=0x3
        unsigned char Speed:1;// Offset=0xa Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    unsigned char Control;// Offset=0xb Size=0x1
};

struct _SCAN_CD// Size=0xc (Id=595)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char RelativeAddress:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved1:3;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x3
        unsigned char Direct:1;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char Lun:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char StartingAddress[4];// Offset=0x2 Size=0x4
    unsigned char Reserved2[3];// Offset=0x6 Size=0x3
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved3:6;// Offset=0x9 Size=0x1 BitOffset=0x0 BitSize=0x6
        unsigned char Type:2;// Offset=0x9 Size=0x1 BitOffset=0x6 BitSize=0x2
    };
    unsigned char Reserved4;// Offset=0xa Size=0x1
    unsigned char Control;// Offset=0xb Size=0x1
};

struct _STOP_PLAY_SCAN// Size=0xa (Id=565)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Lun:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved2[7];// Offset=0x2 Size=0x7
    unsigned char Control;// Offset=0x9 Size=0x1
};

struct _SUBCHANNEL// Size=0xa (Id=451)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x2 (Id=0)
    {
        unsigned char Reserved0:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Msf:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved1:3;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x3
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
        unsigned char Reserved2:6;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x6
        unsigned char SubQ:1;// Offset=0x2 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char Reserved3:1;// Offset=0x2 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    unsigned char Format;// Offset=0x3 Size=0x1
    unsigned char Reserved4[2];// Offset=0x4 Size=0x2
    unsigned char TrackNumber;// Offset=0x6 Size=0x1
    unsigned char AllocationLength[2];// Offset=0x7 Size=0x2
    unsigned char Control;// Offset=0x9 Size=0x1
};

struct _READ_CD// Size=0xc (Id=568)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char RelativeAddress:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved0:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char ExpectedSectorType:3;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x3
        unsigned char Lun:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char StartingLBA[4];// Offset=0x2 Size=0x4
    unsigned char TransferBlocks[3];// Offset=0x6 Size=0x3
    struct // Size=0x2 (Id=0)
    {
        unsigned char Reserved2:1;// Offset=0x9 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char ErrorFlags:2;// Offset=0x9 Size=0x1 BitOffset=0x1 BitSize=0x2
        unsigned char IncludeEDC:1;// Offset=0x9 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char IncludeUserData:1;// Offset=0x9 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char HeaderCode:2;// Offset=0x9 Size=0x1 BitOffset=0x5 BitSize=0x2
        unsigned char IncludeSyncData:1;// Offset=0x9 Size=0x1 BitOffset=0x7 BitSize=0x1
        unsigned char SubChannelSelection:3;// Offset=0xa Size=0x1 BitOffset=0x0 BitSize=0x3
        unsigned char Reserved3:5;// Offset=0xa Size=0x1 BitOffset=0x3 BitSize=0x5
    };
    unsigned char Control;// Offset=0xb Size=0x1
};

struct _READ_CD_MSF// Size=0xc (Id=339)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char RelativeAddress:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved1:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char ExpectedSectorType:3;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x3
        unsigned char Lun:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved2;// Offset=0x2 Size=0x1
    unsigned char StartingM;// Offset=0x3 Size=0x1
    unsigned char StartingS;// Offset=0x4 Size=0x1
    unsigned char StartingF;// Offset=0x5 Size=0x1
    unsigned char EndingM;// Offset=0x6 Size=0x1
    unsigned char EndingS;// Offset=0x7 Size=0x1
    unsigned char EndingF;// Offset=0x8 Size=0x1
    struct // Size=0x2 (Id=0)
    {
        unsigned char Reserved4:1;// Offset=0x9 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char ErrorFlags:2;// Offset=0x9 Size=0x1 BitOffset=0x1 BitSize=0x2
        unsigned char IncludeEDC:1;// Offset=0x9 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char IncludeUserData:1;// Offset=0x9 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char HeaderCode:2;// Offset=0x9 Size=0x1 BitOffset=0x5 BitSize=0x2
        unsigned char IncludeSyncData:1;// Offset=0x9 Size=0x1 BitOffset=0x7 BitSize=0x1
        unsigned char SubChannelSelection:3;// Offset=0xa Size=0x1 BitOffset=0x0 BitSize=0x3
        unsigned char Reserved5:5;// Offset=0xa Size=0x1 BitOffset=0x3 BitSize=0x5
    };
    unsigned char Control;// Offset=0xb Size=0x1
};

struct _PLXTR_READ_CDDA// Size=0xc (Id=508)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved0:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char LogicalBlockByte0;// Offset=0x2 Size=0x1
    unsigned char LogicalBlockByte1;// Offset=0x3 Size=0x1
    unsigned char LogicalBlockByte2;// Offset=0x4 Size=0x1
    unsigned char LogicalBlockByte3;// Offset=0x5 Size=0x1
    unsigned char TransferBlockByte0;// Offset=0x6 Size=0x1
    unsigned char TransferBlockByte1;// Offset=0x7 Size=0x1
    unsigned char TransferBlockByte2;// Offset=0x8 Size=0x1
    unsigned char TransferBlockByte3;// Offset=0x9 Size=0x1
    unsigned char SubCode;// Offset=0xa Size=0x1
    unsigned char Control;// Offset=0xb Size=0x1
};

struct _NEC_READ_CDDA// Size=0xa (Id=477)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    unsigned char Reserved0;// Offset=0x1 Size=0x1
    unsigned char LogicalBlockByte0;// Offset=0x2 Size=0x1
    unsigned char LogicalBlockByte1;// Offset=0x3 Size=0x1
    unsigned char LogicalBlockByte2;// Offset=0x4 Size=0x1
    unsigned char LogicalBlockByte3;// Offset=0x5 Size=0x1
    unsigned char Reserved1;// Offset=0x6 Size=0x1
    unsigned char TransferBlockByte0;// Offset=0x7 Size=0x1
    unsigned char TransferBlockByte1;// Offset=0x8 Size=0x1
    unsigned char Control;// Offset=0x9 Size=0x1
};

struct _MODE_SENSE// Size=0x6 (Id=426)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x2 (Id=0)
    {
        unsigned char Reserved1:3;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x3
        unsigned char Dbd:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char Reserved2:4;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x4
        unsigned char PageCode:6;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x6
        unsigned char Pc:2;// Offset=0x2 Size=0x1 BitOffset=0x6 BitSize=0x2
    };
    unsigned char SubPageCode;// Offset=0x3 Size=0x1
    unsigned char AllocationLength;// Offset=0x4 Size=0x1
    unsigned char Control;// Offset=0x5 Size=0x1
};

struct _MODE_SENSE10// Size=0xa (Id=346)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x2 (Id=0)
    {
        unsigned char Reserved1:3;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x3
        unsigned char Dbd:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char LongLBAAccepted:1;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char Reserved2:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
        unsigned char PageCode:6;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x6
        unsigned char Pc:2;// Offset=0x2 Size=0x1 BitOffset=0x6 BitSize=0x2
    };
    unsigned char SubPageCode;// Offset=0x3 Size=0x1
    unsigned char Reserved3[3];// Offset=0x4 Size=0x3
    unsigned char AllocationLength[2];// Offset=0x7 Size=0x2
    unsigned char Control;// Offset=0x9 Size=0x1
};

struct _MODE_SELECT// Size=0x6 (Id=340)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char SPBit:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved1:3;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x3
        unsigned char PFBit:1;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved2[2];// Offset=0x2 Size=0x2
    unsigned char ParameterListLength;// Offset=0x4 Size=0x1
    unsigned char Control;// Offset=0x5 Size=0x1
};

struct _MODE_SELECT10// Size=0xa (Id=556)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char SPBit:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved1:3;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x3
        unsigned char PFBit:1;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved2[5];// Offset=0x2 Size=0x5
    unsigned char ParameterListLength[2];// Offset=0x7 Size=0x2
    unsigned char Control;// Offset=0x9 Size=0x1
};

struct _LOCATE// Size=0xa (Id=337)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Immediate:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char CPBit:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char BTBit:1;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char Reserved1:2;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x2
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved3;// Offset=0x2 Size=0x1
    unsigned char LogicalBlockAddress[4];// Offset=0x3 Size=0x4
    unsigned char Reserved4;// Offset=0x7 Size=0x1
    unsigned char Partition;// Offset=0x8 Size=0x1
    unsigned char Control;// Offset=0x9 Size=0x1
};

struct _LOGSENSE// Size=0xa (Id=464)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x2 (Id=0)
    {
        unsigned char SPBit:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char PPCBit:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved1:3;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x3
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
        unsigned char PageCode:6;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x6
        unsigned char PCBit:2;// Offset=0x2 Size=0x1 BitOffset=0x6 BitSize=0x2
    };
    union // Size=0x1 (Id=0)
    {
        unsigned char SubPageCode;// Offset=0x3 Size=0x1
        unsigned char Reserved2;// Offset=0x3 Size=0x1
    };
    unsigned char Reserved3;// Offset=0x4 Size=0x1
    unsigned char ParameterPointer[2];// Offset=0x5 Size=0x2
    unsigned char AllocationLength[2];// Offset=0x7 Size=0x2
    unsigned char Control;// Offset=0x9 Size=0x1
};

struct _LOGSELECT// Size=0xa (Id=545)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x2 (Id=0)
    {
        unsigned char SPBit:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char PCRBit:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved1:3;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x3
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
        unsigned char Reserved:6;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x6
        unsigned char PCBit:2;// Offset=0x2 Size=0x1 BitOffset=0x6 BitSize=0x2
    };
    unsigned char Reserved2[4];// Offset=0x3 Size=0x4
    unsigned char ParameterListLength[2];// Offset=0x7 Size=0x2
    unsigned char Control;// Offset=0x9 Size=0x1
};

struct _PRINT// Size=0x6 (Id=547)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char TransferLength[3];// Offset=0x2 Size=0x3
    unsigned char Control;// Offset=0x5 Size=0x1
};

struct _SEEK// Size=0xa (Id=361)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char LogicalBlockAddress[4];// Offset=0x2 Size=0x4
    unsigned char Reserved2[3];// Offset=0x6 Size=0x3
    unsigned char Control;// Offset=0x9 Size=0x1
};

struct _ERASE// Size=0x6 (Id=592)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Long:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Immediate:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved1:3;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x3
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved2[3];// Offset=0x2 Size=0x3
    unsigned char Control;// Offset=0x5 Size=0x1
};

struct _START_STOP// Size=0x6 (Id=527)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Immediate:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved1:4;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x4
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved2[2];// Offset=0x2 Size=0x2
    struct // Size=0x1 (Id=0)
    {
        unsigned char Start:1;// Offset=0x4 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char LoadEject:1;// Offset=0x4 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved3:6;// Offset=0x4 Size=0x1 BitOffset=0x2 BitSize=0x6
    };
    unsigned char Control;// Offset=0x5 Size=0x1
};

struct _MEDIA_REMOVAL// Size=0x6 (Id=598)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved2[2];// Offset=0x2 Size=0x2
    struct // Size=0x1 (Id=0)
    {
        unsigned char Prevent:1;// Offset=0x4 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Persistant:1;// Offset=0x4 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved3:6;// Offset=0x4 Size=0x1 BitOffset=0x2 BitSize=0x6
    };
    unsigned char Control;// Offset=0x5 Size=0x1
};

struct _SEEK_BLOCK// Size=0x6 (Id=365)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Immediate:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved1:7;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x7
    };
    unsigned char BlockAddress[3];// Offset=0x2 Size=0x3
    struct // Size=0x1 (Id=0)
    {
        unsigned char Link:1;// Offset=0x5 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Flag:1;// Offset=0x5 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved2:4;// Offset=0x5 Size=0x1 BitOffset=0x2 BitSize=0x4
        unsigned char VendorUnique:2;// Offset=0x5 Size=0x1 BitOffset=0x6 BitSize=0x2
    };
};

struct _REQUEST_BLOCK_ADDRESS// Size=0x6 (Id=564)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    unsigned char Reserved1[3];// Offset=0x1 Size=0x3
    unsigned char AllocationLength;// Offset=0x4 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Link:1;// Offset=0x5 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Flag:1;// Offset=0x5 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved2:4;// Offset=0x5 Size=0x1 BitOffset=0x2 BitSize=0x4
        unsigned char VendorUnique:2;// Offset=0x5 Size=0x1 BitOffset=0x6 BitSize=0x2
    };
};

struct _PARTITION// Size=0x6 (Id=414)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Immediate:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Sel:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char PartitionSelect:6;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x6
    };
    unsigned char Reserved1[3];// Offset=0x2 Size=0x3
    unsigned char Control;// Offset=0x5 Size=0x1
};

struct _WRITE_TAPE_MARKS// Size=0x6 (Id=472)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Immediate:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char WriteSetMarks:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved:3;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x3
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char TransferLength[3];// Offset=0x2 Size=0x3
    unsigned char Control;// Offset=0x5 Size=0x1
};

struct _unnamed_473// Size=0x1 (Id=473)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Link:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Flag:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved:4;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x4
        unsigned char VendorUnique:2;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x2
    };
};

union _unnamed_474// Size=0x1 (Id=474)
{
    unsigned char value;// Offset=0x0 Size=0x1
    struct _unnamed_473 Fields;// Offset=0x0 Size=0x1
};

struct _SPACE_TAPE_MARKS// Size=0x6 (Id=475)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Code:3;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x3
        unsigned char Reserved:2;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x2
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char NumMarksMSB;// Offset=0x2 Size=0x1
    unsigned char NumMarks;// Offset=0x3 Size=0x1
    unsigned char NumMarksLSB;// Offset=0x4 Size=0x1
    union _unnamed_474 Byte6;// Offset=0x5 Size=0x1
};

struct _READ_POSITION// Size=0xa (Id=497)
{
    unsigned char Operation;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char BlockType:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved1:4;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x4
        unsigned char Lun:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved2[7];// Offset=0x2 Size=0x7
    unsigned char Control;// Offset=0x9 Size=0x1
};

struct _CDB6READWRITETAPE// Size=0x6 (Id=484)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char VendorSpecific:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Reserved:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char TransferLenMSB;// Offset=0x2 Size=0x1
    unsigned char TransferLen;// Offset=0x3 Size=0x1
    unsigned char TransferLenLSB;// Offset=0x4 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Link:1;// Offset=0x5 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Flag:1;// Offset=0x5 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved1:4;// Offset=0x5 Size=0x1 BitOffset=0x2 BitSize=0x4
        unsigned char VendorUnique:2;// Offset=0x5 Size=0x1 BitOffset=0x6 BitSize=0x2
    };
};

struct _INIT_ELEMENT_STATUS// Size=0x6 (Id=524)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char LogicalUnitNubmer:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved2[3];// Offset=0x2 Size=0x3
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved3:7;// Offset=0x5 Size=0x1 BitOffset=0x0 BitSize=0x7
        unsigned char NoBarCode:1;// Offset=0x5 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

struct _INITIALIZE_ELEMENT_RANGE// Size=0xa (Id=548)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Range:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved1:4;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x4
        unsigned char LogicalUnitNubmer:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char FirstElementAddress[2];// Offset=0x2 Size=0x2
    unsigned char Reserved2[2];// Offset=0x4 Size=0x2
    unsigned char NumberOfElements[2];// Offset=0x6 Size=0x2
    unsigned char Reserved3;// Offset=0x8 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved4:7;// Offset=0x9 Size=0x1 BitOffset=0x0 BitSize=0x7
        unsigned char NoBarCode:1;// Offset=0x9 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

struct _POSITION_TO_ELEMENT// Size=0xa (Id=355)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char TransportElementAddress[2];// Offset=0x2 Size=0x2
    unsigned char DestinationElementAddress[2];// Offset=0x4 Size=0x2
    unsigned char Reserved2[2];// Offset=0x6 Size=0x2
    struct // Size=0x1 (Id=0)
    {
        unsigned char Flip:1;// Offset=0x8 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved3:7;// Offset=0x8 Size=0x1 BitOffset=0x1 BitSize=0x7
    };
    unsigned char Control;// Offset=0x9 Size=0x1
};

struct _MOVE_MEDIUM// Size=0xc (Id=597)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char TransportElementAddress[2];// Offset=0x2 Size=0x2
    unsigned char SourceElementAddress[2];// Offset=0x4 Size=0x2
    unsigned char DestinationElementAddress[2];// Offset=0x6 Size=0x2
    unsigned char Reserved2[2];// Offset=0x8 Size=0x2
    struct // Size=0x1 (Id=0)
    {
        unsigned char Flip:1;// Offset=0xa Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved3:7;// Offset=0xa Size=0x1 BitOffset=0x1 BitSize=0x7
    };
    unsigned char Control;// Offset=0xb Size=0x1
};

struct _EXCHANGE_MEDIUM// Size=0xc (Id=521)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char TransportElementAddress[2];// Offset=0x2 Size=0x2
    unsigned char SourceElementAddress[2];// Offset=0x4 Size=0x2
    unsigned char Destination1ElementAddress[2];// Offset=0x6 Size=0x2
    unsigned char Destination2ElementAddress[2];// Offset=0x8 Size=0x2
    struct // Size=0x1 (Id=0)
    {
        unsigned char Flip1:1;// Offset=0xa Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Flip2:1;// Offset=0xa Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved3:6;// Offset=0xa Size=0x1 BitOffset=0x2 BitSize=0x6
    };
    unsigned char Control;// Offset=0xb Size=0x1
};

struct _READ_ELEMENT_STATUS// Size=0xc (Id=526)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char ElementType:4;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x4
        unsigned char VolTag:1;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char StartingElementAddress[2];// Offset=0x2 Size=0x2
    unsigned char NumberOfElements[2];// Offset=0x4 Size=0x2
    unsigned char Reserved1;// Offset=0x6 Size=0x1
    unsigned char AllocationLength[3];// Offset=0x7 Size=0x3
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Control;// Offset=0xb Size=0x1
};

struct _SEND_VOLUME_TAG// Size=0xc (Id=606)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char ElementType:4;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x4
        unsigned char Reserved1:1;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char StartingElementAddress[2];// Offset=0x2 Size=0x2
    unsigned char Reserved2;// Offset=0x4 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char ActionCode:5;// Offset=0x5 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Reserved3:3;// Offset=0x5 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved4[2];// Offset=0x6 Size=0x2
    unsigned char ParameterListLength[2];// Offset=0x8 Size=0x2
    unsigned char Reserved5;// Offset=0xa Size=0x1
    unsigned char Control;// Offset=0xb Size=0x1
};

struct _REQUEST_VOLUME_ELEMENT_ADDRESS// Size=0xc (Id=383)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char ElementType:4;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x4
        unsigned char VolTag:1;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char StartingElementAddress[2];// Offset=0x2 Size=0x2
    unsigned char NumberElements[2];// Offset=0x4 Size=0x2
    unsigned char Reserved1;// Offset=0x6 Size=0x1
    unsigned char AllocationLength[3];// Offset=0x7 Size=0x3
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Control;// Offset=0xb Size=0x1
};

struct _LOAD_UNLOAD// Size=0xc (Id=467)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Immediate:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved1:4;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x4
        unsigned char Lun:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved2[2];// Offset=0x2 Size=0x2
    struct // Size=0x1 (Id=0)
    {
        unsigned char Start:1;// Offset=0x4 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char LoadEject:1;// Offset=0x4 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved3:6;// Offset=0x4 Size=0x1 BitOffset=0x2 BitSize=0x6
    };
    unsigned char Reserved4[3];// Offset=0x5 Size=0x3
    unsigned char Slot;// Offset=0x8 Size=0x1
    unsigned char Reserved5[3];// Offset=0x9 Size=0x3
};

struct _MECH_STATUS// Size=0xc (Id=378)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Lun:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved1[6];// Offset=0x2 Size=0x6
    unsigned char AllocationLength[2];// Offset=0x8 Size=0x2
    unsigned char Reserved2[1];// Offset=0xa Size=0x1
    unsigned char Control;// Offset=0xb Size=0x1
};

struct _SYNCHRONIZE_CACHE10// Size=0xa (Id=602)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char RelAddr:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Immediate:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved:3;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x3
        unsigned char Lun:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char LogicalBlockAddress[4];// Offset=0x2 Size=0x4
    unsigned char Reserved2;// Offset=0x6 Size=0x1
    unsigned char BlockCount[2];// Offset=0x7 Size=0x2
    unsigned char Control;// Offset=0x9 Size=0x1
};

struct _GET_EVENT_STATUS_NOTIFICATION// Size=0xa (Id=486)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Immediate:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved:4;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x4
        unsigned char Lun:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved2[2];// Offset=0x2 Size=0x2
    unsigned char NotificationClassRequest;// Offset=0x4 Size=0x1
    unsigned char Reserved3[2];// Offset=0x5 Size=0x2
    unsigned char EventListLength[2];// Offset=0x7 Size=0x2
    unsigned char Control;// Offset=0x9 Size=0x1
};

struct _GET_PERFORMANCE// Size=0xc (Id=405)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Except:2;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char Write:1;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char Tolerance:2;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x2
        unsigned char Reserved0:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char StartingLBA[4];// Offset=0x2 Size=0x4
    unsigned char Reserved1[2];// Offset=0x6 Size=0x2
    unsigned char MaximumNumberOfDescriptors[2];// Offset=0x8 Size=0x2
    unsigned char Type;// Offset=0xa Size=0x1
    unsigned char Control;// Offset=0xb Size=0x1
};

struct _READ_DVD_STRUCTURE// Size=0xc (Id=363)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Lun:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char RMDBlockNumber[4];// Offset=0x2 Size=0x4
    unsigned char LayerNumber;// Offset=0x6 Size=0x1
    unsigned char Format;// Offset=0x7 Size=0x1
    unsigned char AllocationLength[2];// Offset=0x8 Size=0x2
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved3:6;// Offset=0xa Size=0x1 BitOffset=0x0 BitSize=0x6
        unsigned char AGID:2;// Offset=0xa Size=0x1 BitOffset=0x6 BitSize=0x2
    };
    unsigned char Control;// Offset=0xb Size=0x1
};

struct _SET_STREAMING// Size=0xc (Id=499)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    unsigned char Reserved[8];// Offset=0x1 Size=0x8
    unsigned char ParameterListLength[2];// Offset=0x9 Size=0x2
    unsigned char Control;// Offset=0xb Size=0x1
};

struct _SEND_DVD_STRUCTURE// Size=0xc (Id=567)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Lun:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved2[5];// Offset=0x2 Size=0x5
    unsigned char Format;// Offset=0x7 Size=0x1
    unsigned char ParameterListLength[2];// Offset=0x8 Size=0x2
    unsigned char Reserved3;// Offset=0xa Size=0x1
    unsigned char Control;// Offset=0xb Size=0x1
};

struct _SEND_KEY// Size=0xc (Id=604)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Lun:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved2[6];// Offset=0x2 Size=0x6
    unsigned char ParameterListLength[2];// Offset=0x8 Size=0x2
    struct // Size=0x1 (Id=0)
    {
        unsigned char KeyFormat:6;// Offset=0xa Size=0x1 BitOffset=0x0 BitSize=0x6
        unsigned char AGID:2;// Offset=0xa Size=0x1 BitOffset=0x6 BitSize=0x2
    };
    unsigned char Control;// Offset=0xb Size=0x1
};

struct _REPORT_KEY// Size=0xc (Id=593)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Lun:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char LogicalBlockAddress[4];// Offset=0x2 Size=0x4
    unsigned char Reserved2[2];// Offset=0x6 Size=0x2
    unsigned char AllocationLength[2];// Offset=0x8 Size=0x2
    struct // Size=0x1 (Id=0)
    {
        unsigned char KeyFormat:6;// Offset=0xa Size=0x1 BitOffset=0x0 BitSize=0x6
        unsigned char AGID:2;// Offset=0xa Size=0x1 BitOffset=0x6 BitSize=0x2
    };
    unsigned char Control;// Offset=0xb Size=0x1
};

struct _SET_READ_AHEAD// Size=0xc (Id=599)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Lun:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char TriggerLBA[4];// Offset=0x2 Size=0x4
    unsigned char ReadAheadLBA[4];// Offset=0x6 Size=0x4
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Control;// Offset=0xb Size=0x1
};

struct _READ_FORMATTED_CAPACITIES// Size=0xa (Id=495)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Lun:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved2[5];// Offset=0x2 Size=0x5
    unsigned char AllocationLength[2];// Offset=0x7 Size=0x2
    unsigned char Control;// Offset=0x9 Size=0x1
};

struct _REPORT_LUNS// Size=0xc (Id=522)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    unsigned char Reserved1[5];// Offset=0x1 Size=0x5
    unsigned char AllocationLength[4];// Offset=0x6 Size=0x4
    unsigned char Reserved2[1];// Offset=0xa Size=0x1
    unsigned char Control;// Offset=0xb Size=0x1
};

struct _PERSISTENT_RESERVE_IN// Size=0xa (Id=494)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char ServiceAction:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Reserved1:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved2[5];// Offset=0x2 Size=0x5
    unsigned char AllocationLength[2];// Offset=0x7 Size=0x2
    unsigned char Control;// Offset=0x9 Size=0x1
};

struct _PERSISTENT_RESERVE_OUT// Size=0xa (Id=560)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x2 (Id=0)
    {
        unsigned char ServiceAction:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Reserved1:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
        unsigned char Type:4;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x4
        unsigned char Scope:4;// Offset=0x2 Size=0x1 BitOffset=0x4 BitSize=0x4
    };
    unsigned char Reserved2[4];// Offset=0x3 Size=0x4
    unsigned char ParameterListLength[2];// Offset=0x7 Size=0x2
    unsigned char Control;// Offset=0x9 Size=0x1
};

struct _REPORT_TIMESTAMP// Size=0xc (Id=507)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char ServiceAction:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Reserved1:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved2[4];// Offset=0x2 Size=0x4
    unsigned char AllocationLength[4];// Offset=0x6 Size=0x4
    unsigned char Reserved3;// Offset=0xa Size=0x1
    unsigned char Control;// Offset=0xb Size=0x1
};

struct _SET_TIMESTAMP// Size=0xc (Id=437)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char ServiceAction:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Reserved1:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved2[4];// Offset=0x2 Size=0x4
    unsigned char ParameterListLength[4];// Offset=0x6 Size=0x4
    unsigned char Reserved3;// Offset=0xa Size=0x1
    unsigned char Control;// Offset=0xb Size=0x1
};

struct _REPORT_SUPPORTED_OPERATION_CODES// Size=0xc (Id=515)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x2 (Id=0)
    {
        unsigned char ServiceAction:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Reserved0:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
        unsigned char ReportOptions:3;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x3
        unsigned char Reserved1:4;// Offset=0x2 Size=0x1 BitOffset=0x3 BitSize=0x4
        unsigned char ReturnCommandTimeoutsDescriptor:1;// Offset=0x2 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    unsigned char RequestedOperationCode;// Offset=0x3 Size=0x1
    unsigned char RequestedServiceAction[2];// Offset=0x4 Size=0x2
    unsigned char AllocationLength[4];// Offset=0x6 Size=0x4
    unsigned char Reserved2;// Offset=0xa Size=0x1
    unsigned char Control;// Offset=0xb Size=0x1
};

struct _GET_CONFIGURATION// Size=0xa (Id=458)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char RequestType:2;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char Reserved1:6;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x6
    };
    unsigned char StartingFeature[2];// Offset=0x2 Size=0x2
    unsigned char Reserved2[3];// Offset=0x4 Size=0x3
    unsigned char AllocationLength[2];// Offset=0x7 Size=0x2
    unsigned char Control;// Offset=0x9 Size=0x1
};

struct _SET_CD_SPEED// Size=0xc (Id=459)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    union // Size=0x1 (Id=0)
    {
        unsigned char Reserved1;// Offset=0x1 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char RotationControl:2;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x2
            unsigned char Reserved3:6;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x6
        };
    };
    unsigned char ReadSpeed[2];// Offset=0x2 Size=0x2
    unsigned char WriteSpeed[2];// Offset=0x4 Size=0x2
    unsigned char Reserved2[5];// Offset=0x6 Size=0x5
    unsigned char Control;// Offset=0xb Size=0x1
};

struct _READ12// Size=0xc (Id=356)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char RelativeAddress:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved1:2;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x2
        unsigned char ForceUnitAccess:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char DisablePageOut:1;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char LogicalBlock[4];// Offset=0x2 Size=0x4
    unsigned char TransferLength[4];// Offset=0x6 Size=0x4
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved2:7;// Offset=0xa Size=0x1 BitOffset=0x0 BitSize=0x7
        unsigned char Streaming:1;// Offset=0xa Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    unsigned char Control;// Offset=0xb Size=0x1
};

struct _WRITE12// Size=0xc (Id=596)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char RelativeAddress:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved1:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char EBP:1;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char ForceUnitAccess:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char DisablePageOut:1;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char LogicalBlock[4];// Offset=0x2 Size=0x4
    unsigned char TransferLength[4];// Offset=0x6 Size=0x4
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved2:7;// Offset=0xa Size=0x1 BitOffset=0x0 BitSize=0x7
        unsigned char Streaming:1;// Offset=0xa Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    unsigned char Control;// Offset=0xb Size=0x1
};

struct _ATA_PASSTHROUGH12// Size=0xc (Id=555)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x2 (Id=0)
    {
        unsigned char Reserved1:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Protocol:4;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x4
        unsigned char MultipleCount:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
        unsigned char TLength:2;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char ByteBlock:1;// Offset=0x2 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char TDir:1;// Offset=0x2 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char Reserved2:1;// Offset=0x2 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char CkCond:1;// Offset=0x2 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char Offline:2;// Offset=0x2 Size=0x1 BitOffset=0x6 BitSize=0x2
    };
    unsigned char Features;// Offset=0x3 Size=0x1
    unsigned char SectorCount;// Offset=0x4 Size=0x1
    unsigned char LbaLow;// Offset=0x5 Size=0x1
    unsigned char LbaMid;// Offset=0x6 Size=0x1
    unsigned char LbaHigh;// Offset=0x7 Size=0x1
    unsigned char Device;// Offset=0x8 Size=0x1
    unsigned char Command;// Offset=0x9 Size=0x1
    unsigned char Reserved3;// Offset=0xa Size=0x1
    unsigned char Control;// Offset=0xb Size=0x1
};

struct _READ16// Size=0x10 (Id=557)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char DurationLimitDescriptor2:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved1:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char RebuildAssistRecoveryControl:1;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char ForceUnitAccess:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char DisablePageOut:1;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char ReadProtect:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char LogicalBlock[8];// Offset=0x2 Size=0x8
    unsigned char TransferLength[4];// Offset=0xa Size=0x4
    struct // Size=0x1 (Id=0)
    {
        unsigned char Group:6;// Offset=0xe Size=0x1 BitOffset=0x0 BitSize=0x6
        unsigned char DurationLimitDescriptor0:1;// Offset=0xe Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char DurationLimitDescriptor1:1;// Offset=0xe Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    unsigned char Control;// Offset=0xf Size=0x1
};

struct _WRITE16// Size=0x10 (Id=552)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char DurationLimitDescriptor2:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved1:2;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x2
        unsigned char ForceUnitAccess:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char DisablePageOut:1;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char WriteProtect:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char LogicalBlock[8];// Offset=0x2 Size=0x8
    unsigned char TransferLength[4];// Offset=0xa Size=0x4
    struct // Size=0x1 (Id=0)
    {
        unsigned char Group:6;// Offset=0xe Size=0x1 BitOffset=0x0 BitSize=0x6
        unsigned char DurationLimitDescriptor0:1;// Offset=0xe Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char DurationLimitDescriptor1:1;// Offset=0xe Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    unsigned char Control;// Offset=0xf Size=0x1
};

struct _VERIFY16// Size=0x10 (Id=449)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char ByteCheck:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char BlockVerify:1;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char Reserved2:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char DisablePageOut:1;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char VerifyProtect:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char LogicalBlock[8];// Offset=0x2 Size=0x8
    unsigned char VerificationLength[4];// Offset=0xa Size=0x4
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved3:7;// Offset=0xe Size=0x1 BitOffset=0x0 BitSize=0x7
        unsigned char Streaming:1;// Offset=0xe Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    unsigned char Control;// Offset=0xf Size=0x1
};

struct _SYNCHRONIZE_CACHE16// Size=0x10 (Id=463)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Immediate:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved2:6;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x6
    };
    unsigned char LogicalBlock[8];// Offset=0x2 Size=0x8
    unsigned char BlockCount[4];// Offset=0xa Size=0x4
    unsigned char Reserved3;// Offset=0xe Size=0x1
    unsigned char Control;// Offset=0xf Size=0x1
};

struct _READ_CAPACITY16// Size=0x10 (Id=396)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char ServiceAction:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Reserved1:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char LogicalBlock[8];// Offset=0x2 Size=0x8
    unsigned char AllocationLength[4];// Offset=0xa Size=0x4
    struct // Size=0x1 (Id=0)
    {
        unsigned char PMI:1;// Offset=0xe Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved2:7;// Offset=0xe Size=0x1 BitOffset=0x1 BitSize=0x7
    };
    unsigned char Control;// Offset=0xf Size=0x1
};

struct _ATA_PASSTHROUGH16// Size=0x10 (Id=554)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x2 (Id=0)
    {
        unsigned char Extend:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Protocol:4;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x4
        unsigned char MultipleCount:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
        unsigned char TLength:2;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char ByteBlock:1;// Offset=0x2 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char TDir:1;// Offset=0x2 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char Reserved1:1;// Offset=0x2 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char CkCond:1;// Offset=0x2 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char Offline:2;// Offset=0x2 Size=0x1 BitOffset=0x6 BitSize=0x2
    };
    unsigned char Features15_8;// Offset=0x3 Size=0x1
    unsigned char Features7_0;// Offset=0x4 Size=0x1
    unsigned char SectorCount15_8;// Offset=0x5 Size=0x1
    unsigned char SectorCount7_0;// Offset=0x6 Size=0x1
    unsigned char LbaLow15_8;// Offset=0x7 Size=0x1
    unsigned char LbaLow7_0;// Offset=0x8 Size=0x1
    unsigned char LbaMid15_8;// Offset=0x9 Size=0x1
    unsigned char LbaMid7_0;// Offset=0xa Size=0x1
    unsigned char LbaHigh15_8;// Offset=0xb Size=0x1
    unsigned char LbaHigh7_0;// Offset=0xc Size=0x1
    unsigned char Device;// Offset=0xd Size=0x1
    unsigned char Command;// Offset=0xe Size=0x1
    unsigned char Control;// Offset=0xf Size=0x1
};

struct _GET_LBA_STATUS// Size=0x10 (Id=607)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char ServiceAction:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Reserved1:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char StartingLBA[8];// Offset=0x2 Size=0x8
    unsigned char AllocationLength[4];// Offset=0xa Size=0x4
    unsigned char Reserved2;// Offset=0xe Size=0x1
    unsigned char Control;// Offset=0xf Size=0x1
};

struct _TOKEN_OPERATION// Size=0x10 (Id=338)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char ServiceAction:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Reserved1:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved2[4];// Offset=0x2 Size=0x4
    unsigned char ListIdentifier[4];// Offset=0x6 Size=0x4
    unsigned char ParameterListLength[4];// Offset=0xa Size=0x4
    struct // Size=0x1 (Id=0)
    {
        unsigned char GroupNumber:5;// Offset=0xe Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Reserved3:3;// Offset=0xe Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Control;// Offset=0xf Size=0x1
};

struct _RECEIVE_TOKEN_INFORMATION// Size=0x10 (Id=551)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char ServiceAction:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Reserved1:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char ListIdentifier[4];// Offset=0x2 Size=0x4
    unsigned char Reserved2[4];// Offset=0x6 Size=0x4
    unsigned char AllocationLength[4];// Offset=0xa Size=0x4
    unsigned char Reserved3;// Offset=0xe Size=0x1
    unsigned char Control;// Offset=0xf Size=0x1
};

struct _WRITE_BUFFER// Size=0xa (Id=406)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Mode:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char ModeSpecific:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char BufferID;// Offset=0x2 Size=0x1
    unsigned char BufferOffset[3];// Offset=0x3 Size=0x3
    unsigned char ParameterListLength[3];// Offset=0x6 Size=0x3
    unsigned char Control;// Offset=0x9 Size=0x1
};

struct _CLOSE_ZONE// Size=0x10 (Id=416)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char ServiceAction:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Reserved1:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char ZoneId[8];// Offset=0x2 Size=0x8
    unsigned char Reserved2[4];// Offset=0xa Size=0x4
    struct // Size=0x1 (Id=0)
    {
        unsigned char All:1;// Offset=0xe Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved3:7;// Offset=0xe Size=0x1 BitOffset=0x1 BitSize=0x7
    };
    unsigned char Control;// Offset=0xf Size=0x1
};

struct _FINISH_ZONE// Size=0x10 (Id=347)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char ServiceAction:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Reserved1:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char ZoneId[8];// Offset=0x2 Size=0x8
    unsigned char Reserved2[4];// Offset=0xa Size=0x4
    struct // Size=0x1 (Id=0)
    {
        unsigned char All:1;// Offset=0xe Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved3:7;// Offset=0xe Size=0x1 BitOffset=0x1 BitSize=0x7
    };
    unsigned char Control;// Offset=0xf Size=0x1
};

struct _OPEN_ZONE// Size=0x10 (Id=493)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char ServiceAction:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Reserved1:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char ZoneId[8];// Offset=0x2 Size=0x8
    unsigned char Reserved2[4];// Offset=0xa Size=0x4
    struct // Size=0x1 (Id=0)
    {
        unsigned char All:1;// Offset=0xe Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved3:7;// Offset=0xe Size=0x1 BitOffset=0x1 BitSize=0x7
    };
    unsigned char Control;// Offset=0xf Size=0x1
};

struct _RESET_WRITE_POINTER// Size=0x10 (Id=387)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char ServiceAction:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Reserved1:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char ZoneId[8];// Offset=0x2 Size=0x8
    unsigned char Reserved2[4];// Offset=0xa Size=0x4
    struct // Size=0x1 (Id=0)
    {
        unsigned char All:1;// Offset=0xe Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved3:7;// Offset=0xe Size=0x1 BitOffset=0x1 BitSize=0x7
    };
    unsigned char Control;// Offset=0xf Size=0x1
};

struct _REPORT_ZONES// Size=0x10 (Id=436)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char ServiceAction:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Reserved1:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char ZoneStartLBA[8];// Offset=0x2 Size=0x8
    unsigned char AllocationLength[4];// Offset=0xa Size=0x4
    struct // Size=0x1 (Id=0)
    {
        unsigned char ReportingOptions:6;// Offset=0xe Size=0x1 BitOffset=0x0 BitSize=0x6
        unsigned char Reserved3:1;// Offset=0xe Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char Partial:1;// Offset=0xe Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    unsigned char Control;// Offset=0xf Size=0x1
};

struct _GET_PHYSICAL_ELEMENT_STATUS// Size=0x10 (Id=540)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char ServiceAction:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Reserved1:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved2[4];// Offset=0x2 Size=0x4
    unsigned char StartingElement[4];// Offset=0x6 Size=0x4
    unsigned char AllocationLength[4];// Offset=0xa Size=0x4
    struct // Size=0x1 (Id=0)
    {
        unsigned char ReportType:4;// Offset=0xe Size=0x1 BitOffset=0x0 BitSize=0x4
        unsigned char Reserved3:2;// Offset=0xe Size=0x1 BitOffset=0x4 BitSize=0x2
        unsigned char Filter:2;// Offset=0xe Size=0x1 BitOffset=0x6 BitSize=0x2
    };
    unsigned char Control;// Offset=0xf Size=0x1
};

struct _REMOVE_ELEMENT_AND_TRUNCATE// Size=0x10 (Id=392)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char ServiceAction:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Reserved1:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char RequestedCapacity[8];// Offset=0x2 Size=0x8
    unsigned char ElementIdentifier[4];// Offset=0xa Size=0x4
    unsigned char Reserved2;// Offset=0xe Size=0x1
    unsigned char Control;// Offset=0xf Size=0x1
};

union _CDB// Size=0x10 (Id=234)
{
    struct _CDB6GENERIC CDB6GENERIC;// Offset=0x0 Size=0x6
    struct _CDB6READWRITE CDB6READWRITE;// Offset=0x0 Size=0x6
    struct _CDB6INQUIRY CDB6INQUIRY;// Offset=0x0 Size=0x6
    struct _CDB6INQUIRY3 CDB6INQUIRY3;// Offset=0x0 Size=0x6
    struct _CDB6VERIFY CDB6VERIFY;// Offset=0x0 Size=0x6
    struct _RECEIVE_DIAGNOSTIC RECEIVE_DIAGNOSTIC;// Offset=0x0 Size=0x6
    struct _SEND_DIAGNOSTIC SEND_DIAGNOSTIC;// Offset=0x0 Size=0x6
    struct _CDB6FORMAT CDB6FORMAT;// Offset=0x0 Size=0x6
    struct _CDB10 CDB10;// Offset=0x0 Size=0xa
    struct _CDB12 CDB12;// Offset=0x0 Size=0xc
    struct _CDB16 CDB16;// Offset=0x0 Size=0x10
    struct _READ_BUFFER_10 READ_BUFFER_10;// Offset=0x0 Size=0xa
    struct _READ_BUFFER_16 READ_BUFFER_16;// Offset=0x0 Size=0x10
    struct _SECURITY_PROTOCOL_IN SECURITY_PROTOCOL_IN;// Offset=0x0 Size=0xc
    struct _SECURITY_PROTOCOL_OUT SECURITY_PROTOCOL_OUT;// Offset=0x0 Size=0xc
    struct _UNMAP UNMAP;// Offset=0x0 Size=0xa
    struct _SANITIZE SANITIZE;// Offset=0x0 Size=0xa
    struct _PAUSE_RESUME PAUSE_RESUME;// Offset=0x0 Size=0xa
    struct _READ_TOC READ_TOC;// Offset=0x0 Size=0xa
    struct _READ_DISK_INFORMATION READ_DISK_INFORMATION;// Offset=0x0 Size=0xa
    struct _READ_DISK_INFORMATION READ_DISC_INFORMATION;// Offset=0x0 Size=0xa
    struct _READ_TRACK_INFORMATION READ_TRACK_INFORMATION;// Offset=0x0 Size=0xa
    struct _RESERVE_TRACK_RZONE RESERVE_TRACK_RZONE;// Offset=0x0 Size=0xa
    struct _SEND_OPC_INFORMATION SEND_OPC_INFORMATION;// Offset=0x0 Size=0xa
    struct _REPAIR_TRACK REPAIR_TRACK;// Offset=0x0 Size=0xa
    struct _CLOSE_TRACK CLOSE_TRACK;// Offset=0x0 Size=0xa
    struct _READ_BUFFER_CAPACITY READ_BUFFER_CAPACITY;// Offset=0x0 Size=0xa
    struct _SEND_CUE_SHEET SEND_CUE_SHEET;// Offset=0x0 Size=0xa
    struct _READ_HEADER READ_HEADER;// Offset=0x0 Size=0xa
    struct _PLAY_AUDIO PLAY_AUDIO;// Offset=0x0 Size=0xa
    struct _PLAY_AUDIO_MSF PLAY_AUDIO_MSF;// Offset=0x0 Size=0xa
    struct _BLANK_MEDIA BLANK_MEDIA;// Offset=0x0 Size=0xc
    struct _PLAY_CD PLAY_CD;// Offset=0x0 Size=0xc
    struct _SCAN_CD SCAN_CD;// Offset=0x0 Size=0xc
    struct _STOP_PLAY_SCAN STOP_PLAY_SCAN;// Offset=0x0 Size=0xa
    struct _SUBCHANNEL SUBCHANNEL;// Offset=0x0 Size=0xa
    struct _READ_CD READ_CD;// Offset=0x0 Size=0xc
    struct _READ_CD_MSF READ_CD_MSF;// Offset=0x0 Size=0xc
    struct _PLXTR_READ_CDDA PLXTR_READ_CDDA;// Offset=0x0 Size=0xc
    struct _NEC_READ_CDDA NEC_READ_CDDA;// Offset=0x0 Size=0xa
    struct _MODE_SENSE MODE_SENSE;// Offset=0x0 Size=0x6
    struct _MODE_SENSE10 MODE_SENSE10;// Offset=0x0 Size=0xa
    struct _MODE_SELECT MODE_SELECT;// Offset=0x0 Size=0x6
    struct _MODE_SELECT10 MODE_SELECT10;// Offset=0x0 Size=0xa
    struct _LOCATE LOCATE;// Offset=0x0 Size=0xa
    struct _LOGSENSE LOGSENSE;// Offset=0x0 Size=0xa
    struct _LOGSELECT LOGSELECT;// Offset=0x0 Size=0xa
    struct _PRINT PRINT;// Offset=0x0 Size=0x6
    struct _SEEK SEEK;// Offset=0x0 Size=0xa
    struct _ERASE ERASE;// Offset=0x0 Size=0x6
    struct _START_STOP START_STOP;// Offset=0x0 Size=0x6
    struct _MEDIA_REMOVAL MEDIA_REMOVAL;// Offset=0x0 Size=0x6
    struct _SEEK_BLOCK SEEK_BLOCK;// Offset=0x0 Size=0x6
    struct _REQUEST_BLOCK_ADDRESS REQUEST_BLOCK_ADDRESS;// Offset=0x0 Size=0x6
    struct _PARTITION PARTITION;// Offset=0x0 Size=0x6
    struct _WRITE_TAPE_MARKS WRITE_TAPE_MARKS;// Offset=0x0 Size=0x6
    struct _SPACE_TAPE_MARKS SPACE_TAPE_MARKS;// Offset=0x0 Size=0x6
    struct _READ_POSITION READ_POSITION;// Offset=0x0 Size=0xa
    struct _CDB6READWRITETAPE CDB6READWRITETAPE;// Offset=0x0 Size=0x6
    struct _INIT_ELEMENT_STATUS INIT_ELEMENT_STATUS;// Offset=0x0 Size=0x6
    struct _INITIALIZE_ELEMENT_RANGE INITIALIZE_ELEMENT_RANGE;// Offset=0x0 Size=0xa
    struct _POSITION_TO_ELEMENT POSITION_TO_ELEMENT;// Offset=0x0 Size=0xa
    struct _MOVE_MEDIUM MOVE_MEDIUM;// Offset=0x0 Size=0xc
    struct _EXCHANGE_MEDIUM EXCHANGE_MEDIUM;// Offset=0x0 Size=0xc
    struct _READ_ELEMENT_STATUS READ_ELEMENT_STATUS;// Offset=0x0 Size=0xc
    struct _SEND_VOLUME_TAG SEND_VOLUME_TAG;// Offset=0x0 Size=0xc
    struct _REQUEST_VOLUME_ELEMENT_ADDRESS REQUEST_VOLUME_ELEMENT_ADDRESS;// Offset=0x0 Size=0xc
    struct _LOAD_UNLOAD LOAD_UNLOAD;// Offset=0x0 Size=0xc
    struct _MECH_STATUS MECH_STATUS;// Offset=0x0 Size=0xc
    struct _SYNCHRONIZE_CACHE10 SYNCHRONIZE_CACHE10;// Offset=0x0 Size=0xa
    struct _GET_EVENT_STATUS_NOTIFICATION GET_EVENT_STATUS_NOTIFICATION;// Offset=0x0 Size=0xa
    struct _GET_PERFORMANCE GET_PERFORMANCE;// Offset=0x0 Size=0xc
    struct _READ_DVD_STRUCTURE READ_DVD_STRUCTURE;// Offset=0x0 Size=0xc
    struct _SET_STREAMING SET_STREAMING;// Offset=0x0 Size=0xc
    struct _SEND_DVD_STRUCTURE SEND_DVD_STRUCTURE;// Offset=0x0 Size=0xc
    struct _SEND_KEY SEND_KEY;// Offset=0x0 Size=0xc
    struct _REPORT_KEY REPORT_KEY;// Offset=0x0 Size=0xc
    struct _SET_READ_AHEAD SET_READ_AHEAD;// Offset=0x0 Size=0xc
    struct _READ_FORMATTED_CAPACITIES READ_FORMATTED_CAPACITIES;// Offset=0x0 Size=0xa
    struct _REPORT_LUNS REPORT_LUNS;// Offset=0x0 Size=0xc
    struct _PERSISTENT_RESERVE_IN PERSISTENT_RESERVE_IN;// Offset=0x0 Size=0xa
    struct _PERSISTENT_RESERVE_OUT PERSISTENT_RESERVE_OUT;// Offset=0x0 Size=0xa
    struct _REPORT_TIMESTAMP REPORT_TIMESTAMP;// Offset=0x0 Size=0xc
    struct _SET_TIMESTAMP SET_TIMESTAMP;// Offset=0x0 Size=0xc
    struct _REPORT_SUPPORTED_OPERATION_CODES REPORT_SUPPORTED_OPERATION_CODES;// Offset=0x0 Size=0xc
    struct _GET_CONFIGURATION GET_CONFIGURATION;// Offset=0x0 Size=0xa
    struct _SET_CD_SPEED SET_CD_SPEED;// Offset=0x0 Size=0xc
    struct _READ12 READ12;// Offset=0x0 Size=0xc
    struct _WRITE12 WRITE12;// Offset=0x0 Size=0xc
    struct _ATA_PASSTHROUGH12 ATA_PASSTHROUGH12;// Offset=0x0 Size=0xc
    struct _READ16 READ16;// Offset=0x0 Size=0x10
    struct _WRITE16 WRITE16;// Offset=0x0 Size=0x10
    struct _VERIFY16 VERIFY16;// Offset=0x0 Size=0x10
    struct _SYNCHRONIZE_CACHE16 SYNCHRONIZE_CACHE16;// Offset=0x0 Size=0x10
    struct _READ_CAPACITY16 READ_CAPACITY16;// Offset=0x0 Size=0x10
    struct _ATA_PASSTHROUGH16 ATA_PASSTHROUGH16;// Offset=0x0 Size=0x10
    struct _GET_LBA_STATUS GET_LBA_STATUS;// Offset=0x0 Size=0x10
    struct _TOKEN_OPERATION TOKEN_OPERATION;// Offset=0x0 Size=0x10
    struct _RECEIVE_TOKEN_INFORMATION RECEIVE_TOKEN_INFORMATION;// Offset=0x0 Size=0x10
    struct _WRITE_BUFFER WRITE_BUFFER;// Offset=0x0 Size=0xa
    struct _CLOSE_ZONE CLOSE_ZONE;// Offset=0x0 Size=0x10
    struct _FINISH_ZONE FINISH_ZONE;// Offset=0x0 Size=0x10
    struct _OPEN_ZONE OPEN_ZONE;// Offset=0x0 Size=0x10
    struct _RESET_WRITE_POINTER RESET_WRITE_POINTER;// Offset=0x0 Size=0x10
    struct _REPORT_ZONES REPORT_ZONES;// Offset=0x0 Size=0x10
    struct _GET_PHYSICAL_ELEMENT_STATUS GET_PHYSICAL_ELEMENT_STATUS;// Offset=0x0 Size=0x10
    struct _REMOVE_ELEMENT_AND_TRUNCATE REMOVE_ELEMENT_AND_TRUNCATE;// Offset=0x0 Size=0x10
    unsigned long AsUlong[4];// Offset=0x0 Size=0x10
    unsigned char AsByte[16];// Offset=0x0 Size=0x10
};
