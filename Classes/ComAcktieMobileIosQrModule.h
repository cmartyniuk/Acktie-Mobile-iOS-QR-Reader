/**
 * Your Copyright Here
 *
 * Appcelerator Titanium is Copyright (c) 2009-2010 by Appcelerator, Inc.
 * and licensed under the Apache Public License (version 2)
 */
#import "TiModule.h"
#import "TiUIViewProxy.h"
#import "TiUIButtonProxy.h"

@interface ComAcktieMobileIosQrModule : TiModule <UINavigationControllerDelegate, ZBarReaderDelegate>
{
    @private ZBarReaderViewController *reader;
             KrollCallback *successCallback;
             KrollCallback *errorCallback;
             KrollCallback *cancelCallback;
    UIView *controls;
    UISwitch *lightSwitch;
}

@property(nonatomic,readwrite,assign) BOOL continuous;
@property(nonatomic,readwrite,assign) BOOL userControlLight;
@property(nonatomic,readwrite,assign) BOOL allowZoom;
@property(nonatomic,readwrite,assign) BOOL useJISEncoding;
@property(nonatomic,readwrite,assign) TiViewProxy* proxy;
@property(nonatomic,readwrite,assign) UIBarButtonItem* navBarButton;
@property(nonatomic,readwrite,assign) UIPopoverController *popover;
@property(nonatomic,readwrite,assign) UIImagePickerControllerCameraDevice cameraDevice;
- (void) useJISEncoding: (id)args;

@end
