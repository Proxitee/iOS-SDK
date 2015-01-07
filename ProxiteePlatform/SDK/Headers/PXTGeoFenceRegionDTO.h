//
//  PXTGeoFenceRegionDTO.h
//  ProxiteePlatform
//
//  Created by Michael on 10/22/14.
//  Copyright (c) 2014 com.proxitee.sdk. All rights reserved.
//

#import "JSONModel.h"

@interface PXTGeoFenceRegionDTO : JSONModel

@property (strong, nonatomic) NSString *_id;
@property (strong, nonatomic) NSString *key;
@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSString *description;

@end
