//
//  PXTPlatformRegionSessionAction.h
//  ProxiteePlatform
//
//  Created by Michael on 6/23/14.
//  Copyright (c) 2014 Proxitee. All rights reserved.
//

#import "JSONModel.h"
#import "PXTPlatformActionDTO.h"

@protocol PXTPlatformRegionSessionActionDTO

@end

@interface PXTPlatformRegionSessionActionDTO : JSONModel

@property (strong, nonatomic) NSString *_id;
@property (strong, nonatomic) NSString *trigger;
@property (strong, nonatomic) PXTPlatformActionDTO *action;

@end
