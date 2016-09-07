
#import <Foundation/Foundation.h>
#import <Cordova/CDV.h>
#import <Cordova/CDVPlugin.h>
#import "GeTuiSdk.h"

@interface PushPlugin : CDVPlugin <GeTuiSdkDelegate>
{
  NSString * clientID;
  extern NSString *myDevicetoken;
}

@property (nonatomic, copy) NSString *clientID;

- (void)getClientID:(CDVInvokedUrlCommand*)command;
- (void)getDevicetoken:(CDVInvokedUrlCommand*)command;


@end
