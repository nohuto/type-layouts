enum _USB_IDLE_IRP_STATE
{
    IdleIrp_NoIrp=0,
    IdleIrp_WaitWorker=1,
    IdleIrp_CB_Pending=2,
    IdleIrp_CB_Canceled=3,
    IdleIrp_CB_Complete=4,
    IdleExIrp_IdleReady=5
};
