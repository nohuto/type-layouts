struct _PROCLOCALGIC// Size=0x50 (Id=216)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Length;// Offset=0x1 Size=0x1
    unsigned short Reserved;// Offset=0x2 Size=0x2
    unsigned long Identifier;// Offset=0x4 Size=0x4
    unsigned long AcpiProcessorId;// Offset=0x8 Size=0x4
    unsigned long Flags;// Offset=0xc Size=0x4
    unsigned long ParkingProtocolVersion;// Offset=0x10 Size=0x4
    unsigned long PerformanceInterruptGsi;// Offset=0x14 Size=0x4
    unsigned long long ParkedPhysicalAddress;// Offset=0x18 Size=0x8
    unsigned long long ControllerPhysicalAddress;// Offset=0x20 Size=0x8
    unsigned long long Gicv;// Offset=0x28 Size=0x8
    unsigned long long Gich;// Offset=0x30 Size=0x8
    unsigned long VgicMaintenanceInterrupt;// Offset=0x38 Size=0x4
    unsigned long long GicrBaseAddress;// Offset=0x3c Size=0x8
    unsigned long long Mpidr;// Offset=0x44 Size=0x8
    unsigned char ProcessorPowerEfficiencyClass;// Offset=0x4c Size=0x1
    unsigned char Reserved2[3];// Offset=0x4d Size=0x3
};
