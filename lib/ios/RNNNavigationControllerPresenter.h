#import "RNNBasePresenter.h"
#import "RNNRootViewCreator.h"
#import "RNNReactComponentRegistry.h"

@interface RNNNavigationControllerPresenter : RNNBasePresenter

- (instancetype)initWithcomponentRegistry:(RNNReactComponentRegistry *)componentRegistry;

- (void)applyOptionsBeforePopping:(RNNNavigationOptions *)options;

- (void)renderComponents:(RNNNavigationOptions *)options;

- (void)renderComponents:(RNNNavigationOptions *)options dispatchGroup:(_Nonnull dispatch_group_t)group;

@end
