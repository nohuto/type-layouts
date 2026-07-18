struct _PCI_CAPABILITIES_HEADER// Size=0x2 (Id=3905)
{
    unsigned char CapabilityID;// Offset=0x0 Size=0x1
    unsigned char Next;// Offset=0x1 Size=0x1
};

struct _PCI_FPB_CAPABILITY_HEADER// Size=0x4 (Id=934)
{
    struct _PCI_CAPABILITIES_HEADER Header;// Offset=0x0 Size=0x2
    unsigned short Reserved;// Offset=0x2 Size=0x2
};

union _PCI_FPB_CAPABILITIES_REGISTER// Size=0x4 (Id=2145)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long RidDecodeMechanismSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long MemLowDecodeMechanismSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long MemHighDecodeMechanismSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long NumSecDev:5;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x5
        unsigned long RidVectorSizeSupported:3;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x3
        unsigned long Rsvd0:5;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x5
        unsigned long MemLowVectorSizeSupported:3;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x3
        unsigned long Rsvd1:5;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x5
        unsigned long MemHighVectorSizeSupported:3;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x3
        unsigned long Rsvd2:5;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x5
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _PCI_FPB_RID_VECTOR_CONTROL1_REGISTER// Size=0x4 (Id=3864)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long RidDecodeMechanismEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Rsvd0:3;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x3
        unsigned long RidVectorGranularity:4;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x4
        unsigned long Rsvd1:11;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0xb
        unsigned long RidVectorStart:13;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0xd
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _PCI_FPB_RID_VECTOR_CONTROL2_REGISTER// Size=0x4 (Id=2202)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Rsvd0:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long RidSecondaryStart:13;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0xd
        unsigned long Rsvd1:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _PCI_FPB_MEM_LOW_VECTOR_CONTROL_REGISTER// Size=0x4 (Id=3805)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long MemLowDecodeMechanismEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Rsvd0:3;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x3
        unsigned long MemLowVectorGranularity:4;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x4
        unsigned long Rsvd1:12;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0xc
        unsigned long MemLowVectorStart:12;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0xc
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _PCI_FPB_MEM_HIGH_VECTOR_CONTROL1_REGISTER// Size=0x4 (Id=2071)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long MemHighDecodeMechanismEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Rsvd0:3;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x3
        unsigned long MemHighVectorGranularity:4;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x4
        unsigned long Rsvd1:20;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x14
        unsigned long MemHighVectorStartLower:4;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x4
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _PCI_FPB_MEM_HIGH_VECTOR_CONTROL2_REGISTER// Size=0x4 (Id=3532)
{
    unsigned long MemHighVectorStartUpper;// Offset=0x0 Size=0x4
};

union _PCI_FPB_VECTOR_ACCESS_CONTROL_REGISTER// Size=0x4 (Id=3628)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long VectorAccessOffset:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long Rsvd0:6;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x6
        unsigned long VectorSelect:2;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x2
        unsigned long Rsvd1:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _PCI_FPB_VECTOR_ACCESS_DATA_REGISTER// Size=0x4 (Id=1698)
{
    unsigned long VectorAccessData;// Offset=0x0 Size=0x4
};

struct _PCI_FPB_CAPABILITY// Size=0x24 (Id=4048)
{
    struct _PCI_FPB_CAPABILITY_HEADER Header;// Offset=0x0 Size=0x4
    union _PCI_FPB_CAPABILITIES_REGISTER CapabilitiesRegister;// Offset=0x4 Size=0x4
    union _PCI_FPB_RID_VECTOR_CONTROL1_REGISTER RidVectorControl1Register;// Offset=0x8 Size=0x4
    union _PCI_FPB_RID_VECTOR_CONTROL2_REGISTER RidVectorControl2Register;// Offset=0xc Size=0x4
    union _PCI_FPB_MEM_LOW_VECTOR_CONTROL_REGISTER MemLowVectorControlRegister;// Offset=0x10 Size=0x4
    union _PCI_FPB_MEM_HIGH_VECTOR_CONTROL1_REGISTER MemHighVectorControl1Register;// Offset=0x14 Size=0x4
    struct _PCI_FPB_MEM_HIGH_VECTOR_CONTROL2_REGISTER MemHighVectorControl2Register;// Offset=0x18 Size=0x4
    union _PCI_FPB_VECTOR_ACCESS_CONTROL_REGISTER VectorAccessControlRegister;// Offset=0x1c Size=0x4
    struct _PCI_FPB_VECTOR_ACCESS_DATA_REGISTER VectorAccessDataRegister;// Offset=0x20 Size=0x4
};
