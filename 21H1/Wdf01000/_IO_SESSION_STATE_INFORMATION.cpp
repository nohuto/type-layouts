enum _IO_SESSION_STATE
{
    IoSessionStateCreated=1,
    IoSessionStateInitialized=2,
    IoSessionStateConnected=3,
    IoSessionStateDisconnected=4,
    IoSessionStateDisconnectedLoggedOn=5,
    IoSessionStateLoggedOn=6,
    IoSessionStateLoggedOff=7,
    IoSessionStateTerminated=8,
    IoSessionStateMax=9
};

struct _IO_SESSION_STATE_INFORMATION// Size=0xc (Id=2177)
{
    unsigned long SessionId;// Offset=0x0 Size=0x4
    enum _IO_SESSION_STATE SessionState;// Offset=0x4 Size=0x4
    unsigned char LocalSession;// Offset=0x8 Size=0x1
};
