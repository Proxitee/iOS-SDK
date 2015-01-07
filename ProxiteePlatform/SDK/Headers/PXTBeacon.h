//
//  PXTBeacon.h
//  ProxiteeCore
//
//  Created by Michael on 6/5/14.
//  Copyright (c) 2014 Proxitee. All rights reserved.
//

#import <CoreLocation/CoreLocation.h>
#import "PXTBeaconDefinitions.h"

@interface PXTBeacon : NSObject

@property (readonly, nonatomic) NSUUID *proximityUUID;
@property (readonly, nonatomic) NSNumber *major;
@property (readonly, nonatomic) NSNumber *minor;
@property (readonly, nonatomic) NSInteger rssi;
@property (readonly, nonatomic) PXTProximity proximity;

-(id)initWithExisting:(CLBeacon *)beacon;

@end
