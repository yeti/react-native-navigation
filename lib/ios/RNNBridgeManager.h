#import <Foundation/Foundation.h>
#import <React/RCTBridge.h>
#import "RNNBridgeManagerDelegate.h"
#import "RNNCommandsHandler.h"

typedef UIViewController * (^RNNExternalViewCreator)(NSDictionary* props, RCTBridge* bridge);

@interface RNNBridgeManager : NSObject <RCTBridgeDelegate>

- (instancetype)initWithJsCodeLocation:(NSURL *)jsCodeLocation launchOptions:(NSDictionary *)launchOptions bridgeManagerDelegate:(id<RNNBridgeManagerDelegate>)delegate mainWindow:(UIWindow *)mainWindow;

- (void)registerExternalComponent:(NSString *)name callback:(RNNExternalViewCreator)callback;

- (RNNCommandsHandler *)getRNNCommandsHandler;

@property (readonly, nonatomic, strong) RCTBridge *bridge;

@end
