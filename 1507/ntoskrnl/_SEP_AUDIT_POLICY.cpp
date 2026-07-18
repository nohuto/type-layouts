struct _TOKEN_AUDIT_POLICY// Size=0x1e (Id=1327)
{
    unsigned char PerUserPolicy[30];// Offset=0x0 Size=0x1e
};

struct _SEP_AUDIT_POLICY// Size=0x1f (Id=792)
{
    struct _TOKEN_AUDIT_POLICY AdtTokenPolicy;// Offset=0x0 Size=0x1e
    unsigned char PolicySetStatus;// Offset=0x1e Size=0x1
};
