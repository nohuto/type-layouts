enum _BDCB_CLASSIFICATION
{
    BdCbClassificationUnknownImage=0,
    BdCbClassificationKnownGoodImage=1,
    BdCbClassificationKnownBadImage=2,
    BdCbClassificationKnownBadImageBootCritical=3,
    BdCbClassificationEnd=4
};

struct _UNICODE_STRING// Size=0x10 (Id=108)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _BDCB_IMAGE_INFORMATION// Size=0x68 (Id=4003)
{
    enum _BDCB_CLASSIFICATION Classification;// Offset=0x0 Size=0x4
    unsigned long ImageFlags;// Offset=0x4 Size=0x4
    struct _UNICODE_STRING ImageName;// Offset=0x8 Size=0x10
    struct _UNICODE_STRING RegistryPath;// Offset=0x18 Size=0x10
    struct _UNICODE_STRING CertificatePublisher;// Offset=0x28 Size=0x10
    struct _UNICODE_STRING CertificateIssuer;// Offset=0x38 Size=0x10
    void * ImageHash;// Offset=0x48 Size=0x8
    void * CertificateThumbprint;// Offset=0x50 Size=0x8
    unsigned long ImageHashAlgorithm;// Offset=0x58 Size=0x4
    unsigned long ThumbprintHashAlgorithm;// Offset=0x5c Size=0x4
    unsigned long ImageHashLength;// Offset=0x60 Size=0x4
    unsigned long CertificateThumbprintLength;// Offset=0x64 Size=0x4
};
