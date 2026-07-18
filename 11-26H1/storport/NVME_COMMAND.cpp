struct _unnamed_372// Size=0x18 (Id=372)
{
    unsigned long CDW10;// Offset=0x0 Size=0x4
    unsigned long CDW11;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_373// Size=0x18 (Id=373)
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

struct _unnamed_374// Size=0x18 (Id=374)
{
    union NVME_CDW10_ABORT CDW10;// Offset=0x0 Size=0x4
    unsigned long CDW11;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_375// Size=0x18 (Id=375)
{
    union NVME_CDW10_GET_FEATURES CDW10;// Offset=0x0 Size=0x4
    union NVME_CDW11_FEATURES CDW11;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_376// Size=0x18 (Id=376)
{
    union NVME_CDW10_SET_FEATURES CDW10;// Offset=0x0 Size=0x4
    union NVME_CDW11_FEATURES CDW11;// Offset=0x4 Size=0x4
    union NVME_CDW12_FEATURES CDW12;// Offset=0x8 Size=0x4
    union NVME_CDW13_FEATURES CDW13;// Offset=0xc Size=0x4
    union NVME_CDW14_FEATURES CDW14;// Offset=0x10 Size=0x4
    union NVME_CDW15_FEATURES CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_377// Size=0x18 (Id=377)
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

struct _unnamed_378// Size=0x18 (Id=378)
{
    union NVME_CDW10_CREATE_IO_QUEUE CDW10;// Offset=0x0 Size=0x4
    union NVME_CDW11_CREATE_IO_CQ CDW11;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_379// Size=0x18 (Id=379)
{
    union NVME_CDW10_CREATE_IO_QUEUE CDW10;// Offset=0x0 Size=0x4
    union NVME_CDW11_CREATE_IO_SQ CDW11;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_380// Size=0x4 (Id=380)
{
    union NVME_CDW10_DELETE_IO_QUEUE CDW10;// Offset=0x0 Size=0x4
};

struct _unnamed_381// Size=0x18 (Id=381)
{
    union NVME_CDW10_DATASET_MANAGEMENT CDW10;// Offset=0x0 Size=0x4
    union NVME_CDW11_DATASET_MANAGEMENT CDW11;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_382// Size=0x18 (Id=382)
{
    union NVME_CDW10_SECURITY_SEND_RECEIVE CDW10;// Offset=0x0 Size=0x4
    struct NVME_CDW11_SECURITY_SEND CDW11;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_383// Size=0x18 (Id=383)
{
    union NVME_CDW10_SECURITY_SEND_RECEIVE CDW10;// Offset=0x0 Size=0x4
    struct NVME_CDW11_SECURITY_RECEIVE CDW11;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_384// Size=0x18 (Id=384)
{
    struct NVME_CDW10_FIRMWARE_DOWNLOAD CDW10;// Offset=0x0 Size=0x4
    struct NVME_CDW11_FIRMWARE_DOWNLOAD CDW11;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_385// Size=0x18 (Id=385)
{
    union NVME_CDW10_FIRMWARE_ACTIVATE CDW10;// Offset=0x0 Size=0x4
    unsigned long CDW11;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_386// Size=0x18 (Id=386)
{
    union NVME_CDW10_FORMAT_NVM CDW10;// Offset=0x0 Size=0x4
    unsigned long CDW11;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_387// Size=0x18 (Id=387)
{
    struct NVME_CDW10_DIRECTIVE_RECEIVE CDW10;// Offset=0x0 Size=0x4
    union NVME_CDW11_DIRECTIVE_RECEIVE CDW11;// Offset=0x4 Size=0x4
    union NVME_CDW12_DIRECTIVE_RECEIVE CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_388// Size=0x18 (Id=388)
{
    struct NVME_CDW10_DIRECTIVE_SEND CDW10;// Offset=0x0 Size=0x4
    union NVME_CDW11_DIRECTIVE_SEND CDW11;// Offset=0x4 Size=0x4
    union NVME_CDW12_DIRECTIVE_SEND CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_389// Size=0x18 (Id=389)
{
    union NVME_CDW10_SANITIZE CDW10;// Offset=0x0 Size=0x4
    union NVME_CDW11_SANITIZE CDW11;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_390// Size=0x18 (Id=390)
{
    unsigned long LBALOW;// Offset=0x0 Size=0x4
    unsigned long LBAHIGH;// Offset=0x4 Size=0x4
    union NVME_CDW12_READ_WRITE CDW12;// Offset=0x8 Size=0x4
    union NVME_CDW13_READ_WRITE CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    union NVME_CDW15_READ_WRITE CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_391// Size=0x18 (Id=391)
{
    union NVME_CDW10_RESERVATION_ACQUIRE CDW10;// Offset=0x0 Size=0x4
    unsigned long CDW11;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_392// Size=0x18 (Id=392)
{
    union NVME_CDW10_RESERVATION_REGISTER CDW10;// Offset=0x0 Size=0x4
    unsigned long CDW11;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_393// Size=0x18 (Id=393)
{
    union NVME_CDW10_RESERVATION_RELEASE CDW10;// Offset=0x0 Size=0x4
    unsigned long CDW11;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_394// Size=0x18 (Id=394)
{
    union NVME_CDW10_RESERVATION_REPORT CDW10;// Offset=0x0 Size=0x4
    union NVME_CDW11_RESERVATION_REPORT CDW11;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_395// Size=0x18 (Id=395)
{
    struct NVME_CDW10_ZONE_MANAGEMENT_SEND CDW1011;// Offset=0x0 Size=0x8
    unsigned long CDW12;// Offset=0x8 Size=0x4
    union NVME_CDW13_ZONE_MANAGEMENT_SEND CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_396// Size=0x18 (Id=396)
{
    struct NVME_CDW10_ZONE_MANAGEMENT_RECEIVE CDW1011;// Offset=0x0 Size=0x8
    unsigned long DWORDCOUNT;// Offset=0x8 Size=0x4
    union NVME_CDW13_ZONE_MANAGEMENT_RECEIVE CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_397// Size=0x18 (Id=397)
{
    struct NVME_CDW10_ZONE_APPEND CDW1011;// Offset=0x0 Size=0x8
    union NVME_CDW12_ZONE_APPEND CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long ILBRT;// Offset=0x10 Size=0x4
    union NVME_CDW15_ZONE_APPEND CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_398// Size=0x18 (Id=398)
{
    union NVME_CDW10_DEVICE_SELF_TEST CDW10;// Offset=0x0 Size=0x4
    unsigned long CDW11;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_399// Size=0x18 (Id=399)
{
    union NVME_CDW10_DISCOVERY_INFO_MGMT CDW10;// Offset=0x0 Size=0x4
    unsigned long CDW11;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_400// Size=0x18 (Id=400)
{
    unsigned long NDT;// Offset=0x0 Size=0x4
    unsigned long NDM;// Offset=0x4 Size=0x4
    unsigned long CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long CDW14;// Offset=0x10 Size=0x4
    unsigned long CDW15;// Offset=0x14 Size=0x4
};

struct _unnamed_401// Size=0x18 (Id=401)
{
    unsigned long LBALOW;// Offset=0x0 Size=0x4
    unsigned long LBAHIGH;// Offset=0x4 Size=0x4
    union NVME_CDW12_VERIFYCOMMAND CDW12;// Offset=0x8 Size=0x4
    unsigned long CDW13;// Offset=0xc Size=0x4
    unsigned long EILBRT;// Offset=0x10 Size=0x4
    union NVME_CDW15_VERIFY_COMMAND CDW15;// Offset=0x14 Size=0x4
};

union _unnamed_402// Size=0x18 (Id=402)
{
    struct _unnamed_372 GENERAL;// Offset=0x0 Size=0x18
    struct _unnamed_373 IDENTIFY;// Offset=0x0 Size=0x18
    struct _unnamed_374 ABORT;// Offset=0x0 Size=0x18
    struct _unnamed_375 GETFEATURES;// Offset=0x0 Size=0x18
    struct _unnamed_376 SETFEATURES;// Offset=0x0 Size=0x18
    struct _unnamed_377 GETLOGPAGE;// Offset=0x0 Size=0x18
    struct _unnamed_378 CREATEIOCQ;// Offset=0x0 Size=0x18
    struct _unnamed_379 CREATEIOSQ;// Offset=0x0 Size=0x18
    struct _unnamed_380 DELETEIOQUEUE;// Offset=0x0 Size=0x4
    struct _unnamed_381 DATASETMANAGEMENT;// Offset=0x0 Size=0x18
    struct _unnamed_382 SECURITYSEND;// Offset=0x0 Size=0x18
    struct _unnamed_383 SECURITYRECEIVE;// Offset=0x0 Size=0x18
    struct _unnamed_384 FIRMWAREDOWNLOAD;// Offset=0x0 Size=0x18
    struct _unnamed_385 FIRMWAREACTIVATE;// Offset=0x0 Size=0x18
    struct _unnamed_386 FORMATNVM;// Offset=0x0 Size=0x18
    struct _unnamed_387 DIRECTIVERECEIVE;// Offset=0x0 Size=0x18
    struct _unnamed_388 DIRECTIVESEND;// Offset=0x0 Size=0x18
    struct _unnamed_389 SANITIZE;// Offset=0x0 Size=0x18
    struct _unnamed_390 READWRITE;// Offset=0x0 Size=0x18
    struct _unnamed_391 RESERVATIONACQUIRE;// Offset=0x0 Size=0x18
    struct _unnamed_392 RESERVATIONREGISTER;// Offset=0x0 Size=0x18
    struct _unnamed_393 RESERVATIONRELEASE;// Offset=0x0 Size=0x18
    struct _unnamed_394 RESERVATIONREPORT;// Offset=0x0 Size=0x18
    struct _unnamed_395 ZONEMANAGEMENTSEND;// Offset=0x0 Size=0x18
    struct _unnamed_396 ZONEMANAGEMENTRECEIVE;// Offset=0x0 Size=0x18
    struct _unnamed_397 ZONEAPPEND;// Offset=0x0 Size=0x18
    struct _unnamed_398 DEVICESELFTEST;// Offset=0x0 Size=0x18
    struct _unnamed_399 DISCOVERYINFOMGMT;// Offset=0x0 Size=0x18
    struct _unnamed_400 VENDORSPECIFIC;// Offset=0x0 Size=0x18
    struct _unnamed_401 VERIFYCOMMAND;// Offset=0x0 Size=0x18
};

struct NVME_COMMAND// Size=0x40 (Id=403)
{
    union NVME_COMMAND_DWORD0 CDW0;// Offset=0x0 Size=0x4
    unsigned long NSID;// Offset=0x4 Size=0x4
    unsigned long Reserved0[2];// Offset=0x8 Size=0x8
    unsigned long long MPTR;// Offset=0x10 Size=0x8
    union // Size=0x28 (Id=0)
    {
        unsigned long long PRP1;// Offset=0x18 Size=0x8
        unsigned long long PRP2;// Offset=0x20 Size=0x8
        unsigned long long SGL1[2];// Offset=0x18 Size=0x10
    };
    union _unnamed_402 u;// Offset=0x28 Size=0x18
};
