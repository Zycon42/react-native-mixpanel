//
//  RNMixpanel.h
//  Dramsclub
//
//  Created by Davide Scalzo on 08/11/2015.
//  Copyright © 2015 Facebook. All rights reserved.
//

#import <React/RCTBridgeModule.h>

@interface RNMixpanel : NSObject<RCTBridgeModule>
+ (void)initWithToken:(NSString*)apiToken launchOptions: (NSDictionary *)launchOptions;
@end
