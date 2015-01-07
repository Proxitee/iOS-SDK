//
//  PXTDeviceTypeDTO.h
//  ProxiteePlatform
//
//  Created by Michael on 12/18/14.
//  Copyright (c) 2014 com.proxitee.sdk. All rights reserved.
//

#import "JSONModel.h"

@protocol PXTDeviceTypeDTO

@end

@interface PXTDeviceTypeDTO : JSONModel

@property (strong, nonatomic) NSString *platform;
@property (strong, nonatomic) NSString *version;
@property (strong, nonatomic) NSString *model;

@end
