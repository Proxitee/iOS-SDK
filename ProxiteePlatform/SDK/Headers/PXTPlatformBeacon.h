//
//  PXTPlatformBeacon.h
//  ProxiteePlatform
//
//  Created by Michael on 6/23/14.
//  Copyright (c) 2014 Proxitee. All rights reserved.
//

#import "PXTBeacon.h"
#import "PXTPlatformLocation.h"

/** Model of a proxitee beacon using values from cloud CMS
*/
@interface PXTPlatformBeacon : PXTBeacon

@property (strong, nonatomic) NSString *id;
@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) PXTPlatformLocation *location;
@property (strong, nonatomic) NSString *located;

-(id)initWithExisting:(PXTBeacon *)beacon;

@end
