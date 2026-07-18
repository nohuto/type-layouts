union _USBCMD// Size=0x4 (Id=522)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long RunStopBit:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long HostControllerReset:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long InterrupterEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long HostSystemErrorEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long Reserved0:3;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x3
        unsigned long LightHostControllerReset:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long ControllerSaveState:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long ControllerRestoreState:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long EnableWrapEvent:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long EnableU3MfIndexStop:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long Reserved1:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long CEMEnable:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long ExtendedTBCEnable:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long ExtendedTBCTRBStatusEnable:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long Reserved2:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
};

union _USBSTS// Size=0x4 (Id=598)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long HcHalted:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved0:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long HostSystemError:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long EventInterrupt:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long PortChangeDetect:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Reserved1:3;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x3
        unsigned long SaveStateStatus:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long RestoreStateStatus:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long SaveRestoreError:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long ControllerNotReady:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long HostControllerError:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long Reserved2:19;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x13
    };
};

union _PAGESIZE_REGISTER// Size=0x4 (Id=840)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long Size:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long Reserved0:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
};

union _DNCTRL// Size=0x4 (Id=662)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long Enable0:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long EnableFunctionWakeNotification:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Enable2:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Enable3:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long Enable4:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Enable5:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long Enable6:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long Enable7:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long Enable8:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long Enable9:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long Enable10:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long Enable11:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long Enable12:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long Enable13:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long Enable14:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long Enable15:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long Reserved0:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
};

union _CRCR// Size=0x8 (Id=520)
{
    unsigned long long AsUlong64;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long RingCycleState:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long CommandStop:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long CommandAbort:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long CommandRingRunning:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long Reserved0:2;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x2
        unsigned long long CommandRingPointer:58;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x3a
    };
};

struct _unnamed_24// Size=0x8 (Id=24)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
};

union _ULARGE_INTEGER// Size=0x8 (Id=81)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_24 u;// Offset=0x0 Size=0x8
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

union _CONFIG_REGISTER// Size=0x4 (Id=794)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long NumberOfDeviceSlotsEnabled:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long U3EntryEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long ConfigurationInformationEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long Reserved0:22;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x16
    };
};

struct _OPERATIONAL_REGISTERS// Size=0x3c (Id=460)
{
    union _USBCMD UsbCommand;// Offset=0x0 Size=0x4
    union _USBSTS UsbStatus;// Offset=0x4 Size=0x4
    union _PAGESIZE_REGISTER PageSizeRegister;// Offset=0x8 Size=0x4
    unsigned long Reserved0[2];// Offset=0xc Size=0x8
    union _DNCTRL DeviceNotificationControl;// Offset=0x14 Size=0x4
    union _CRCR CommandRingControl;// Offset=0x18 Size=0x8
    unsigned long Reserved1[4];// Offset=0x20 Size=0x10
    union _ULARGE_INTEGER DeviceContextBaseAddressArrayPointer;// Offset=0x30 Size=0x8
    union _CONFIG_REGISTER ConfigRegister;// Offset=0x38 Size=0x4
};
