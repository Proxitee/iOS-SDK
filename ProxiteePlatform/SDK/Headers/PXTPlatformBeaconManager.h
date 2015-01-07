//
//  PXTPlatformBeaconManager.h
//  ProxiteePlatform
//
//  Created by Michael on 6/23/14.
//  Copyright (c) 2014 Proxitee. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PXTPlatformError.h"
#import "PXTBeaconManager.h"
#import "PXTPlatformConfiguration.h"
#import "PXTPlatformNotificationCenter.h"
#import "PXTApiRequester.h"
#import "PXTBeaconManagerDelegate.h"
#import "PXTPlatformBeacon.h"
#import "PXTBeaconDTO.h"
#import "PXTOrganisationRequest.h"
#import "PXTOrganisationResponse.h"
#import "PXTPlatformInteractionManager.h"
#import "PXTInteractionBeaconRegionRequest.h"
#import "PXTInteractionBeaconRequest.h"

/** Exposes beacon tasks
*/
@interface PXTPlatformBeaconManager : NSObject<PXTBeaconManagerDelegate>

+ (PXTPlatformBeaconManager *)setupWithConfig:(PXTPlatformConfiguration *)config;
+ (PXTPlatformBeaconManager *)sharedManager;

/** The UUID associated with the organisation this is populated internally via the cloud CMS
*/
@property (strong, nonatomic) NSUUID *organisationUUID;

-(instancetype) __unavailable init;

-(instancetype)initWithConfig:(PXTPlatformConfiguration *)config;

/** Starts monitoring and potentially ranging for beacons that are configured via the cloud CMS
 
 This would typically be performed in the AppDelegate
*/
-(void)start;
/** Stops monitoring/ranging of beacons typically performed as a cleanup task
*/
-(void)stop;

@end
