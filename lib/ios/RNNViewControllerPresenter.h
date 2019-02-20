#import "RNNBasePresenter.h"
#import "RNNNavigationButtons.h"
#import "RNNReactComponentRegistry.h"

@interface RNNViewControllerPresenter : RNNBasePresenter

- (instancetype)initWithcomponentRegistry:(RNNReactComponentRegistry *)componentRegistry;

- (void)renderComponents:(RNNNavigationOptions *)options;

- (void)renderComponents:(RNNNavigationOptions *)options dispatchGroup:(_Nonnull dispatch_group_t)group;

@property (nonatomic, strong) RNNNavigationButtons* navigationButtons;

@end
