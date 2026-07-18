enum _USB_20_LPM_STATUS
{
    Usb20LpmStatusUnknown=0,
    Usb20LpmEnabled=1,
    Usb20LpmDisabledSinceDeviceIsHub=2,
    Usb20LpmDisabledDueToDeviceHackFlag=3,
    Usb20LpmDisabledDueToHubHackFlag=4,
    Usb20LpmDisabledDueToHubGlobalFlag=5,
    Usb20LpmNotSupportedByDevice=6,
    Usb20LpmDisabledSinceBESLandAltHIRDNotSupported=7,
    Usb20LpmNotSupportedOnThisPort=8,
    Usb20LpmDiabledSinceDeviceOperatingInSuperspeedModeOrHigher=9
};
