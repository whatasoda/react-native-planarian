#ifdef __cplusplus
#import "react-native-planarian.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNPlanarianSpec.h"

@interface Planarian : NSObject <NativePlanarianSpec>
#else
#import <React/RCTBridgeModule.h>

@interface Planarian : NSObject <RCTBridgeModule>
#endif

@end
