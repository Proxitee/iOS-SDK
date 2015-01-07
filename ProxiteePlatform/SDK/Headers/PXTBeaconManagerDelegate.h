//
//  PXTBeaconManagerDelegate.h
//  ProxiteeCore
//
//  Created by Michael on 6/5/14.
//  Copyright (c) 2014 Proxitee. All rights reserved.
//

#import "PXTBeaconManager.h"
#import "PXTBeaconRegion.h"

@class PXTBeaconManager;

@protocol PXTBeaconManagerDelegate <NSObject>

-(void)beaconManager:(PXTBeaconManager *)manager didFailWithError:(NSError *)error;
-(void)beaconManager:(PXTBeaconManager *)manager didChangeAuthorizationStatus:(PXTAuthorizationStatus)status;

#pragma mark - Monitoring

-(void)beaconManager:(PXTBeaconManager *)manager didEnterBeaconRegion:(PXTBeaconRegion *)region;
-(void)beaconManager:(PXTBeaconManager *)manager didExitBeaconRegion:(PXTBeaconRegion *)region;
-(void)beaconManager:(PXTBeaconManager *)manager monitoringDidFailForRegion:(PXTBeaconRegion *)region withError:(NSError *)error;

#pragma mark - Ranging

-(void)beaconManager:(PXTBeaconManager *)manager didRangeBeacons:(NSArray *)beacons inRegion:(PXTBeaconRegion *)region;
-(void)beaconManager:(PXTBeaconManager *)manager rangingBeaconsDidFailForRegion:(PXTBeaconRegion *)region withError:(NSError *)error;

@end