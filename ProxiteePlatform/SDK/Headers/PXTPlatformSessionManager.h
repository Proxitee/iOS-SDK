//
//  PXTPlatformSessionManager.h
//  ProxiteePlatform
//
//  Created by Michael on 10/28/14.
//  Copyright (c) 2014 com.proxitee.sdk. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PXTPlatformError.h"
#import "PXTPlatformConfiguration.h"
#import "PXTApiRequester.h"
#import "PXTPlatformNotificationCenter.h"
#import "PXTRegionSessionCreateResult.h"
#import "PXTRegionSessionCreateRequest.h"
#import "PXTRegionSessionCreateResponse.h"
#import "PXTRegionSessionExpireRequest.h"
#import "PXTRegionSessionActivityResponse.h"
#import "PXTRegionSessionBeaconActivityRequest.h"
#import "PXTRegionSessionGeoFenceActivityRequest.h"

@interface PXTPlatformSessionManager : NSObject

+ (PXTPlatformSessionManager *)setupWithConfig:(PXTPlatformConfiguration *)config;
+ (PXTPlatformSessionManager *)sharedManager;

-(instancetype) __unavailable init;
-(instancetype)initWithConfig:(PXTPlatformConfiguration *)config;

@property (strong, atomic) PXTRegionSessionCreateResult *currentSession;

-(void)startSessionIfNeededWithContinuationOrNil:(void(^)())continuation;
-(void)expireSession;
-(void)recordBeaconSessionActivity:(PXTRegionSessionBeaconActivityRequest *)request activityResult:(void(^)(PXTRegionSessionActivityResult *result))continuation;
-(void)recordGeofenceSessionActivity:(PXTRegionSessionGeoFenceActivityRequest *)request activityResult:(void(^)(PXTRegionSessionActivityResult *result))continuation;

@end
