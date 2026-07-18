struct _WHEA_ARM_AARCH64_EL1_CSR// Size=0x88 (Id=2433)
{
    unsigned long long ELR_EL1;// Offset=0x0 Size=0x8
    unsigned long long ESR_EL2;// Offset=0x8 Size=0x8
    unsigned long long FAR_EL1;// Offset=0x10 Size=0x8
    unsigned long long ISR_EL1;// Offset=0x18 Size=0x8
    unsigned long long MAIR_EL1;// Offset=0x20 Size=0x8
    unsigned long long MIDR_EL1;// Offset=0x28 Size=0x8
    unsigned long long MPIDR_EL1;// Offset=0x30 Size=0x8
    unsigned long long SCTLR_EL1;// Offset=0x38 Size=0x8
    unsigned long long SP_EL0;// Offset=0x40 Size=0x8
    unsigned long long SP_EL1;// Offset=0x48 Size=0x8
    unsigned long long SPSR_EL1;// Offset=0x50 Size=0x8
    unsigned long long TCR_EL1;// Offset=0x58 Size=0x8
    unsigned long long TPIDR_EL0;// Offset=0x60 Size=0x8
    unsigned long long TPIDR_EL1;// Offset=0x68 Size=0x8
    unsigned long long TPIDRRO_EL0;// Offset=0x70 Size=0x8
    unsigned long long TTBR0_EL1;// Offset=0x78 Size=0x8
    unsigned long long TTBR1_EL1;// Offset=0x80 Size=0x8
};
