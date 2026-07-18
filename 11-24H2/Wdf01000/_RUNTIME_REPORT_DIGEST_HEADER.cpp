struct _RUNTIME_REPORT_DIGEST_HEADER// Size=0x44 (Id=2800)
{
    unsigned short ReportType;// Offset=0x0 Size=0x2
    unsigned short Reserved;// Offset=0x2 Size=0x2
    unsigned char ReportDigest[64];// Offset=0x4 Size=0x40
};
