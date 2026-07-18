struct _REPORT_SUPPORTED_OPERATION_CODES// Size=0xc (Id=1173)
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
