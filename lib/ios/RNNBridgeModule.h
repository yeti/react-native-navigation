#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <React/RCTBridgeModule.h>

#import "RNNCommandsHandler.h"

@interface RNNBridgeModule : NSObject <RCTBridgeModule>

-(instancetype)initWithCommandsHandler:(RNNCommandsHandler*)commandsHandler;

-(void)pushNativeViewController:(NSString*)componentId viewController:(UIViewController *)viewController;

@end
