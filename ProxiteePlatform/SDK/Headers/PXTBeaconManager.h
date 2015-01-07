//
//  PXTBeaconManager.h
//  ProxiteeCore
//
//  Created by Michael on 6/5/14.
//  Copyright (c) 2014 Proxitee. All rights reserved.
//

#import "PXTCoreError.h"
#import "PXTBeacon.h"
#import "PXTBeaconRegion.h"
#import "PXTBeaconManagerDelegate.h"

/** Wrapper around core location to perform basic beacon tasks
*/
@interface PXTBeaconManager : NSObject<CLLocationManagerDelegate>

@property (nonatomic, weak) id<PXTBeaconManagerDelegate> delegate;

-(void)startMonitoringBeaconsForRegion:(PXTBeaconRegion *)region;
-(void)stopMonitoringBeaconsForRegion:(PXTBeaconRegion *)region;
-(void)startRangingBeaconsForRegion:(PXTBeaconRegion *)region;
-(void)stopRangingBeaconsForRegion:(PXTBeaconRegion *)region;

@end
