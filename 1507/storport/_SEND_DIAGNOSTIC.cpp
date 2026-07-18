struct _SEND_DIAGNOSTIC// Size=0x6 (Id=305)
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
