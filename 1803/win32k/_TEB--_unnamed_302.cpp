struct _PROCESSOR_NUMBER// Size=0x4 (Id=219)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned char Number;// Offset=0x2 Size=0x1
    unsigned char Reserved;// Offset=0x3 Size=0x1
};

union _TEB::_unnamed_302// Size=0x4 (Id=302)
{
    struct _PROCESSOR_NUMBER CurrentIdealProcessor;// Offset=0x0 Size=0x4
    unsigned long IdealProcessorValue;// Offset=0x0 Size=0x4
    unsigned char ReservedPad0;// Offset=0x0 Size=0x1
    unsigned char ReservedPad1;// Offset=0x1 Size=0x1
    unsigned char ReservedPad2;// Offset=0x2 Size=0x1
    unsigned char IdealProcessor;// Offset=0x3 Size=0x1
};
