struct _TOKEN_AUDIT_POLICY// Size=0x1f (Id=2122)
{
    unsigned char PerUserPolicy[31];// Offset=0x0 Size=0x1f
};

struct _SEP_AUDIT_POLICY// Size=0x20 (Id=1882)
{
    struct _TOKEN_AUDIT_POLICY AdtTokenPolicy;// Offset=0x0 Size=0x1f
    unsigned char PolicySetStatus;// Offset=0x1f Size=0x1
};
