struct _unnamed_363// Size=0x18 (Id=363)
{
    unsigned long CDW10;// Offset=0x0 Size=0x4
    unsigned long CDW11;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_364// Size=0x18 (Id=364)
{
    union NVME_CDW10_IDENTIFY CDW10;// Offset=0x0 Size=0x4
    union NVME_CDW11_IDENTIFY CDW11;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long CDW14;// Offset=0x10 Size=0x4
        union NVME_CDW14_IDENTIFY CDW14_V20;// Offset=0x10 Size=0x4
    };
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_365// Size=0x18 (Id=365)
{
    union NVME_CDW10_ABORT CDW10;// Offset=0x0 Size=0x4
    unsigned long CDW11;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_366// Size=0x18 (Id=366)
{
    union NVME_CDW10_GET_FEATURES CDW10;// Offset=0x0 Size=0x4
    union NVME_CDW11_FEATURES CDW11;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_367// Size=0x18 (Id=367)
{
    union NVME_CDW10_SET_FEATURES CDW10;// Offset=0x0 Size=0x4
    union NVME_CDW11_FEATURES CDW11;// Offset=0x4 Size=0x4
    union NVME_CDW12_FEATURES CDW12;// Offset=0x8 Size=0x4
    union NVME_CDW13_FEATURES CDW13;// Offset=0xc Size=0x4
    union NVME_CDW14_FEATURES CDW14;// Offset=0x10 Size=0x4
    union NVME_CDW15_FEATURES CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_368// Size=0x18 (Id=368)
{
    union // Size=0x4 (Id=0)
    {
        union NVME_CDW10_GET_LOG_PAGE CDW10;// Offset=0x0 Size=0x4
        union NVME_CDW10_GET_LOG_PAGE_V121 CDW10_V121;// Offset=0x0 Size=0x4
        union NVME_CDW10_GET_LOG_PAGE_V13 CDW10_V13;// Offset=0x0 Size=0x4
        union NVME_CDW10_GET_LOG_PAGE_V20 CDW10_V20;// Offset=0x0 Size=0x4
    };
    union NVME_CDW11_GET_LOG_PAGE CDW11;// Offset=0x4 Size=0x4
    union NVME_CDW12_GET_LOG_PAGE CDW12;// Offset=0x8 Size=0x4
    union NVME_CDW13_GET_LOG_PAGE CDW13;// Offset=0xc Size=0x4
    union // Size=0x4 (Id=0)
    {
        union NVME_CDW14_GET_LOG_PAGE CDW14;// Offset=0x10 Size=0x4
        union NVME_CDW14_GET_LOG_PAGE_V20 CDW14_V20;// Offset=0x10 Size=0x4
    };
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_369// Size=0x18 (Id=369)
{
    union NVME_CDW10_CREATE_IO_QUEUE CDW10;// Offset=0x0 Size=0x4
    union NVME_CDW11_CREATE_IO_CQ CDW11;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_370// Size=0x18 (Id=370)
{
    union NVME_CDW10_CREATE_IO_QUEUE CDW10;// Offset=0x0 Size=0x4
    union NVME_CDW11_CREATE_IO_SQ CDW11;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_371// Size=0x4 (Id=371)
{
    union NVME_CDW10_DELETE_IO_QUEUE CDW10;// Offset=0x0 Size=0x4
};

struct _unnamed_372// Size=0x18 (Id=372)
{
    union NVME_CDW10_DATASET_MANAGEMENT CDW10;// Offset=0x0 Size=0x4
    union NVME_CDW11_DATASET_MANAGEMENT CDW11;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_373// Size=0x18 (Id=373)
{
    union NVME_CDW10_SECURITY_SEND_RECEIVE CDW10;// Offset=0x0 Size=0x4
    struct NVME_CDW11_SECURITY_SEND CDW11;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_374// Size=0x18 (Id=374)
{
    union NVME_CDW10_SECURITY_SEND_RECEIVE CDW10;// Offset=0x0 Size=0x4
    struct NVME_CDW11_SECURITY_RECEIVE CDW11;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_375// Size=0x18 (Id=375)
{
    struct NVME_CDW10_FIRMWARE_DOWNLOAD CDW10;// Offset=0x0 Size=0x4
    struct NVME_CDW11_FIRMWARE_DOWNLOAD CDW11;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_376// Size=0x18 (Id=376)
{
    union NVME_CDW10_FIRMWARE_ACTIVATE CDW10;// Offset=0x0 Size=0x4
    unsigned long CDW11;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_377// Size=0x18 (Id=377)
{
    union NVME_CDW10_FORMAT_NVM CDW10;// Offset=0x0 Size=0x4
    unsigned long CDW11;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_378// Size=0x18 (Id=378)
{
    struct NVME_CDW10_DIRECTIVE_RECEIVE CDW10;// Offset=0x0 Size=0x4
    union NVME_CDW11_DIRECTIVE_RECEIVE CDW11;// Offset=0x4 Size=0x4
    union NVME_CDW12_DIRECTIVE_RECEIVE CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_379// Size=0x18 (Id=379)
{
    struct NVME_CDW10_DIRECTIVE_SEND CDW10;// Offset=0x0 Size=0x4
    union NVME_CDW11_DIRECTIVE_SEND CDW11;// Offset=0x4 Size=0x4
    union NVME_CDW12_DIRECTIVE_SEND CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_380// Size=0x18 (Id=380)
{
    union NVME_CDW10_SANITIZE CDW10;// Offset=0x0 Size=0x4
    union NVME_CDW11_SANITIZE CDW11;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_381// Size=0x18 (Id=381)
{
    unsigned long LBALOW;// Offset=0x0 Size=0x4
    unsigned long LBAHIGH;// Offset=0x4 Size=0x4
    union NVME_CDW12_READ_WRITE CDW12;// Offset=0x8 Size=0x4
    union NVME_CDW13_READ_WRITE CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    union NVME_CDW15_READ_WRITE CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_382// Size=0x18 (Id=382)
{
    union NVME_CDW10_RESERVATION_ACQUIRE CDW10;// Offset=0x0 Size=0x4
    unsigned long CDW11;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_383// Size=0x18 (Id=383)
{
    union NVME_CDW10_RESERVATION_REGISTER CDW10;// Offset=0x0 Size=0x4
    unsigned long CDW11;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_384// Size=0x18 (Id=384)
{
    union NVME_CDW10_RESERVATION_RELEASE CDW10;// Offset=0x0 Size=0x4
    unsigned long CDW11;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_385// Size=0x18 (Id=385)
{
    union NVME_CDW10_RESERVATION_REPORT CDW10;// Offset=0x0 Size=0x4
    union NVME_CDW11_RESERVATION_REPORT CDW11;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_386// Size=0x18 (Id=386)
{
    struct NVME_CDW10_ZONE_MANAGEMENT_SEND CDW1011;// Offset=0x0 Size=0x8
    unsigned long CDW12;// Offset=0x8 Size=0x4
    union NVME_CDW13_ZONE_MANAGEMENT_SEND CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_387// Size=0x18 (Id=387)
{
    struct NVME_CDW10_ZONE_MANAGEMENT_RECEIVE CDW1011;// Offset=0x0 Size=0x8
    unsigned long DWORDCOUNT;// Offset=0x8 Size=0x4
    union NVME_CDW13_ZONE_MANAGEMENT_RECEIVE CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_388// Size=0x18 (Id=388)
{
    struct NVME_CDW10_ZONE_APPEND CDW1011;// Offset=0x0 Size=0x8
    union NVME_CDW12_ZONE_APPEND CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long ILBRT;// Offset=0x10 Size=0x4
    union NVME_CDW15_ZONE_APPEND CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_389// Size=0x18 (Id=389)
{
    union NVME_CDW10_DEVICE_SELF_TEST CDW10;// Offset=0x0 Size=0x4
    unsigned long CDW11;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_390// Size=0x18 (Id=390)
{
    union NVME_CDW10_DISCOVERY_INFO_MGMT CDW10;// Offset=0x0 Size=0x4
    unsigned long CDW11;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_391// Size=0x18 (Id=391)
{
    unsigned long NDT;// Offset=0x0 Size=0x4
    unsigned long NDM;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_392// Size=0x18 (Id=392)
{
    unsigned long LBALOW;// Offset=0x0 Size=0x4
    unsigned long LBAHIGH;// Offset=0x4 Size=0x4
    union NVME_CDW12_VERIFYCOMMAND CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long EILBRT;// Offset=0x10 Size=0x4
    union NVME_CDW15_VERIFY_COMMAND CDW15;// Offset=0x14 Size=0x4
};

union _unnamed_393// Size=0x18 (Id=393)
{
    struct _unnamed_363 GENERAL;// Offset=0x0 Size=0x18
    struct _unnamed_364 IDENTIFY;// Offset=0x0 Size=0x18
    struct _unnamed_365 ABORT;// Offset=0x0 Size=0x18
    struct _unnamed_366 GETFEATURES;// Offset=0x0 Size=0x18
    struct _unnamed_367 SETFEATURES;// Offset=0x0 Size=0x18
    struct _unnamed_368 GETLOGPAGE;// Offset=0x0 Size=0x18
    struct _unnamed_369 CREATEIOCQ;// Offset=0x0 Size=0x18
    struct _unnamed_370 CREATEIOSQ;// Offset=0x0 Size=0x18
    struct _unnamed_371 DELETEIOQUEUE;// Offset=0x0 Size=0x4
    struct _unnamed_372 DATASETMANAGEMENT;// Offset=0x0 Size=0x18
    struct _unnamed_373 SECURITYSEND;// Offset=0x0 Size=0x18
    struct _unnamed_374 SECURITYRECEIVE;// Offset=0x0 Size=0x18
    struct _unnamed_375 FIRMWAREDOWNLOAD;// Offset=0x0 Size=0x18
    struct _unnamed_376 FIRMWAREACTIVATE;// Offset=0x0 Size=0x18
    struct _unnamed_377 FORMATNVM;// Offset=0x0 Size=0x18
    struct _unnamed_378 DIRECTIVERECEIVE;// Offset=0x0 Size=0x18
    struct _unnamed_379 DIRECTIVESEND;// Offset=0x0 Size=0x18
    struct _unnamed_380 SANITIZE;// Offset=0x0 Size=0x18
    struct _unnamed_381 READWRITE;// Offset=0x0 Size=0x18
    struct _unnamed_382 RESERVATIONACQUIRE;// Offset=0x0 Size=0x18
    struct _unnamed_383 RESERVATIONREGISTER;// Offset=0x0 Size=0x18
    struct _unnamed_384 RESERVATIONRELEASE;// Offset=0x0 Size=0x18
    struct _unnamed_385 RESERVATIONREPORT;// Offset=0x0 Size=0x18
    struct _unnamed_386 ZONEMANAGEMENTSEND;// Offset=0x0 Size=0x18
    struct _unnamed_387 ZONEMANAGEMENTRECEIVE;// Offset=0x0 Size=0x18
    struct _unnamed_388 ZONEAPPEND;// Offset=0x0 Size=0x18
    struct _unnamed_389 DEVICESELFTEST;// Offset=0x0 Size=0x18
    struct _unnamed_390 DISCOVERYINFOMGMT;// Offset=0x0 Size=0x18
    struct _unnamed_391 VENDORSPECIFIC;// Offset=0x0 Size=0x18
    struct _unnamed_392 VERIFYCOMMAND;// Offset=0x0 Size=0x18
};
