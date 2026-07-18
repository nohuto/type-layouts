enum _USBPORT_CREATEDEV_ERROR
{
    CreateDevErrNotSet=0,
    CreateDevBadHubDevHandle=1,
    CreateDevFailedAllocDevHandle=2,
    CreateDevFailedOpenEndpoint=3,
    CreateDevFailedAllocDsBuff=4,
    CreateDevFailedGetDs=5,
    CreateDevTtNotFound=6,
    CreateDevBadDevHandlePtr=7
};
