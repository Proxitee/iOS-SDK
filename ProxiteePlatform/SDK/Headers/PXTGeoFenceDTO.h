//
//  PXTGeoFenceDTO.h
//  ProxiteePlatform
//
//  Created by Michael on 10/22/14.
//  Copyright (c) 2014 com.proxitee.sdk. All rights reserved.
//

#import "JSONModel.h"

@protocol PXTGeoFenceDTO

@end

@interface PXTGeoFenceDTO : JSONModel

@property (strong, nonatomic) NSString *_id;
@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSString *description;
@property (assign, nonatomic) double radius;
@property (assign, nonatomic) double longitude;
@property (assign, nonatomic) double latitude;

@end
