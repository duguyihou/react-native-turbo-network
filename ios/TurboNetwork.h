
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTurboNetworkSpec.h"

@interface TurboNetwork : NSObject <NativeTurboNetworkSpec>
#else
#import <React/RCTBridgeModule.h>

@interface TurboNetwork : NSObject <RCTBridgeModule>
#endif

@end
