struct _RUNTIME_REPORT_PACKAGE_HEADER// Size=0x28 (Id=3918)
{
    unsigned int Magic;// Offset=0x0 Size=0x4
    unsigned short PackageVersion;// Offset=0x4 Size=0x2
    unsigned short NumberOfReports;// Offset=0x6 Size=0x2
    unsigned long long ReportTypesBitmap;// Offset=0x8 Size=0x8
    unsigned int PackageSize;// Offset=0x10 Size=0x4
    unsigned short ReportDigestType;// Offset=0x14 Size=0x2
    unsigned short TotalReportDigestsSize;// Offset=0x16 Size=0x2
    unsigned short Reserved;// Offset=0x18 Size=0x2
    unsigned short SignatureScheme;// Offset=0x1a Size=0x2
    unsigned int SignatureSize;// Offset=0x1c Size=0x4
    unsigned int TotalAuthenticatedReportsSize;// Offset=0x20 Size=0x4
};
