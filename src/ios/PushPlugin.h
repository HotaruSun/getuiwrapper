
#import <Foundation/Foundation.h>
#import <Cordova/CDV.h>
#import <Cordova/CDVPlugin.h>
#import "GeTuiSdk.h"
#import "AppDelegate+notification.h"

@interface PushPlugin : CDVPlugin <GeTuiSdkDelegate>
{
  NSString * clientID;
  // NSString *myDevicetoken;
  extern const NSString * myDevicetoken;
}

@property (nonatomic, copy) NSString *clientID;

- (void)getClientID:(CDVInvokedUrlCommand*)command;
- (void)getDevicetoken:(CDVInvokedUrlCommand*)command;


@end
